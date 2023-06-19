/**
 * @file /src/qnode.cpp
 *
 * @brief Ros communication central!
 *
 * @date February 2011
 **/

/*****************************************************************************
** Includes
*****************************************************************************/

#include <ros/ros.h>
#include <ros/network.h>
#include <string>
#include <std_msgs/String.h>
#include <sstream>
#include "../include/qt_ros_demo01/qnode.hpp"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace qt_ros_demo01 {

/*****************************************************************************
** 回调函数
*****************************************************************************/

// 能量回调函数
void QNode::powerCallback(const std_msgs::Float32 &message_holder)
{

    emit power(message_holder.data);
}
// 消息回调函数
void QNode::myCallback(const std_msgs::Float64 &message_holder)
{
    qDebug()<<message_holder.data;
}
// 速度回调函数
void QNode::speedCallback(const nav_msgs::Odometry::ConstPtr& msg)
{
    emit speed_x(msg->twist.twist.linear.x);
    emit speed_y(msg->twist.twist.angular.z);
}

// 图像回调函数
void QNode::image_callback(const sensor_msgs::ImageConstPtr &msg){
//    qDebug()<<"3、进入回调";
    // 定义CV图像类型指针
    cv_bridge::CvImagePtr cv_ptr;
    // 将ros图像类型转为cv类型
    cv_ptr = cv_bridge::toCvCopy(msg,msg->encoding);
    // 使用Mat2QImage函数将cv图像类型转为QImage类型
//    qDebug()<<"4、成功转换图像";
    QImage im = Mat2QImage(cv_ptr->image);
//    qDebug()<<"5、发送图像";
    emit image_val(im); // 将最终图像信号发送
}

void QNode::imageCompressed_callback(const sensor_msgs::CompressedImageConstPtr &msg){
//        qDebug()<<"压缩图像";
        // 定义CV图像类型指针
        cv_bridge::CvImagePtr cv_ptr;
        // 将ros图像类型转为cv类型
        cv_ptr = cv_bridge::toCvCopy(msg,sensor_msgs::image_encodings::BGR8);
        // 使用Mat2QImage函数将cv图像类型转为QImage类型
    //    qDebug()<<"4、成功转换图像";
        QImage im = Mat2QImage(cv_ptr->image);
    //    qDebug()<<"5、发送图像";
        emit image_val(im); // 将最终图像信号发送
}
// 导航位姿信息回调函数
void QNode::amcl_pose_callback(const geometry_msgs::PoseWithCovarianceStamped &msg){
    emit position(msg.pose.pose.position.x,msg.pose.pose.position.y,msg.pose.pose.orientation.z);
}

/*****************************************************************************
** ROS Initial
*****************************************************************************/

// 构造节点
QNode::QNode(int argc, char** argv ) :init_argc(argc),init_argv(argv){
}

// 析构节点
QNode::~QNode() {
    if(ros::isStarted()) {
      ros::shutdown(); // explicitly needed since we use ros::start();
      ros::waitForShutdown();
    }
    wait();
}

// 初始化(1)
bool QNode::init() {
	ros::init(init_argc,init_argv,"qt_ros_demo01");
	if ( ! ros::master::check() ) {
		return false;
	}
	ros::start(); // explicitly needed since our nodehandle is going out of scope.
	ros::NodeHandle n;
	// Add your ros communications here.
    cmdVel_sub =n.subscribe<nav_msgs::Odometry>("odom",1000,&QNode::speedCallback,this);
    // cmdVel_sub =n.subscribe<nav_msgs::Odometry>("raw_odom",1000,&QNode::speedCallback,this);
    power_sub=n.subscribe("power",1000,&QNode::powerCallback,this);
    amcl_pose_sub = n.subscribe("amcl_pose",1000,&QNode::amcl_pose_callback,this);  // 位姿信息订阅

    // 速度控制话题
    cmd_pub = n.advertise<geometry_msgs::Twist>("/cmd_vel", 1000);

	chatter_publisher = n.advertise<std_msgs::String>("chatter", 1000);
    // 返航点发布者
    goal_pub = n.advertise<geometry_msgs::PoseStamped>("move_base_simple/goal",1000);
    // 机械臂发布话题
    arm_pub = n.advertise<qt_ros_demo01::Arm>("/TargetAngle",10);
    // 云台控制发布话题
    ptz_pub = n.advertise<qt_ros_demo01::PWMServo>("/PWMServo",10);
    start();    // 启动ros节点 运行 run()函数
	return true;
}

// 初始化(2)
bool QNode::init(const std::string &master_url, const std::string &host_url) {
	std::map<std::string,std::string> remappings;
	remappings["__master"] = master_url;
	remappings["__hostname"] = host_url;
	ros::init(remappings,"qt_ros_demo01");
	if ( ! ros::master::check() ) {
		return false;
	}
    ros::start(); // explicitly needed since our nodehandle is going out of scope.
	ros::NodeHandle n;
	// Add your ros communications here.
    // 创建速度话题的订阅者
    cmdVel_sub =n.subscribe<nav_msgs::Odometry>("odom",200,&QNode::speedCallback,this);
    // cmdVel_sub =n.subscribe<nav_msgs::Odometry>("raw_odom",1000,&QNode::speedCallback,this);
    power_sub=n.subscribe("power",1000,&QNode::powerCallback,this);
    amcl_pose_sub = n.subscribe("amcl_pose",1000,&QNode::amcl_pose_callback,this);  // 位姿信息订阅

    //速度控制话题
    cmd_pub = n.advertise<geometry_msgs::Twist>("/cmd_vel", 1000);

	chatter_publisher = n.advertise<std_msgs::String>("chatter", 1000);
    // 返航点发布者
    goal_pub = n.advertise<geometry_msgs::PoseStamped>("move_base_simple/goal",1000);
    // 机械臂发布话题
    arm_pub = n.advertise<qt_ros_demo01::Arm>("/TargetAngle",10);
    // 云台控制发布话题
    ptz_pub = n.advertise<qt_ros_demo01::PWMServo>("/PWMServo",10);
    start();    // 启动ros节点 运行 run()函数
	return true;
}

/*****************************************************************************
** 接口函数
*****************************************************************************/

// 节点启动
void QNode::run() {
	ros::Rate loop_rate(1);
	int count = 0;
	while ( ros::ok() ) {
        //调用消息处理回调函数
		std_msgs::String msg;
        std::stringstream ss;
        // qt_ros_demo01::Arm arm;
        ss << "hello world " << count;
        msg.data = ss.str();
        chatter_publisher.publish(msg);
        // joint_pub.publish(arm);
        log(Info,std::string("I sent: ")+msg.data);
		ros::spinOnce();
		loop_rate.sleep();
		++count;
	}
//	std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
	Q_EMIT rosShutdown(); // used to signal the gui for a shutdown (useful to roslaunch)
}

// 发布机器人速度控制
void QNode::move_base(char k,float speed_linear,float speed_trun)
 {
     std::map<char, std::vector<float>> moveBindings
     {
       {'i', {1, 0, 0, 0}},
       {'o', {1, 0, 0, -1}},
       {'j', {0, 0, 0, 1}},
       {'l', {0, 0, 0, -1}},
       {'u', {1, 0, 0, 1}},
       {',', {-1, 0, 0, 0}},
       {'.', {-1, 0, 0, 1}},
       {'m', {-1, 0, 0, -1}},
       {'O', {1, -1, 0, 0}},
       {'I', {1, 0, 0, 0}},
       {'J', {0, 1, 0, 0}},
       {'L', {0, -1, 0, 0}},
       {'U', {1, 1, 0, 0}},
       {'<', {-1, 0, 0, 0}},
       {'>', {-1, -1, 0, 0}},
       {'M', {-1, 1, 0, 0}},
       {'t', {0, 0, 1, 0}},
       {'b', {0, 0, -1, 0}},
       {'k', {0, 0, 0, 0}},
       {'K', {0, 0, 0, 0}},
     };
    char key=k;
    //计算是往哪个方向
    float x = moveBindings[key][0];
    float y = moveBindings[key][1];
    float z = moveBindings[key][2];
    float th = moveBindings[key][3];
    //计算线速度和角速度
    float speed = speed_linear;
    float turn = speed_trun;
    // Update the Twist message
    geometry_msgs::Twist twist;
    twist.linear.x = x * speed;
    twist.linear.y = y * speed;
    twist.linear.z = z * speed;

    twist.angular.x = 0;
    twist.angular.y = 0;
    twist.angular.z = th * turn;

    // Publish it and resolve any remaining callbacks
    cmd_pub.publish(twist);
    ros::spinOnce();
 }

// 发布机械臂控制
void QNode::arm_base(int id,bool a_or_r){
    int joint_id = id - 7;
    int32_t speed_time = 10;
    // 修改发布的角度
    if(a_or_r){
        angle[joint_id] = angle[joint_id] + span;
    }else{
        angle[joint_id] = angle[joint_id] - span;
    }
//    qDebug()<<"接收到转动参数";
    // 创建消息类型
    qt_ros_demo01::Arm arm;
    qt_ros_demo01::Joint joint;
//    qDebug()<<"创建Arm消息";
    arm.joint.push_back(joint); // 给arm容器指定内存->joint
//    qDebug()<<"话题信息开始赋值2";
    arm.joint.data()->id = id; // 给容器赋值
    arm.joint.data()->run_time = speed_time;
    arm.joint.data()->angle = angle[joint_id];
//    qDebug()<<"话题信息开始赋值3";
    arm_pub.publish(arm);
//    qDebug()<<"发布话题信息";
    ros::spinOnce();
}

// 发布云台控制
void QNode::ptz_base(int value){
    qDebug()<<"接收到转动参数";
    qt_ros_demo01::PWMServo ptz;
    qDebug()<<"话题信息开始赋值";
    ptz.id = 1;
    ptz.angle = -1 * value + 180;
    qDebug()<<"发布消息";
    ptz_pub.publish(ptz);
    ros::spinOnce();
}

// 终端消息发布
void QNode::log( const LogLevel &level, const std::string &msg) {
	logging_model.insertRows(logging_model.rowCount(),1);
	std::stringstream logging_model_msg;
	switch ( level ) {
		case(Debug) : {
				ROS_DEBUG_STREAM(msg);
				logging_model_msg << "[DEBUG] [" << ros::Time::now() << "]: " << msg;
				break;
		}
		case(Info) : {
                ROS_INFO_STREAM(msg);
                logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
				break;
		}
		case(Warn) : {
				ROS_WARN_STREAM(msg);
				logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
				break;
		}
		case(Error) : {
				ROS_ERROR_STREAM(msg);
				logging_model_msg << "[ERROR] [" << ros::Time::now() << "]: " << msg;
				break;
		}
		case(Fatal) : {
				ROS_FATAL_STREAM(msg);
				logging_model_msg << "[FATAL] [" << ros::Time::now() << "]: " << msg;
				break;
		}
	}
	QVariant new_row(QString(logging_model_msg.str().c_str()));
	logging_model.setData(logging_model.index(logging_model.rowCount()-1),new_row);
	Q_EMIT loggingUpdated(); // used to readjust the scrollbar
}

// 重新封装为一个函数的原因：需要从外部启动该订阅者
void QNode::sub_image(QString Topic_name){
    // 创建ros句柄
    ros::NodeHandle n;
    // 创建图像句柄
    image_transport::ImageTransport it_(n);
    // 订阅图像
    QStringList qli = Topic_name.split("/");
    QString is_image_raw = qli[qli.size()-1];
//    qDebug()<<"2、发布图像"<<Topic_name<<is_image_raw;
    if(is_image_raw != "compressed"){
        image_sub = it_.subscribe(Topic_name.toStdString(),1000,&QNode::image_callback,this);
    }else{
        imagecompressed_sub = n.subscribe(Topic_name.toStdString(),1000,&QNode::imageCompressed_callback,this);
    }

//    qDebug()<<"2.1、调用了回调函数";


}

// 将cv2的图像类型转为Qt图像类型
QImage QNode::Mat2QImage(cv::Mat const& src){
    QImage dest(src.cols,src.rows,QImage::Format_ARGB32);
    const float scale = 255.0;
//    qDebug()<<"4、最终转换图像";
    if(src.depth() == CV_8U){
        if(src.channels() == 1){
            for(int i = 0;i < src.rows;++i){
                for(int j = 0;j < src.cols;++j){
                    int level = src.at<quint8>(i,j);
                    dest.setPixel(j,i,qRgb(level,level,level));
                }
            }
        }else if(src.channels() == 3){
            for(int i = 0;i < src.rows;++i){
                for(int j = 0; j < src.cols;++j){
                    cv::Vec3b bgr = src.at<cv::Vec3b>(i,j);
                    dest.setPixel(j,i,qRgb(bgr[2],bgr[1],bgr[0]));
                }
            }
        }
    }else if(src.depth() == CV_32F){
        if (src.channels() == 1){
            for (int i=0;i< src.rows; ++i){
                for (int j=0;j< src.cols; ++j){
                    int level = scale * src.at<float>(i,j);
                    dest.setPixel(j,i,qRgb(level,level, level));
                }
            }
        }else if (src.channels() == 3){
            for (int i=0;i < src.rows; ++i) {
                for (int j=0;j< src.cols; ++j){
                    cv::Vec3f bgr = scale * src.at<cv::Vec3f>(i,j);
                    dest.setPixel(j,i,qRgb(bgr[2],bgr[1],bgr[0]));
                }
            }
        }
    }
    return dest;
}

void QNode::set_goal(double x, double y, double z){
    qDebug()<<"4进入返航点发布";
    geometry_msgs::PoseStamped goal;
    // 设置frame
    goal.header.frame_id = "map";
    // 设置时刻now
    goal.header.stamp = ros::Time::now();
    goal.pose.position.x = x;
    goal.pose.position.y = y;
    goal.pose.orientation.z = z;
    goal_pub.publish(goal);
    qDebug()<<"5返航点成功发布";

}

}  // namespace qt_ros_demo01










