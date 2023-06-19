;; Auto-generated. Do not edit!


(when (boundp 'qt_ros_demo01::Arm)
  (if (not (find-package "QT_ROS_DEMO01"))
    (make-package "QT_ROS_DEMO01"))
  (shadow 'Arm (find-package "QT_ROS_DEMO01")))
(unless (find-package "QT_ROS_DEMO01::ARM")
  (make-package "QT_ROS_DEMO01::ARM"))

(in-package "ROS")
;;//! \htmlinclude Arm.msg.html


(defclass qt_ros_demo01::Arm
  :super ros::object
  :slots (_joint ))

(defmethod qt_ros_demo01::Arm
  (:init
   (&key
    ((:joint __joint) (let (r) (dotimes (i 0) (push (instance qt_ros_demo01::Joint :init) r)) r))
    )
   (send-super :init)
   (setq _joint __joint)
   self)
  (:joint
   (&rest __joint)
   (if (keywordp (car __joint))
       (send* _joint __joint)
     (progn
       (if __joint (setq _joint (car __joint)))
       _joint)))
  (:serialization-length
   ()
   (+
    ;; qt_ros_demo01/Joint[] _joint
    (apply #'+ (send-all _joint :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; qt_ros_demo01/Joint[] _joint
     (write-long (length _joint) s)
     (dolist (elem _joint)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; qt_ros_demo01/Joint[] _joint
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _joint (let (r) (dotimes (i n) (push (instance qt_ros_demo01::Joint :init) r)) r))
     (dolist (elem- _joint)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get qt_ros_demo01::Arm :md5sum-) "b46d7c4342769b3898ee5c56a7392dd2")
(setf (get qt_ros_demo01::Arm :datatype-) "qt_ros_demo01/Arm")
(setf (get qt_ros_demo01::Arm :definition-)
      "Joint[] joint
================================================================================
MSG: qt_ros_demo01/Joint
int32 id
int32 run_time
float32 angle

")



(provide :qt_ros_demo01/Arm "b46d7c4342769b3898ee5c56a7392dd2")


