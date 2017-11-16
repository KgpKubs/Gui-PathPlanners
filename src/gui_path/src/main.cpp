#include <iostream>

#include "RRT_implementation.hpp"
#include "ros/ros.h"
#include "gui_path/point_array.h"
#include "gui_path/path_point.h"
#include "gui_path/point_SF.h"

using namespace std;
using namespace rrt;
Utils::Point<int> start,finish,origin;
RRT<int> test;
long int p=0;
ros::Publisher pub;

bool check(Utils::Point<int> cur)
{
	if(abs(cur.x)<2000 && abs(cur.y)<2000){
		// if (cur.x < 550 && cur.x > 450 && cur.y < 550 & cur.y > 450)
		// {
		// 	return false;
		// }
		return true;
	}
	return false;
}


void send_points()
{
	gui_path::point_array points;
	 
	  gui_path::path_point point;
    vector<Utils::Point<int> > path=test.getPointsOnPath();
	vector<Utils::Point<int> > obstacle_;
	cout<<"#################################################"<<endl;
	

	// for(int i=0;i<path.size();i++)
	// 	cout<<"("<<path[i].x<<","<<path[i].y<<")";
	  int count = 0;

	
	  cout<<" path.size() = "<<path.size()<<endl;
	  for(int i=0;i<path.size();i++)
	  {
	  	point.x=path[i].x;
	  	point.y=path[i].y;
	  	points.point_array.push_back(point);
	  }	  

	  //Test_obstacle
	  // obstacle_.push_back()
	 	
	  for(int i=0;i<obstacle_.size();i++)
	  {
	  	point.x=obstacle_[i].x;
	  	point.y=obstacle_[i].y;
	  	points.obstacle_array.push_back(point);
	  }	

	  pub.publish(points); cout<<"data published "<<p++<<endl;
}

void callback(const gui_path::point_SF::ConstPtr& msg)
{
	cout<<" got step_size="<<msg->step_size<<" max_iteration="<<msg->max_iteration<<endl;
	cout<<"s_x = "<<msg->s_x<<" s_y = "<<msg->s_y<<endl;

	start.x=msg->s_x;
	start.y=msg->s_y;
	finish.x=msg->f_x;
	finish.y=msg->f_y;
	test.setEndPoints(start,finish);
	test.setStepLength(msg->step_size);
	test.setBiasParameter(msg->bias_param);
	test.setMaxIterations(msg->max_iteration);
	test.plan();
	send_points();
}

int main(int argc, char** argv)
{	
	ros::init(argc, argv, "gui");
	ros::NodeHandle n;
	// ros::NodeHandle n1;

    ros::Subscriber sub = n.subscribe("/gui_params", 1000, callback);
    pub = n.advertise<gui_path::point_array>("path_planner", 1000);
      
	

	srand(time(NULL));
	start.x=-10;
	start.y=10;
	finish.x=1000;
	finish.y=730;
	origin.x=0;
	origin.y=0;

	test.setEndPoints(start,finish);
	test.setCheckPointFunction(*(check));
	test.setStepLength(50);
	test.setHalfDimensions(2000.0,2000.0);
	test.setBiasParameter(100);
	test.setOrigin(origin);
	test.setMaxIterations(10000);
	test.plan();
	// test1.setEndPoints(start,finish);
	// test1.setCheckPointFunction(*(check));
	// test1.setStepLength(200);
	// test1.setHalfDimensions(2000.0,2000.0);
	// test1.setBiasParameter(100);
	// test1.setOrigin(origin);
	// test1.setMaxIterations(10000);
	// test2.plan();

	
	 send_points();
     ros::spin();
	  	// {pub.publish(points); cout<<"data published "<<p++<<endl; ros::spinOnce();usleep(1000*200);}
    
    // ros::Rate loop_rate(10);

	// cout<<"sfd"<<connectA.x<<","<<connectA.y<<" "<<connectB.x<<","<<connectB.y;
}	
