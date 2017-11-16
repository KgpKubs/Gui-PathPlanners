// Generated by gencpp from file krssg_ssl_msgs/BeliefState.msg
// DO NOT EDIT!


#ifndef KRSSG_SSL_MSGS_MESSAGE_BELIEFSTATE_H
#define KRSSG_SSL_MSGS_MESSAGE_BELIEFSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose2D.h>
#include <geometry_msgs/Point32.h>
#include <geometry_msgs/Pose2D.h>
#include <geometry_msgs/Pose2D.h>

namespace krssg_ssl_msgs
{
template <class ContainerAllocator>
struct BeliefState_
{
  typedef BeliefState_<ContainerAllocator> Type;

  BeliefState_()
    : isteamyellow(false)
    , frame_number(0)
    , t_capture(0.0)
    , t_sent(0.0)
    , ballPos()
    , ballVel()
    , awayPos()
    , homePos()
    , ballDetected(false)
    , homeDetected()
    , awayDetected()
    , our_bot_closest_to_ball(0)
    , opp_bot_closest_to_ball(0)
    , our_goalie(0)
    , opp_goalie(0)
    , opp_bot_marking_our_attacker(0)
    , ball_at_corners(false)
    , ball_in_our_half(false)
    , ball_in_our_possession(false)  {
    }
  BeliefState_(const ContainerAllocator& _alloc)
    : isteamyellow(false)
    , frame_number(0)
    , t_capture(0.0)
    , t_sent(0.0)
    , ballPos(_alloc)
    , ballVel(_alloc)
    , awayPos(_alloc)
    , homePos(_alloc)
    , ballDetected(false)
    , homeDetected(_alloc)
    , awayDetected(_alloc)
    , our_bot_closest_to_ball(0)
    , opp_bot_closest_to_ball(0)
    , our_goalie(0)
    , opp_goalie(0)
    , opp_bot_marking_our_attacker(0)
    , ball_at_corners(false)
    , ball_in_our_half(false)
    , ball_in_our_possession(false)  {
  (void)_alloc;
    }



   typedef uint8_t _isteamyellow_type;
  _isteamyellow_type isteamyellow;

   typedef uint32_t _frame_number_type;
  _frame_number_type frame_number;

   typedef double _t_capture_type;
  _t_capture_type t_capture;

   typedef double _t_sent_type;
  _t_sent_type t_sent;

   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _ballPos_type;
  _ballPos_type ballPos;

   typedef  ::geometry_msgs::Point32_<ContainerAllocator>  _ballVel_type;
  _ballVel_type ballVel;

   typedef std::vector< ::geometry_msgs::Pose2D_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose2D_<ContainerAllocator> >::other >  _awayPos_type;
  _awayPos_type awayPos;

   typedef std::vector< ::geometry_msgs::Pose2D_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose2D_<ContainerAllocator> >::other >  _homePos_type;
  _homePos_type homePos;

   typedef uint8_t _ballDetected_type;
  _ballDetected_type ballDetected;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _homeDetected_type;
  _homeDetected_type homeDetected;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _awayDetected_type;
  _awayDetected_type awayDetected;

   typedef uint8_t _our_bot_closest_to_ball_type;
  _our_bot_closest_to_ball_type our_bot_closest_to_ball;

   typedef uint8_t _opp_bot_closest_to_ball_type;
  _opp_bot_closest_to_ball_type opp_bot_closest_to_ball;

   typedef uint8_t _our_goalie_type;
  _our_goalie_type our_goalie;

   typedef uint8_t _opp_goalie_type;
  _opp_goalie_type opp_goalie;

   typedef uint8_t _opp_bot_marking_our_attacker_type;
  _opp_bot_marking_our_attacker_type opp_bot_marking_our_attacker;

   typedef uint8_t _ball_at_corners_type;
  _ball_at_corners_type ball_at_corners;

   typedef uint8_t _ball_in_our_half_type;
  _ball_in_our_half_type ball_in_our_half;

   typedef uint8_t _ball_in_our_possession_type;
  _ball_in_our_possession_type ball_in_our_possession;




  typedef boost::shared_ptr< ::krssg_ssl_msgs::BeliefState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::krssg_ssl_msgs::BeliefState_<ContainerAllocator> const> ConstPtr;

}; // struct BeliefState_

typedef ::krssg_ssl_msgs::BeliefState_<std::allocator<void> > BeliefState;

typedef boost::shared_ptr< ::krssg_ssl_msgs::BeliefState > BeliefStatePtr;
typedef boost::shared_ptr< ::krssg_ssl_msgs::BeliefState const> BeliefStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::krssg_ssl_msgs::BeliefState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::krssg_ssl_msgs::BeliefState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace krssg_ssl_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/jade/share/geometry_msgs/cmake/../msg'], 'krssg_ssl_msgs': ['/home/ashish/robocup/src/krssg_ssl_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::krssg_ssl_msgs::BeliefState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::krssg_ssl_msgs::BeliefState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::krssg_ssl_msgs::BeliefState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::krssg_ssl_msgs::BeliefState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::krssg_ssl_msgs::BeliefState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::krssg_ssl_msgs::BeliefState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::krssg_ssl_msgs::BeliefState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3b134ff6f4ce3926462be205754425ff";
  }

  static const char* value(const ::krssg_ssl_msgs::BeliefState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3b134ff6f4ce3926ULL;
  static const uint64_t static_value2 = 0x462be205754425ffULL;
};

template<class ContainerAllocator>
struct DataType< ::krssg_ssl_msgs::BeliefState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "krssg_ssl_msgs/BeliefState";
  }

  static const char* value(const ::krssg_ssl_msgs::BeliefState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::krssg_ssl_msgs::BeliefState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# beliefstate message\n\
\n\
bool               isteamyellow\n\
uint32             frame_number \n\
float64            t_capture     \n\
float64            t_sent   \n\
geometry_msgs/Pose2D  ballPos       \n\
geometry_msgs/Point32 ballVel  \n\
geometry_msgs/Pose2D[] awayPos \n\
geometry_msgs/Pose2D[] homePos\n\
bool ballDetected\n\
bool[] homeDetected\n\
bool[] awayDetected\n\
uint8   our_bot_closest_to_ball\n\
uint8   opp_bot_closest_to_ball\n\
uint8   our_goalie			#returns 10 for no goalie\n\
uint8   opp_goalie			#returns 10 for no goalie\n\
uint8   opp_bot_marking_our_attacker\n\
bool    ball_at_corners\n\
bool    ball_in_our_half\n\
bool    ball_in_our_possession\n\
\n\
# add other stuff eg. field geometry, referee signals, bot/ball velocities and acc, score count, predicates, etc.\n\
# node will have to subscribe to vision, refbox \n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
";
  }

  static const char* value(const ::krssg_ssl_msgs::BeliefState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::krssg_ssl_msgs::BeliefState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.isteamyellow);
      stream.next(m.frame_number);
      stream.next(m.t_capture);
      stream.next(m.t_sent);
      stream.next(m.ballPos);
      stream.next(m.ballVel);
      stream.next(m.awayPos);
      stream.next(m.homePos);
      stream.next(m.ballDetected);
      stream.next(m.homeDetected);
      stream.next(m.awayDetected);
      stream.next(m.our_bot_closest_to_ball);
      stream.next(m.opp_bot_closest_to_ball);
      stream.next(m.our_goalie);
      stream.next(m.opp_goalie);
      stream.next(m.opp_bot_marking_our_attacker);
      stream.next(m.ball_at_corners);
      stream.next(m.ball_in_our_half);
      stream.next(m.ball_in_our_possession);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BeliefState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::krssg_ssl_msgs::BeliefState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::krssg_ssl_msgs::BeliefState_<ContainerAllocator>& v)
  {
    s << indent << "isteamyellow: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isteamyellow);
    s << indent << "frame_number: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.frame_number);
    s << indent << "t_capture: ";
    Printer<double>::stream(s, indent + "  ", v.t_capture);
    s << indent << "t_sent: ";
    Printer<double>::stream(s, indent + "  ", v.t_sent);
    s << indent << "ballPos: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.ballPos);
    s << indent << "ballVel: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point32_<ContainerAllocator> >::stream(s, indent + "  ", v.ballVel);
    s << indent << "awayPos[]" << std::endl;
    for (size_t i = 0; i < v.awayPos.size(); ++i)
    {
      s << indent << "  awayPos[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "    ", v.awayPos[i]);
    }
    s << indent << "homePos[]" << std::endl;
    for (size_t i = 0; i < v.homePos.size(); ++i)
    {
      s << indent << "  homePos[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "    ", v.homePos[i]);
    }
    s << indent << "ballDetected: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ballDetected);
    s << indent << "homeDetected[]" << std::endl;
    for (size_t i = 0; i < v.homeDetected.size(); ++i)
    {
      s << indent << "  homeDetected[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.homeDetected[i]);
    }
    s << indent << "awayDetected[]" << std::endl;
    for (size_t i = 0; i < v.awayDetected.size(); ++i)
    {
      s << indent << "  awayDetected[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.awayDetected[i]);
    }
    s << indent << "our_bot_closest_to_ball: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.our_bot_closest_to_ball);
    s << indent << "opp_bot_closest_to_ball: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.opp_bot_closest_to_ball);
    s << indent << "our_goalie: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.our_goalie);
    s << indent << "opp_goalie: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.opp_goalie);
    s << indent << "opp_bot_marking_our_attacker: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.opp_bot_marking_our_attacker);
    s << indent << "ball_at_corners: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ball_at_corners);
    s << indent << "ball_in_our_half: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ball_in_our_half);
    s << indent << "ball_in_our_possession: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ball_in_our_possession);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KRSSG_SSL_MSGS_MESSAGE_BELIEFSTATE_H
