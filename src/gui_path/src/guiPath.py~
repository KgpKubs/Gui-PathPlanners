import sys
from interfacePath import Ui_MainWindow
from PyQt4 import QtCore, QtGui
import rospy
from ast import literal_eval
from gui_path.msg import point_array
from gui_path.msg import path_point
from gui_path.msg import point_SF
from krssg_ssl_msgs.msg import *
import time

isSubmit = False
stepSize = 0
biasParam = 0
maxIterations = 0
count =0
vrtx = []
rgb = []
obslist = []
awayPos=[]
homePos =[]
pub = rospy.Publisher('gui_params', point_SF)
#import path_listener

rospy.init_node('path_listener', anonymous=True)
class MyFirstGuiProgram(QtGui.QMainWindow, Ui_MainWindow):
    def __init__(self, parent=None):
        self.obstacleRadius= 10
        self.obstacles=[]
        self.pathPoints=[]

        self.start=(0,0)
        self.goal=(200,200)

        # for clr in rgb:
        #     self.clrlist.append(int(clr))

        QtGui.QMainWindow.__init__(self, parent=parent)
        self.setupUi(self)
        
        self.scene = QtGui.QGraphicsScene()

        self.graphicsView.setFixedSize(600,400)
        self.scene.setSceneRect(0, 0, 600, 400)
        self.graphicsView.setScene(self.scene)
        self.hide_all()
        self.pen = QtGui.QPen(QtCore.Qt.green)
        self.mark_s = QtGui.QPen(QtCore.Qt.red)
        self.mark_e = QtGui.QPen(QtCore.Qt.blue)
        self.sendData.clicked.connect(self.sendParams)
        self.updatePath.clicked.connect(self.update_path)
        self.refresh.clicked.connect(self.hide_all)
        self.menubar.setStyleSheet("background-color: red")

    def hide_all(self):
        self.stepSizeText.setVisible(False)
        self.stepSize.setVisible(False)
        self.maxIterationsText.setVisible(False)
        self.biasParamText.setVisible(False)
        self.maxIterations.setVisible(False)
        self.biasParam.setVisible(False)
        self.scene.clear()
        self.graphicsView.setScene(self.scene)



    def refresh_window(self):
        time.sleep(0.05)
        global awayPos
        global homePos
        print("in refresh_window")
        self.scene.clear()
        # print "11111"
        self.graphicsView.setScene(self.scene)
        # print "22222"
        self.pathPoints=[]
        for v in vrtx:
            # print "3333"
            self.pathPoints.append((int(v[0]), int(v[1])))
        self.obstacles=[]
        # print "4444"
       # v=vrtx[0]
        #self.start=(int(v[0]), int(v[1]))
        #v=vrtx[-1]
        #self.goal=(int(v[0]), int(v[1])) 
        brush= QtGui.QBrush(QtCore.Qt.SolidPattern)
        #self.drawPath()
        for i in homePos[0:2]:
            if (i.x/15+300) < 600 and  (i.y/15+200) < 400:
              print (int(i.x),int(i.y))
              self.scene.addEllipse(int(i.x/15+300),int(i.y/15+200),self.obstacleRadius,self.obstacleRadius , self.mark_e, brush)      
  

    def mousePressEvent(self , e):
        global count
        count += 1
        pt=QtCore.QPointF(self.graphicsView.mapToScene(e.pos()))
        print("in mouse event")
        brush= QtGui.QBrush(QtCore.Qt.SolidPattern)

        if(count == 1):
            self.start = (pt.x(),pt.y())
            self.startPointText.setText(str(self.start))
            self.scene.addEllipse(self.start[0],self.start[1],self.obstacleRadius,self.obstacleRadius , self.mark_s, brush)
        else :
            self.goal = (pt.x(),pt.y())
            self.endPointText.setText(str(self.goal))
            self.scene.addEllipse(self.goal[0],self.goal[1],self.obstacleRadius,self.obstacleRadius , self.mark_e, brush)
            count = 0


    def drawObstacles(self ):
        brush= QtGui.QBrush(QtCore.Qt.SolidPattern)
        for i in self.obstacles:
            self.scene.addEllipse(i[0],i[1],self.obstacleRadius,self.obstacleRadius , self.pen, brush)

    def mark_positions(self):
        brush= QtGui.QBrush(QtCore.Qt.SolidPattern)
        self.scene.addEllipse(self.start[0],self.start[1],self.obstacleRadius,self.obstacleRadius , self.mark_s, brush)
        self.scene.addEllipse(self.goal[0],self.goal[1],self.obstacleRadius,self.obstacleRadius , self.mark_e, brush)    

    def drawPath(self):
        self.mark_positions()
        path = QtGui.QPainterPath()
        print("in draw_path")
        path.moveTo(self.start[0],self.start[1])
        for i in self.pathPoints:
            path.lineTo(i[0],i[1])
        path.lineTo(self.goal[0], self.goal[1])
        self.scene.addPath(path)
        path=[]   

    def sendParams(self):
        global stepSize, biasParam, maxIterations
        stepSize = float(self.stepSizeText.text())
        biasParam = float(self.biasParamText.text())
        maxIterations = float(self.maxIterationsText.text())
        self.start = literal_eval(str(self.startPointText.text()))
        self.goal = literal_eval(str(self.endPointText.text()))
        send_point(self.start, self.goal)
        isSubmit = True


    def update_path(self):
        self.refresh_window()
        self.drawPath()

import sys

p=0
def debug_path(msg):
    global p
    p+=1
    print("data received",p)

    global vrtx
    vrtx=[]
    for v in msg.point_array:
        x = int(v.x);
        y = int(v.y);
        vrtx.append([x,y])
    # print(vrtx)
    global obslist
    obslist=[]
    for obs in msg.obstacle_array:
        a = int(obs.x)
        b = int(obs.y)
        obslist.append([a,b])
    print("size of vrtx is ",len(vrtx),"point array size is ",len(msg.point_array))   
    w.refresh_window()

   #s print(vrtx)
def send_point(p1, p2):
    msg=point_SF()
    msg.s_x=p1[0]
    msg.s_y=p1[1]
    msg.f_x=p2[0]
    msg.f_y=p2[1]
    print(" here step_size ",stepSize)
    msg.step_size=stepSize
    msg.bias_param=biasParam
    msg.max_iteration=maxIterations
    pub.publish(msg)


def Callback(msg):
    global awayPos
    global homePos
    awayPos , homePos =[] , []
    awayPos=msg.awayPos 
    homePos=msg.homePos
    print(homePos[0])
    w.refresh_window()
    #rospy.spin()


if __name__ == '__main__':
    app = QtGui.QApplication(sys.argv)
    rospy.Subscriber("path_planner", point_array, debug_path)
    rospy.Subscriber("/belief_state", BeliefState , Callback);
    #path_listener()
    w = MyFirstGuiProgram()
    w.show()
    app.exec_()
    sys.exit()
