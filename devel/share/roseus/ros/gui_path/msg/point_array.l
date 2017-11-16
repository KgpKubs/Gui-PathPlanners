;; Auto-generated. Do not edit!


(when (boundp 'gui_path::point_array)
  (if (not (find-package "GUI_PATH"))
    (make-package "GUI_PATH"))
  (shadow 'point_array (find-package "GUI_PATH")))
(unless (find-package "GUI_PATH::POINT_ARRAY")
  (make-package "GUI_PATH::POINT_ARRAY"))

(in-package "ROS")
;;//! \htmlinclude point_array.msg.html


(defclass gui_path::point_array
  :super ros::object
  :slots (_point_array _obstacle_array ))

(defmethod gui_path::point_array
  (:init
   (&key
    ((:point_array __point_array) (let (r) (dotimes (i 0) (push (instance gui_path::path_point :init) r)) r))
    ((:obstacle_array __obstacle_array) (let (r) (dotimes (i 0) (push (instance gui_path::path_point :init) r)) r))
    )
   (send-super :init)
   (setq _point_array __point_array)
   (setq _obstacle_array __obstacle_array)
   self)
  (:point_array
   (&rest __point_array)
   (if (keywordp (car __point_array))
       (send* _point_array __point_array)
     (progn
       (if __point_array (setq _point_array (car __point_array)))
       _point_array)))
  (:obstacle_array
   (&rest __obstacle_array)
   (if (keywordp (car __obstacle_array))
       (send* _obstacle_array __obstacle_array)
     (progn
       (if __obstacle_array (setq _obstacle_array (car __obstacle_array)))
       _obstacle_array)))
  (:serialization-length
   ()
   (+
    ;; gui_path/path_point[] _point_array
    (apply #'+ (send-all _point_array :serialization-length)) 4
    ;; gui_path/path_point[] _obstacle_array
    (apply #'+ (send-all _obstacle_array :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; gui_path/path_point[] _point_array
     (write-long (length _point_array) s)
     (dolist (elem _point_array)
       (send elem :serialize s)
       )
     ;; gui_path/path_point[] _obstacle_array
     (write-long (length _obstacle_array) s)
     (dolist (elem _obstacle_array)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; gui_path/path_point[] _point_array
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _point_array (let (r) (dotimes (i n) (push (instance gui_path::path_point :init) r)) r))
     (dolist (elem- _point_array)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; gui_path/path_point[] _obstacle_array
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _obstacle_array (let (r) (dotimes (i n) (push (instance gui_path::path_point :init) r)) r))
     (dolist (elem- _obstacle_array)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get gui_path::point_array :md5sum-) "b0e06ff95926b2506bb2cdfd45f68485")
(setf (get gui_path::point_array :datatype-) "gui_path/point_array")
(setf (get gui_path::point_array :definition-)
      "path_point[] point_array
path_point[] obstacle_array
================================================================================
MSG: gui_path/path_point
int64 x
int64 y
")



(provide :gui_path/point_array "b0e06ff95926b2506bb2cdfd45f68485")


