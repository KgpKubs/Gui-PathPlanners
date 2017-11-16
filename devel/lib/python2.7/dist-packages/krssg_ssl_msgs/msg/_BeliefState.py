# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from krssg_ssl_msgs/BeliefState.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class BeliefState(genpy.Message):
  _md5sum = "3b134ff6f4ce3926462be205754425ff"
  _type = "krssg_ssl_msgs/BeliefState"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# beliefstate message

bool               isteamyellow
uint32             frame_number 
float64            t_capture     
float64            t_sent   
geometry_msgs/Pose2D  ballPos       
geometry_msgs/Point32 ballVel  
geometry_msgs/Pose2D[] awayPos 
geometry_msgs/Pose2D[] homePos
bool ballDetected
bool[] homeDetected
bool[] awayDetected
uint8   our_bot_closest_to_ball
uint8   opp_bot_closest_to_ball
uint8   our_goalie			#returns 10 for no goalie
uint8   opp_goalie			#returns 10 for no goalie
uint8   opp_bot_marking_our_attacker
bool    ball_at_corners
bool    ball_in_our_half
bool    ball_in_our_possession

# add other stuff eg. field geometry, referee signals, bot/ball velocities and acc, score count, predicates, etc.
# node will have to subscribe to vision, refbox 
================================================================================
MSG: geometry_msgs/Pose2D
# This expresses a position and orientation on a 2D manifold.

float64 x
float64 y
float64 theta
================================================================================
MSG: geometry_msgs/Point32
# This contains the position of a point in free space(with 32 bits of precision).
# It is recommeded to use Point wherever possible instead of Point32.  
# 
# This recommendation is to promote interoperability.  
#
# This message is designed to take up less space when sending
# lots of points at once, as in the case of a PointCloud.  

float32 x
float32 y
float32 z"""
  __slots__ = ['isteamyellow','frame_number','t_capture','t_sent','ballPos','ballVel','awayPos','homePos','ballDetected','homeDetected','awayDetected','our_bot_closest_to_ball','opp_bot_closest_to_ball','our_goalie','opp_goalie','opp_bot_marking_our_attacker','ball_at_corners','ball_in_our_half','ball_in_our_possession']
  _slot_types = ['bool','uint32','float64','float64','geometry_msgs/Pose2D','geometry_msgs/Point32','geometry_msgs/Pose2D[]','geometry_msgs/Pose2D[]','bool','bool[]','bool[]','uint8','uint8','uint8','uint8','uint8','bool','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       isteamyellow,frame_number,t_capture,t_sent,ballPos,ballVel,awayPos,homePos,ballDetected,homeDetected,awayDetected,our_bot_closest_to_ball,opp_bot_closest_to_ball,our_goalie,opp_goalie,opp_bot_marking_our_attacker,ball_at_corners,ball_in_our_half,ball_in_our_possession

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(BeliefState, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.isteamyellow is None:
        self.isteamyellow = False
      if self.frame_number is None:
        self.frame_number = 0
      if self.t_capture is None:
        self.t_capture = 0.
      if self.t_sent is None:
        self.t_sent = 0.
      if self.ballPos is None:
        self.ballPos = geometry_msgs.msg.Pose2D()
      if self.ballVel is None:
        self.ballVel = geometry_msgs.msg.Point32()
      if self.awayPos is None:
        self.awayPos = []
      if self.homePos is None:
        self.homePos = []
      if self.ballDetected is None:
        self.ballDetected = False
      if self.homeDetected is None:
        self.homeDetected = []
      if self.awayDetected is None:
        self.awayDetected = []
      if self.our_bot_closest_to_ball is None:
        self.our_bot_closest_to_ball = 0
      if self.opp_bot_closest_to_ball is None:
        self.opp_bot_closest_to_ball = 0
      if self.our_goalie is None:
        self.our_goalie = 0
      if self.opp_goalie is None:
        self.opp_goalie = 0
      if self.opp_bot_marking_our_attacker is None:
        self.opp_bot_marking_our_attacker = 0
      if self.ball_at_corners is None:
        self.ball_at_corners = False
      if self.ball_in_our_half is None:
        self.ball_in_our_half = False
      if self.ball_in_our_possession is None:
        self.ball_in_our_possession = False
    else:
      self.isteamyellow = False
      self.frame_number = 0
      self.t_capture = 0.
      self.t_sent = 0.
      self.ballPos = geometry_msgs.msg.Pose2D()
      self.ballVel = geometry_msgs.msg.Point32()
      self.awayPos = []
      self.homePos = []
      self.ballDetected = False
      self.homeDetected = []
      self.awayDetected = []
      self.our_bot_closest_to_ball = 0
      self.opp_bot_closest_to_ball = 0
      self.our_goalie = 0
      self.opp_goalie = 0
      self.opp_bot_marking_our_attacker = 0
      self.ball_at_corners = False
      self.ball_in_our_half = False
      self.ball_in_our_possession = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_BI5d3f.pack(_x.isteamyellow, _x.frame_number, _x.t_capture, _x.t_sent, _x.ballPos.x, _x.ballPos.y, _x.ballPos.theta, _x.ballVel.x, _x.ballVel.y, _x.ballVel.z))
      length = len(self.awayPos)
      buff.write(_struct_I.pack(length))
      for val1 in self.awayPos:
        _x = val1
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.theta))
      length = len(self.homePos)
      buff.write(_struct_I.pack(length))
      for val1 in self.homePos:
        _x = val1
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.theta))
      buff.write(_struct_B.pack(self.ballDetected))
      length = len(self.homeDetected)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(struct.pack(pattern, *self.homeDetected))
      length = len(self.awayDetected)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(struct.pack(pattern, *self.awayDetected))
      _x = self
      buff.write(_struct_8B.pack(_x.our_bot_closest_to_ball, _x.opp_bot_closest_to_ball, _x.our_goalie, _x.opp_goalie, _x.opp_bot_marking_our_attacker, _x.ball_at_corners, _x.ball_in_our_half, _x.ball_in_our_possession))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.ballPos is None:
        self.ballPos = geometry_msgs.msg.Pose2D()
      if self.ballVel is None:
        self.ballVel = geometry_msgs.msg.Point32()
      if self.awayPos is None:
        self.awayPos = None
      if self.homePos is None:
        self.homePos = None
      end = 0
      _x = self
      start = end
      end += 57
      (_x.isteamyellow, _x.frame_number, _x.t_capture, _x.t_sent, _x.ballPos.x, _x.ballPos.y, _x.ballPos.theta, _x.ballVel.x, _x.ballVel.y, _x.ballVel.z,) = _struct_BI5d3f.unpack(str[start:end])
      self.isteamyellow = bool(self.isteamyellow)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.awayPos = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose2D()
        _x = val1
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _struct_3d.unpack(str[start:end])
        self.awayPos.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.homePos = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose2D()
        _x = val1
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _struct_3d.unpack(str[start:end])
        self.homePos.append(val1)
      start = end
      end += 1
      (self.ballDetected,) = _struct_B.unpack(str[start:end])
      self.ballDetected = bool(self.ballDetected)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      end += struct.calcsize(pattern)
      self.homeDetected = struct.unpack(pattern, str[start:end])
      self.homeDetected = map(bool, self.homeDetected)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      end += struct.calcsize(pattern)
      self.awayDetected = struct.unpack(pattern, str[start:end])
      self.awayDetected = map(bool, self.awayDetected)
      _x = self
      start = end
      end += 8
      (_x.our_bot_closest_to_ball, _x.opp_bot_closest_to_ball, _x.our_goalie, _x.opp_goalie, _x.opp_bot_marking_our_attacker, _x.ball_at_corners, _x.ball_in_our_half, _x.ball_in_our_possession,) = _struct_8B.unpack(str[start:end])
      self.ball_at_corners = bool(self.ball_at_corners)
      self.ball_in_our_half = bool(self.ball_in_our_half)
      self.ball_in_our_possession = bool(self.ball_in_our_possession)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_BI5d3f.pack(_x.isteamyellow, _x.frame_number, _x.t_capture, _x.t_sent, _x.ballPos.x, _x.ballPos.y, _x.ballPos.theta, _x.ballVel.x, _x.ballVel.y, _x.ballVel.z))
      length = len(self.awayPos)
      buff.write(_struct_I.pack(length))
      for val1 in self.awayPos:
        _x = val1
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.theta))
      length = len(self.homePos)
      buff.write(_struct_I.pack(length))
      for val1 in self.homePos:
        _x = val1
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.theta))
      buff.write(_struct_B.pack(self.ballDetected))
      length = len(self.homeDetected)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(self.homeDetected.tostring())
      length = len(self.awayDetected)
      buff.write(_struct_I.pack(length))
      pattern = '<%sB'%length
      buff.write(self.awayDetected.tostring())
      _x = self
      buff.write(_struct_8B.pack(_x.our_bot_closest_to_ball, _x.opp_bot_closest_to_ball, _x.our_goalie, _x.opp_goalie, _x.opp_bot_marking_our_attacker, _x.ball_at_corners, _x.ball_in_our_half, _x.ball_in_our_possession))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.ballPos is None:
        self.ballPos = geometry_msgs.msg.Pose2D()
      if self.ballVel is None:
        self.ballVel = geometry_msgs.msg.Point32()
      if self.awayPos is None:
        self.awayPos = None
      if self.homePos is None:
        self.homePos = None
      end = 0
      _x = self
      start = end
      end += 57
      (_x.isteamyellow, _x.frame_number, _x.t_capture, _x.t_sent, _x.ballPos.x, _x.ballPos.y, _x.ballPos.theta, _x.ballVel.x, _x.ballVel.y, _x.ballVel.z,) = _struct_BI5d3f.unpack(str[start:end])
      self.isteamyellow = bool(self.isteamyellow)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.awayPos = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose2D()
        _x = val1
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _struct_3d.unpack(str[start:end])
        self.awayPos.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.homePos = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose2D()
        _x = val1
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _struct_3d.unpack(str[start:end])
        self.homePos.append(val1)
      start = end
      end += 1
      (self.ballDetected,) = _struct_B.unpack(str[start:end])
      self.ballDetected = bool(self.ballDetected)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      end += struct.calcsize(pattern)
      self.homeDetected = numpy.frombuffer(str[start:end], dtype=numpy.bool, count=length)
      self.homeDetected = map(bool, self.homeDetected)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sB'%length
      start = end
      end += struct.calcsize(pattern)
      self.awayDetected = numpy.frombuffer(str[start:end], dtype=numpy.bool, count=length)
      self.awayDetected = map(bool, self.awayDetected)
      _x = self
      start = end
      end += 8
      (_x.our_bot_closest_to_ball, _x.opp_bot_closest_to_ball, _x.our_goalie, _x.opp_goalie, _x.opp_bot_marking_our_attacker, _x.ball_at_corners, _x.ball_in_our_half, _x.ball_in_our_possession,) = _struct_8B.unpack(str[start:end])
      self.ball_at_corners = bool(self.ball_at_corners)
      self.ball_in_our_half = bool(self.ball_in_our_half)
      self.ball_in_our_possession = bool(self.ball_in_our_possession)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_8B = struct.Struct("<8B")
_struct_B = struct.Struct("<B")
_struct_BI5d3f = struct.Struct("<BI5d3f")
_struct_3d = struct.Struct("<3d")
