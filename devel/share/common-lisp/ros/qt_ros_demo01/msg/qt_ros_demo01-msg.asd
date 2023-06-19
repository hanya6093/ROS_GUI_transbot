
(cl:in-package :asdf)

(defsystem "qt_ros_demo01-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Arm" :depends-on ("_package_Arm"))
    (:file "_package_Arm" :depends-on ("_package"))
    (:file "Joint" :depends-on ("_package_Joint"))
    (:file "_package_Joint" :depends-on ("_package"))
    (:file "PWMServo" :depends-on ("_package_PWMServo"))
    (:file "_package_PWMServo" :depends-on ("_package"))
  ))