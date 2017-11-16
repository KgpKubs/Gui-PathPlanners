;; Auto-generated. Do not edit!


(when (boundp 'gui_path::point_SF)
  (if (not (find-package "GUI_PATH"))
    (make-package "GUI_PATH"))
  (shadow 'point_SF (find-package "GUI_PATH")))
(unless (find-package "GUI_PATH::POINT_SF")
  (make-package "GUI_PATH::POINT_SF"))

(in-package "ROS")
;;//! \htmlinclude point_SF.msg.html


(defclass gui_path::point_SF
  :super ros::object
  :slots (_s_x _s_y _f_x _f_y _step_size _bias_param _max_iteration ))

(defmethod gui_path::point_SF
  (:init
   (&key
    ((:s_x __s_x) 0)
    ((:s_y __s_y) 0)
    ((:f_x __f_x) 0)
    ((:f_y __f_y) 0)
    ((:step_size __step_size) 0)
    ((:bias_param __bias_param) 0)
    ((:max_iteration __max_iteration) 0)
    )
   (send-super :init)
   (setq _s_x (round __s_x))
   (setq _s_y (round __s_y))
   (setq _f_x (round __f_x))
   (setq _f_y (round __f_y))
   (setq _step_size (round __step_size))
   (setq _bias_param (round __bias_param))
   (setq _max_iteration (round __max_iteration))
   self)
  (:s_x
   (&optional __s_x)
   (if __s_x (setq _s_x __s_x)) _s_x)
  (:s_y
   (&optional __s_y)
   (if __s_y (setq _s_y __s_y)) _s_y)
  (:f_x
   (&optional __f_x)
   (if __f_x (setq _f_x __f_x)) _f_x)
  (:f_y
   (&optional __f_y)
   (if __f_y (setq _f_y __f_y)) _f_y)
  (:step_size
   (&optional __step_size)
   (if __step_size (setq _step_size __step_size)) _step_size)
  (:bias_param
   (&optional __bias_param)
   (if __bias_param (setq _bias_param __bias_param)) _bias_param)
  (:max_iteration
   (&optional __max_iteration)
   (if __max_iteration (setq _max_iteration __max_iteration)) _max_iteration)
  (:serialization-length
   ()
   (+
    ;; int64 _s_x
    8
    ;; int64 _s_y
    8
    ;; int64 _f_x
    8
    ;; int64 _f_y
    8
    ;; int64 _step_size
    8
    ;; int64 _bias_param
    8
    ;; int64 _max_iteration
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int64 _s_x
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _s_x (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _s_x) (= (length (_s_x . bv)) 2)) ;; bignum
              (write-long (ash (elt (_s_x . bv) 0) 0) s)
              (write-long (ash (elt (_s_x . bv) 1) -1) s))
             ((and (class _s_x) (= (length (_s_x . bv)) 1)) ;; big1
              (write-long (elt (_s_x . bv) 0) s)
              (write-long (if (>= _s_x 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _s_x s)(write-long (if (>= _s_x 0) 0 #xffffffff) s)))
     ;; int64 _s_y
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _s_y (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _s_y) (= (length (_s_y . bv)) 2)) ;; bignum
              (write-long (ash (elt (_s_y . bv) 0) 0) s)
              (write-long (ash (elt (_s_y . bv) 1) -1) s))
             ((and (class _s_y) (= (length (_s_y . bv)) 1)) ;; big1
              (write-long (elt (_s_y . bv) 0) s)
              (write-long (if (>= _s_y 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _s_y s)(write-long (if (>= _s_y 0) 0 #xffffffff) s)))
     ;; int64 _f_x
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _f_x (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _f_x) (= (length (_f_x . bv)) 2)) ;; bignum
              (write-long (ash (elt (_f_x . bv) 0) 0) s)
              (write-long (ash (elt (_f_x . bv) 1) -1) s))
             ((and (class _f_x) (= (length (_f_x . bv)) 1)) ;; big1
              (write-long (elt (_f_x . bv) 0) s)
              (write-long (if (>= _f_x 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _f_x s)(write-long (if (>= _f_x 0) 0 #xffffffff) s)))
     ;; int64 _f_y
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _f_y (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _f_y) (= (length (_f_y . bv)) 2)) ;; bignum
              (write-long (ash (elt (_f_y . bv) 0) 0) s)
              (write-long (ash (elt (_f_y . bv) 1) -1) s))
             ((and (class _f_y) (= (length (_f_y . bv)) 1)) ;; big1
              (write-long (elt (_f_y . bv) 0) s)
              (write-long (if (>= _f_y 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _f_y s)(write-long (if (>= _f_y 0) 0 #xffffffff) s)))
     ;; int64 _step_size
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _step_size (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _step_size) (= (length (_step_size . bv)) 2)) ;; bignum
              (write-long (ash (elt (_step_size . bv) 0) 0) s)
              (write-long (ash (elt (_step_size . bv) 1) -1) s))
             ((and (class _step_size) (= (length (_step_size . bv)) 1)) ;; big1
              (write-long (elt (_step_size . bv) 0) s)
              (write-long (if (>= _step_size 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _step_size s)(write-long (if (>= _step_size 0) 0 #xffffffff) s)))
     ;; int64 _bias_param
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _bias_param (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _bias_param) (= (length (_bias_param . bv)) 2)) ;; bignum
              (write-long (ash (elt (_bias_param . bv) 0) 0) s)
              (write-long (ash (elt (_bias_param . bv) 1) -1) s))
             ((and (class _bias_param) (= (length (_bias_param . bv)) 1)) ;; big1
              (write-long (elt (_bias_param . bv) 0) s)
              (write-long (if (>= _bias_param 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _bias_param s)(write-long (if (>= _bias_param 0) 0 #xffffffff) s)))
     ;; int64 _max_iteration
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _max_iteration (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _max_iteration) (= (length (_max_iteration . bv)) 2)) ;; bignum
              (write-long (ash (elt (_max_iteration . bv) 0) 0) s)
              (write-long (ash (elt (_max_iteration . bv) 1) -1) s))
             ((and (class _max_iteration) (= (length (_max_iteration . bv)) 1)) ;; big1
              (write-long (elt (_max_iteration . bv) 0) s)
              (write-long (if (>= _max_iteration 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _max_iteration s)(write-long (if (>= _max_iteration 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int64 _s_x
#+(or :alpha :irix6 :x86_64)
      (setf _s_x (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _s_x (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; int64 _s_y
#+(or :alpha :irix6 :x86_64)
      (setf _s_y (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _s_y (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; int64 _f_x
#+(or :alpha :irix6 :x86_64)
      (setf _f_x (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _f_x (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; int64 _f_y
#+(or :alpha :irix6 :x86_64)
      (setf _f_y (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _f_y (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; int64 _step_size
#+(or :alpha :irix6 :x86_64)
      (setf _step_size (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _step_size (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; int64 _bias_param
#+(or :alpha :irix6 :x86_64)
      (setf _bias_param (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _bias_param (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; int64 _max_iteration
#+(or :alpha :irix6 :x86_64)
      (setf _max_iteration (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _max_iteration (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(setf (get gui_path::point_SF :md5sum-) "8458c087980b4ac9293991435741c6cd")
(setf (get gui_path::point_SF :datatype-) "gui_path/point_SF")
(setf (get gui_path::point_SF :definition-)
      "int64 s_x
int64 s_y
int64 f_x
int64 f_y
int64 step_size
int64 bias_param
int64 max_iteration

")



(provide :gui_path/point_SF "8458c087980b4ac9293991435741c6cd")


