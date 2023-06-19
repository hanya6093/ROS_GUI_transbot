/**
 * @file /include/qt_ros_demo01/qnode.hpp
 *
 * @brief Communications central!
 *
 * @date February 2011
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef qt_ros_demo01_QNODE_HPP_
#define qt_ros_demo01_QNODE_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/

// To workaround boost/qt4 problems that won't be bugfixed. Refer to
//    https://bugreports.qt.io/browse/QTBUG-22829
#ifndef Q_MOC_RUN
#include <ros/ros.h>
#endif
#include <string>
#include <QThread>
#include <QStringListModel>
#include <nav_msgs/Odometry.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Float32.h>
#include <geometry_msgs/Twist.h>
#include <map>
#include <QDebug>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <sensor_msgs/CompressedImage.h>
#include <geometry_msgs/PoseWithCovarianceStamped.h>
#include <geometry_msgs/PoseStamped.h>
#include <QImage>
#include "qt_ros_demo01/Arm.h"
#include "qt_ros_demo01/Joint.h"
#include "qt_ros_demo01/PWMServo.h"
/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace qt_ros_demo01 {

/*****************************************************************************
** Class
*****************************************************************************/

class QNode : public QThread {
    Q_OBJECT
public:
	QNode(int argc, char** argv );
	virtual ~QNode();
	bool init();
	bool init(const std::string &master_url, const std::string &host_url);
    void move_base(char k,float speed_linear,float speed_trun);
	void run();
    void sub_image(QString Topic_name); // image话题的接口函数
    void set_goal(double x,double y,double z);   // 返航目标点发布接口函数
    void arm_base(int id,bool a_or_r); // 发布机械臂消息 a_or_r:增加或者减少
    void ptz_base(int value);
	/*********************
	** Logging
	**********************/
	enum LogLevel {
	         Debug,
	         Info,
	         Warn,
	         Error,
	         Fatal
	 };

	QStringListModel* loggingModel() { return &logging_model; }
	void log( const LogLevel &level, const std::string &msg);

Q_SIGNALS:
	void loggingUpdated();
    void rosShutdown();
    void speed_x(double x);
    void speed_y(double y);
    void power(float p);
    void Master_shutdown();
    void image_val(QImage);
    void position(double x,double y,double z);


private:
	int init_argc;
	char** init_argv;
    float angle[3] = {180,180,75};
    float span = 2;
	ros::Publisher chatter_publisher;
    ros::Publisher goal_pub; // 返航目标点发布者
    ros::Subscriber cmdVel_sub;
    ros::Subscriber chatter_subscriber; // 对话订阅者
    ros::Subscriber power_sub;
    ros::Publisher cmd_pub; // 位置发布者
    ros::Subscriber amcl_pose_sub; // 位姿订阅者
    QStringListModel logging_model;
    image_transport::Subscriber image_sub; // 图像订阅者
    ros::Subscriber imagecompressed_sub; //压缩图像订阅者
    ros::Publisher arm_pub; // 机械臂发布者
    ros::Publisher ptz_pub; // 云台发布者
    void speedCallback(const nav_msgs::Odometry::ConstPtr& msg);
    void powerCallback(const std_msgs::Float32& message_holder);
    void myCallback(const std_msgs::Float64& message_holder);
    void image_callback(const sensor_msgs::ImageConstPtr &msg); // 图像订阅的回调函数
    void imageCompressed_callback(const sensor_msgs::CompressedImageConstPtr &msg); // 压缩图像回调函数
    void amcl_pose_callback(const geometry_msgs::PoseWithCovarianceStamped &msg);   // 导航信息回调函数
    QImage Mat2QImage(cv::Mat const& src); // 将cv2的图像类型转为Qt图像类型
};

}  // namespace qt_ros_demo01

#endif /* qt_ros_demo01_QNODE_HPP_ */
