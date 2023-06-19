#ifndef QRVIZ_HPP
#define QRVIZ_HPP

#include <QObject>
#include <ros/ros.h>
#include <rviz/visualization_manager.h>
#include <rviz/render_panel.h>
#include <rviz/display.h>
#include <rviz/tool.h>
#include <rviz/tool_manager.h>
#include <QVBoxLayout>
#include <QDebug>

class qrviz
{
public:
    qrviz(QVBoxLayout* layout);
    void Set_FixedFrame(QString);
    // 各个图层的调用函数
    void Display_Grid(int Cell_Count,QColor color,bool enable);
    void Display_TF(bool enable);
    void Display_LaserScan(QString laser_topic,bool enable);
    void Display_RobotModel(bool enable);
    void Display_Map(QString topic,QString color_scheme,bool enable);
    void Display_Path(QString topic,QColor color,bool enable);
    void Set_Start_Pose(); // 设置初始点接口函数
    void Set_Goal_Pose(); // 设置目标点接口函数
    void Display_Local_Map(QString cost_map_topic,QString cost_map_color,QString path_topic,QColor path_color,bool enable);  // 局部地图的接口函数
    void Display_Global_Map(QString cost_map_topic,QString cost_map_color,QString path_topic,QColor path_color,bool enable);  // 全局地图的接口函数

private:
    rviz::RenderPanel * render_panel_;
    rviz::VisualizationManager* manager; // 创建视角管理对象
    rviz::Display* Grid_ = NULL; // 基础图层
    rviz::Display* TF_ = NULL; // TF图层
    rviz::Display* Laser_ = NULL; // laserScan图层
    rviz::Display* RobotModel_ =  NULL; // 机器人图层
    rviz::Display* Map_ = NULL; // Map图层
    rviz::Display* Path_ = NULL; // Path图层
    rviz::ToolManager* tool_manager_; // 工具管理对象
    rviz::Display* Global_Map = NULL; // 全局地图
    rviz::Display* Global_Path = NULL; // 全局路径
    rviz::Display* Local_Path = NULL; // 全局地图
    rviz::Display* Local_Map = NULL; // 局部路径
};

#endif // QRVIZ_HPP
