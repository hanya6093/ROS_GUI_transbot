/**
 * @file /include/qt_ros_demo01/main_window.hpp
 *
 * @brief Qt based gui for qt_ros_demo01.
 *
 * @date November 2010
 **/
#ifndef qt_ros_demo01_MAIN_WINDOW_H
#define qt_ros_demo01_MAIN_WINDOW_H

/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtWidgets/QMainWindow>
#include "ui_main_window.h"
#include "qnode.hpp"
#include "qt_ros_demo01/CCtrlDashBoard.hpp"
#include <QComboBox> 
#include "qrviz.hpp"
#include <QSpinBox>
// #include "CCtrlDashBoard.h"
#include <QProcess>
#include <QKeyEvent>
/*****************************************************************************
** Namespace
*****************************************************************************/

namespace qt_ros_demo01 {

/*****************************************************************************
** Interface [MainWindow]
*****************************************************************************/
/**
 * @brief Qt central, all operations relating to the view part here.
 */
class MainWindow : public QMainWindow {
Q_OBJECT

public:
	MainWindow(int argc, char** argv, QWidget *parent = 0);
	~MainWindow();

	void ReadSettings(); // Load up qt program settings at startup
	void WriteSettings(); // Save qt program settings when closing

	void closeEvent(QCloseEvent *event); // Overloaded function
	void showNoMasterMessage();

public Q_SLOTS:
	/******************************************
	** Auto-connections (connectSlotsByName())
	*******************************************/
	void on_actionAbout_triggered();
	void on_button_connect_clicked(bool check );
	void on_checkbox_use_environment_stateChanged(int state);
    void slot_speed_x(double x);
    void slot_speed_y(double y);
	void slot_cmd_control();
    void slot_update_pose(double,double,double);
    void slot_ptz_control(int);
    /******************************************
    ** Manual connections
    *******************************************/
    void updateLoggingView(); // no idea why this can't connect automatically
    void slot_treeWidget_value_change(QString);
    void slot_display_grid(int);
    void slot_display_tf(int);
    void slot_display_laserscan(int);
    void slot_display_RobotModel(int);
    void slot_display_Map(int);
    void slot_display_Path(int);
    void slot_set_start_pose();
    void slot_set_goal_pose();
    void slot_update_image(QImage);
    void slot_sub_image();
    void slot_quick_cmd_clicked();
    void slot_quick_output();
    void slot_display_global_map(int);
    void slot_display_local_map(int);
    void slot_set_return_pose();
    void slot_return_pose();
    void slot_bigarm_control();
    void slot_smallarm_control();
    void slot_paw_control();

private:
	Ui::MainWindowDesign ui;
	QNode qnode;
	CCtrlDashBoard* speed_x_dashBoard;
	CCtrlDashBoard* speed_y_dashBoard;
    qrviz* myrviz;
    QComboBox* fixed_box;
    QSpinBox* Cell_Count_Box;
    QComboBox* Grid_Color_Box;
    QComboBox* LaserTopic_Box;
    QComboBox* MapTopic_Box;
    QComboBox* MapColotScheme_Box;
    QComboBox* PathTopic_Box;
    QComboBox* PathColorScheme_Box;
    QProcess* laser_cmd;
    QComboBox* Global_Costmap_Topic_Box;
    QComboBox* GlobalMapColorScheme_Box;
    QComboBox* Global_Planner_Topic_Box;
    QComboBox* GlobalPlannerColorScheme_Box;
    QComboBox* Local_Costmap_Topic_Box;
    QComboBox* LocalMapColorScheme_Box;
    QComboBox* Local_Planner_Topic_Box;
    QComboBox* LocalPlannerColorScheme_Box;

protected:
    void keyPressEvent(QKeyEvent * event);
};

}  // namespace qt_ros_demo01

#endif // qt_ros_demo01_MAIN_WINDOW_H
