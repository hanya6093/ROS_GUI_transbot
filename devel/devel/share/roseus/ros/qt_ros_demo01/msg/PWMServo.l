;; Auto-generated. Do not edit!


(when (boundp 'qt_ros_demo01::PWMServo)
  (if (not (find-package "QT_ROS_DEMO01"))
    (make-package "QT_ROS_DEMO01"))
  (shadow 'PWMServo (find-package "QT_ROS_DEMO01")))
(unless (find-package "QT_ROS_DEMO01::PWMSERVO")
  (make-package "QT_ROS_DEMO01::PWMSERVO"))

(in-package "ROS")
;;//! \htmlinclude PWMServo.msg.html


(defclass qt_ros_demo01::PWMServo
  :super ros::object
  :slots (_id _angle ))

(defmethod qt_ros_demo01::PWMServo
  (:init
   (&key
    ((:id __id) 0)
    ((:angle __angle) 0)
    )
   (send-super :init)
   (setq _id (round __id))
   (setq _angle (round __angle))
   self)
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:angle
   (&optional __angle)
   (if __angle (setq _angle __angle)) _angle)
  (:serialization-length
   ()
   (+
    ;; int32 _id
    4
    ;; int32 _angle
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _id
       (write-long _id s)
     ;; int32 _angle
       (write-long _angle s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _id
     (setq _id (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _angle
     (setq _angle (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get qt_ros_demo01::PWMServo :md5sum-) "c5a368d31c65388d88289de5a105a271")
(setf (get qt_ros_demo01::PWMServo :datatype-) "qt_ros_demo01/PWMServo")
(setf (get qt_ros_demo01::PWMServo :definition-)
      "int32 id
int32 angle
")



(provide :qt_ros_demo01/PWMServo "c5a368d31c65388d88289de5a105a271")


