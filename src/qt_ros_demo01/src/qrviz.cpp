#include "../include/qt_ros_demo01/qrviz.hpp"



qrviz::qrviz(QVBoxLayout * layout)
{
    // 创建 rviz panel
    render_panel_ = new rviz::RenderPanel(); // RenderPanel是QWidget类型，需要在layout_rviz上显示该窗口组件
    // 向 layout添加 panel
    layout->addWidget(render_panel_);
   // 创建rviz控制对象
   manager = new rviz::VisualizationManager(render_panel_);
   tool_manager_ = manager->getToolManager();   // 实例化工具对象
   ROS_ASSERT(manager!=NULL);
   // 初始化render_panel 实现放大缩小等操作
   render_panel_->initialize(manager->getSceneManager(),manager);

   // 初始化rviz控制对象
   manager->initialize(); // 初始化
   manager->startUpdate(); // 图层更新 显示图层
   manager->removeAllDisplays(); // 删除所有图层


}

void qrviz::Set_FixedFrame(QString Frame_name)
{
    manager->setFixedFrame(Frame_name);
    qDebug() << manager->getFixedFrame();
}

// 初始点接口函数
void qrviz::Set_Start_Pose(){
   rviz::Tool* current_tool = tool_manager_->addTool("rviz/SetInitialPose");    // 添加SetInitialPose工具
   // 设置当前使用的工具
   tool_manager_->setCurrentTool(current_tool);
}

// 目标点接口函数 使用/move_base_simple/goal话题
void qrviz::Set_Goal_Pose(){
    rviz::Tool* current_tool = tool_manager_->addTool("rviz/SetGoal");
    // 设置当前使用的工具
    rviz::Property* pro = current_tool->getPropertyContainer();
    // 设置发布导航目标点的话题topic
    pro->subProp("Topic")->setValue("/move_base_simple/goal");
    // 设置当前使用的工具
    tool_manager_->setCurrentTool(current_tool);
}

// 基本图层API
void qrviz::Display_Grid(int Cell_Count,QColor color,bool enable)
{
    //确保图层的唯一性
    if(Grid_!=NULL){
        delete Grid_;
        Grid_ = NULL;
    }
    //使用manager创建一个Grid图层
    Grid_ = manager->createDisplay("rviz/Grid","myGrid",enable);
    qDebug()<<"创建了新图层";
    //设置CellCount
    Grid_->subProp("Plane Cell Count")->setValue(Cell_Count);   //其中"Plane Cell Count"是关键词
    //设置颜色
    Grid_->subProp("Color")->setValue(color);
    // 每次调用新的图层或者管理都需要 ROS_ASSERT进行断言 防止出现闪退
//    ROS_ASSERT(TF_!=NULL);
}

// TF图层API
void qrviz::Display_TF(bool enable){
    //确保图层的唯一性
    if(TF_!=NULL){
        delete TF_;
        TF_ = NULL;
    }
    //使用manager创建一个TF图层
    TF_ = manager->createDisplay("rviz/TF","myTF",enable);
//    qDebug()<<"创建了一个TF图层";
//    ROS_ASSERT(TF_!=NULL);
}

// laser图层API
void qrviz::Display_LaserScan(QString laser_topic, bool enable){
    //确保图层的唯一性
    if(Laser_!=NULL){
        delete Laser_;
        Laser_ = NULL;
    }
    //使用manager创建一个LaserScan图层
    Laser_ = manager->createDisplay("rviz/LaserScan","myLaser",enable);
    Laser_->subProp("Topic")->setValue(laser_topic);
    qDebug()<<"创建了一个Laser图层";
}

// RobotModel图层API
void qrviz::Display_RobotModel(bool enable){
    //确保图层的唯一性
    if(RobotModel_!=NULL){
        delete RobotModel_;
        RobotModel_ = NULL;
    }
    //使用manager创建一个LaserScan图层
    Laser_ = manager->createDisplay("rviz/RobotModel","myRobotModel",enable);
//    Laser_->subProp("Topic")->setValue(laser_topic);
    qDebug()<<"创建了一个RobotModel图层";
}

// Map图层API
void qrviz::Display_Map(QString topic, QString color_scheme, bool enable){
    if(Map_!=NULL){
        delete Map_;
        Map_ = NULL;
    }
    Map_ = manager->createDisplay("rviz/Map","myMap",enable);
    Map_->subProp("Topic")->setValue(topic);
    Map_->subProp("Color Scheme")->setValue(color_scheme);
    qDebug()<<"创建Map图层";
}

// Path图层API 有BUG 无法实现
void qrviz::Display_Path(QString topic, QColor color, bool enable){
    if(Path_!=NULL){
        delete Path_;
        Path_ = NULL;
    }
    Path_ = manager->createDisplay("rviz/Path","myPath",enable);
    Path_->subProp("Topic")->setValue(topic);
    Path_->subProp("Color")->setValue(color);
    qDebug()<<"创建Path图层";
}

// LoaclMap图层API
void qrviz::Display_Local_Map(QString cost_map_topic, QString cost_map_color, QString path_topic, QColor path_color, bool enable){
    if(Local_Map!=NULL){
        delete Local_Map;
        Local_Map = NULL;
    }
    if(Local_Path!=NULL){
        delete Local_Path;
        Local_Path = NULL;
    }
    Local_Map = manager->createDisplay("rviz/Map","localmap",enable);
    Local_Path = manager->createDisplay("rviz/Path","locaPath",enable);
    Local_Map->subProp("Topic")->setValue(cost_map_topic);
    Local_Map->subProp("Color Scheme")->setValue(cost_map_color);
//    Local_Path->subProp("Topic")->setValue(path_topic);  有BUG 无法实现
//    Local_Path->subProp("Color")->setValue(path_color);
    qDebug()<<"创建LocalMap图层";

}

// GlobalMap图层API
void qrviz::Display_Global_Map(QString cost_map_topic, QString cost_map_color, QString path_topic, QColor path_color, bool enable){
    if(Global_Map!=NULL){
        delete Global_Map;
        Global_Map = NULL;
    }
    if(Global_Path!=NULL){
        delete Global_Path;
        Global_Path = NULL;
    }
    Global_Map = manager->createDisplay("rviz/Map","globalmap",enable);
    Global_Path = manager->createDisplay("rviz/Path","globalPath",enable);
    Global_Map->subProp("Topic")->setValue(cost_map_topic);
    Global_Map->subProp("Color Scheme")->setValue(cost_map_color);
//    Global_Path->subProp("Topic")->setValue(path_topic);  有BUG 无法实现
//    Global_Path->subProp("Color")->setValue(path_color);
    qDebug()<<"创建GlobalMap图层";

}
