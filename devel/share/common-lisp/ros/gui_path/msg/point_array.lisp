; Auto-generated. Do not edit!


(cl:in-package gui_path-msg)


;//! \htmlinclude point_array.msg.html

(cl:defclass <point_array> (roslisp-msg-protocol:ros-message)
  ((point_array
    :reader point_array
    :initarg :point_array
    :type (cl:vector gui_path-msg:path_point)
   :initform (cl:make-array 0 :element-type 'gui_path-msg:path_point :initial-element (cl:make-instance 'gui_path-msg:path_point)))
   (obstacle_array
    :reader obstacle_array
    :initarg :obstacle_array
    :type (cl:vector gui_path-msg:path_point)
   :initform (cl:make-array 0 :element-type 'gui_path-msg:path_point :initial-element (cl:make-instance 'gui_path-msg:path_point))))
)

(cl:defclass point_array (<point_array>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <point_array>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'point_array)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name gui_path-msg:<point_array> is deprecated: use gui_path-msg:point_array instead.")))

(cl:ensure-generic-function 'point_array-val :lambda-list '(m))
(cl:defmethod point_array-val ((m <point_array>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gui_path-msg:point_array-val is deprecated.  Use gui_path-msg:point_array instead.")
  (point_array m))

(cl:ensure-generic-function 'obstacle_array-val :lambda-list '(m))
(cl:defmethod obstacle_array-val ((m <point_array>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gui_path-msg:obstacle_array-val is deprecated.  Use gui_path-msg:obstacle_array instead.")
  (obstacle_array m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <point_array>) ostream)
  "Serializes a message object of type '<point_array>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'point_array))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'point_array))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'obstacle_array))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'obstacle_array))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <point_array>) istream)
  "Deserializes a message object of type '<point_array>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'point_array) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'point_array)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'gui_path-msg:path_point))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'obstacle_array) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'obstacle_array)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'gui_path-msg:path_point))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<point_array>)))
  "Returns string type for a message object of type '<point_array>"
  "gui_path/point_array")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'point_array)))
  "Returns string type for a message object of type 'point_array"
  "gui_path/point_array")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<point_array>)))
  "Returns md5sum for a message object of type '<point_array>"
  "b0e06ff95926b2506bb2cdfd45f68485")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'point_array)))
  "Returns md5sum for a message object of type 'point_array"
  "b0e06ff95926b2506bb2cdfd45f68485")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<point_array>)))
  "Returns full string definition for message of type '<point_array>"
  (cl:format cl:nil "path_point[] point_array~%path_point[] obstacle_array~%================================================================================~%MSG: gui_path/path_point~%int64 x~%int64 y~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'point_array)))
  "Returns full string definition for message of type 'point_array"
  (cl:format cl:nil "path_point[] point_array~%path_point[] obstacle_array~%================================================================================~%MSG: gui_path/path_point~%int64 x~%int64 y~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <point_array>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'point_array) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'obstacle_array) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <point_array>))
  "Converts a ROS message object to a list"
  (cl:list 'point_array
    (cl:cons ':point_array (point_array msg))
    (cl:cons ':obstacle_array (obstacle_array msg))
))
