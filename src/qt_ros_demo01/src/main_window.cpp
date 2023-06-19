/**
 * @file /src/main_window.cpp
 *
 * @brief Implementation for the qt gui.
 *
 * @date February 2011
 **/
/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui>
#include <QMessageBox>
#include <iostream>
#include "../include/qt_ros_demo01/main_window.hpp"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace qt_ros_demo01 {

using namespace Qt;

/*****************************************************************************
** Implementation [MainWindow]
*****************************************************************************/

MainWindow::MainWindow(int argc, char** argv, QWidget *parent)
	: QMainWindow(parent)
	, qnode(argc,argv)
{
	ui.setupUi(this); // Calling this incidentally connects all ui's triggers to on_...() callbacks in this class.
    QObject::connect(ui.actionAbout_Qt, SIGNAL(triggered(bool)), qApp, SLOT(aboutQt())); // qApp is a global variable for the application

    ReadSettings();
	setWindowIcon(QIcon(":/images/icon.png"));
	ui.tab_manager->setCurrentIndex(0); // ensure the first tab is showing - qt-designer should have this already hardwired, but often loses it (settings?).
    QObject::connect(&qnode, SIGNAL(rosShutdown()), this, SLOT(close()));

	/*********************
	** Logging
	**********************/
	ui.view_logging->setModel(qnode.loggingModel());
    QObject::connect(&qnode, SIGNAL(loggingUpdated()), this, SLOT(updateLoggingView()));

    /*********************
    ** Auto Start
    **********************/
    if ( ui.checkbox_remember_settings->isChecked() ) {
        on_button_connect_clicked(true);
    }

    /*********************
    ** ui init
    **********************/
   	// 表盘初始化
	speed_x_dashBoard =new CCtrlDashBoard(ui.widget_speed_x);
	speed_x_dashBoard->setGeometry(ui.widget_speed_x->rect());
	speed_x_dashBoard->setValue(0);
	speed_y_dashBoard =new CCtrlDashBoard(ui.widget_speed_y);
	speed_y_dashBoard->setGeometry(ui.widget_speed_y->rect());
	speed_y_dashBoard->setValue(0);


    // 添加右侧rviz的各项内容***********************************************
    // header 
    ui.treeWidget->setHeaderLabels(QStringList()<<"key"<<"value");
    ui.treeWidget->setHeaderHidden(true); // 标题头隐藏

    // rviz右侧UI设计
    // Global Options ui节点设计
    QTreeWidgetItem* Global = new QTreeWidgetItem(QStringList()<<"Global Options");
    Global->setIcon(0,QIcon(":/images/setting.png"));
    ui.treeWidget->addTopLevelItem(Global);
    Global->setExpanded(true);  // 节点默认展开
    // FixFrame 作为 Global Option 的子节点
    QTreeWidgetItem* Fix_frame = new QTreeWidgetItem(QStringList()<<"Fixed Frame");
    fixed_box = new QComboBox();
    fixed_box->addItem(("map")); // 设置名称
    fixed_box->setMaximumWidth(150); // 设置默认宽度大小
    fixed_box->setEditable(true); // 设置为可编辑
    connect(fixed_box,SIGNAL(currentTextChanged(const QString)),this,SLOT(slot_treeWidget_value_change(QString)));
    Global->addChild(Fix_frame); // 添加为子节点
    ui.treeWidget->setItemWidget(Fix_frame,1,fixed_box);

    // Grid 图层ui节点设计
    QTreeWidgetItem* Grid = new QTreeWidgetItem(QStringList()<<"Grid");
    // 设置图层
    Grid->setIcon(0,QIcon(":/images/Grid.png"));
    // QCheckBox
    QCheckBox* Grid_Check = new QCheckBox();
    connect(Grid_Check,SIGNAL(stateChanged(int)),this,SLOT(slot_display_grid(int)));
    // 添加top节点
    ui.treeWidget->addTopLevelItem(Grid);
    Grid->setExpanded(true);  // 节点默认展开
    // 添加checkbox
    ui.treeWidget->setItemWidget(Grid,1,Grid_Check);
    // 添加Cell Count子节点
    QTreeWidgetItem* Cell_Count = new QTreeWidgetItem(QStringList()<<"Plane Cell Count");
    Grid->addChild(Cell_Count);
    //cellCount添加SpinBox
    Cell_Count_Box = new QSpinBox();
    Cell_Count_Box->setValue(13);
    // 设置SpinBox的宽度
    Cell_Count_Box->setMaximumWidth(150);
    ui.treeWidget->setItemWidget(Cell_Count,1,Cell_Count_Box);
    // 添加Color子节点
    QTreeWidgetItem* Grid_Color = new QTreeWidgetItem(QStringList()<<"Color");
    Grid->addChild(Grid_Color);
    //Color添加ComBox
    Grid_Color_Box = new QComboBox();
    Grid_Color_Box->addItem("160;160;160");
    // 设置Combox可编辑
    Grid_Color_Box->setEditable(true);
    // 设置Grid_Color_Box的宽度
    Grid_Color_Box->setMaximumWidth(150);
    ui.treeWidget->setItemWidget(Grid_Color,1,Grid_Color_Box);
    
    // TF ui节点设计
    QTreeWidgetItem* TF = new QTreeWidgetItem(QStringList()<<"TF");
    // 设置图标
    TF->setIcon(0,QIcon(":/images/TF.png"));
    // CheckBox
    QCheckBox* TF_Check = new QCheckBox();
    connect(TF_Check,SIGNAL(stateChanged(int)),this,SLOT(slot_display_tf(int)));
    // 向QTreeWidget添加TF top节点
    ui.treeWidget->addTopLevelItem(TF);
    TF->setExpanded(true); // 设置图标默认展开
    // 向TF添加CheckBox
    ui.treeWidget->setItemWidget(TF,1,TF_Check);

    // LaserScan ui节点设计
    QTreeWidgetItem* LaserScan = new QTreeWidgetItem(QStringList()<<"LaserScan");
    // 设置图标
    LaserScan->setIcon(0,QIcon(":/images/LaserScan"));
    // CheckBox
    QCheckBox* LaserScan_Check = new QCheckBox();
    connect(LaserScan_Check,SIGNAL(stateChanged(int)),this,SLOT(slot_display_laserscan(int)));
    // 向QTreeWidget添加LaserScan top节点
    ui.treeWidget->addTopLevelItem(LaserScan);
    LaserScan->setExpanded(true);
    // 向LaserScan添加CheckBox
    ui.treeWidget->setItemWidget(LaserScan,1,LaserScan_Check);
    // laser topic
    QTreeWidgetItem* LaserTopic = new QTreeWidgetItem(QStringList()<<"Topic");
    // 创建QComboBox 并添加到LaserScan下
    LaserTopic_Box = new QComboBox();
    LaserTopic_Box->addItem("/scan");
    LaserTopic_Box->setEditable(true);
    LaserTopic_Box->setMaximumWidth(150);
    LaserScan->addChild(LaserTopic);
    ui.treeWidget->setItemWidget(LaserTopic,1,LaserTopic_Box);

    // RobotModel ui节点设计
    QTreeWidgetItem* RobotModel = new QTreeWidgetItem(QStringList()<<"RobotModel");
    // 设置图标
    RobotModel->setIcon(0,QIcon(":/images/RobotModel"));
    // CheckBox
    QCheckBox* RobotModel_Check = new QCheckBox();
    connect(RobotModel_Check,SIGNAL(stateChanged(int)),this,SLOT(slot_display_RobotModel(int)));
    // 向QTreeWidget添加RobotModel top节点
    ui.treeWidget->addTopLevelItem(RobotModel);
    RobotModel->setExpanded(true);
    // 向RobotModel添加CheckBox
    ui.treeWidget->setItemWidget(RobotModel,1,RobotModel_Check);

    // Map ui节点设计
    QTreeWidgetItem* Map = new QTreeWidgetItem(QStringList()<<"Map");
    // 设置图标
    Map->setIcon(0,QIcon(":/images/Map.png"));
    // CheckBox
    QCheckBox* Map_Check = new QCheckBox();
    connect(Map_Check,SIGNAL(stateChanged(int)),this,SLOT(slot_display_Map(int)));
    // 向QTreeWidget添加Map top节点
    ui.treeWidget->addTopLevelItem(Map);
    Map->setExpanded(true);
    // 向Map添加Check
    ui.treeWidget->setItemWidget(Map,1,Map_Check);
    // Map topic
    QTreeWidgetItem* Map_Topic = new QTreeWidgetItem(QStringList()<<"Map_Topic");
    MapTopic_Box = new QComboBox();
    MapTopic_Box->addItem("/map");
    MapTopic_Box->setEditable(true);
    MapTopic_Box->setMaximumWidth(150);
    Map->addChild(Map_Topic);   //添加Map_topic为Map子节点
    ui.treeWidget->setItemWidget(Map_Topic,1,MapTopic_Box);
    // Map Color_Scheme
    QTreeWidgetItem* Map_Color_Scheme = new QTreeWidgetItem(QStringList()<<"Map_Color_Scheme");
    MapColotScheme_Box = new QComboBox();
    MapColotScheme_Box->addItem("map");
    MapColotScheme_Box->addItem("costmap");
    MapColotScheme_Box->addItem("raw");
    MapColotScheme_Box->setMaximumWidth(150);
    Map->addChild(Map_Color_Scheme);
    ui.treeWidget->setItemWidget(Map_Color_Scheme,1,MapColotScheme_Box);

    // Path ui节点设计
    QTreeWidgetItem* Path = new QTreeWidgetItem(QStringList()<<"Path");
    // 设置图标
    Path->setIcon(0,QIcon(":/images/Path.png"));
    // CheckBox
    QCheckBox* Path_Check = new QCheckBox();
    connect(Path_Check,SIGNAL(stateChanged(int)),this,SLOT(slot_display_Path(int)));
    // 向TreeWidget 添加Path top节点
    ui.treeWidget->addTopLevelItem(Path);
    Path->setExpanded(true);
    // 向Path添加CheckBox
    ui.treeWidget->setItemWidget(Path,1,Path_Check);
    //Path topic
    QTreeWidgetItem* Path_Topic = new QTreeWidgetItem(QStringList()<<"Path_topic");
    PathTopic_Box = new QComboBox();
    PathTopic_Box->addItem("/move_base/DWAPlannerROS/local_plan");
    PathTopic_Box->setEditable(true);
    PathTopic_Box->setMaximumWidth(150);
    Path->addChild(Path_Topic);   //添加Path_topic为Path子节点
    ui.treeWidget->setItemWidget(Path_Topic,1,PathTopic_Box);
    // Path Color Scheme
    QTreeWidgetItem* Path_ColorScheme = new QTreeWidgetItem(QStringList()<<"Path_ColorScheme");
    PathColorScheme_Box = new QComboBox();
    PathColorScheme_Box->addItem("0;12;255");
    PathColorScheme_Box->setEditable(true);
    PathColorScheme_Box->setMaximumWidth(150);
    Path->addChild(Path_ColorScheme);   //添加Path_color为Path子节点
    ui.treeWidget->setItemWidget(Path_ColorScheme,1,PathColorScheme_Box);

    // 机器人Navigate 相关UI
    // Global Map ui节点色设计
    QTreeWidgetItem* GlobalMap = new QTreeWidgetItem(QStringList()<<"Global Map");
    GlobalMap->setIcon(0,QIcon(":/images/default_pkg.png"));
    // CheckBox
    QCheckBox* GlobalMap_Check = new QCheckBox();
    connect(GlobalMap_Check,SIGNAL(stateChanged(int)),this,SLOT(slot_display_global_map(int)));
    // 向TreeWidget 添加GlobalMap top节点
    ui.treeWidget->addTopLevelItem(GlobalMap);
    GlobalMap->setExpanded(true);
    // 向GlobalMap添加CheckBox
    ui.treeWidget->setItemWidget(GlobalMap,1,GlobalMap_Check);
    // Global_CostMap ui子节点设计
    QTreeWidgetItem* Global_Costmap = new QTreeWidgetItem(QStringList()<<"Costmap");
    Global_Costmap->setIcon(0,QIcon(":/images/Costmap.png"));
    // Global Map 添加子节点
    GlobalMap->addChild(Global_Costmap);
    // Map Topic
    QTreeWidgetItem* Global_Costmap_Topic = new QTreeWidgetItem(QStringList()<<"Topic");
    Global_Costmap_Topic_Box = new QComboBox();
    Global_Costmap_Topic_Box->addItem("/move_base/global_costmap/costmap");
    Global_Costmap_Topic_Box->setEditable(true);
    Global_Costmap_Topic_Box->setMaximumWidth(150);
    Global_Costmap->addChild(Global_Costmap_Topic);
    ui.treeWidget->setItemWidget(Global_Costmap_Topic,1,Global_Costmap_Topic_Box);
    // Map_color_scheme ui子节点设计
    QTreeWidgetItem* GlobalMapColorScheme = new QTreeWidgetItem(QStringList()<<"GlobalMap ColorScheme");
    GlobalMapColorScheme_Box = new QComboBox();
    GlobalMapColorScheme_Box->addItem("costmap");
    GlobalMapColorScheme_Box->addItem("map");
    GlobalMapColorScheme_Box->addItem("raw");
    GlobalMapColorScheme_Box->setEditable(true);
    GlobalMapColorScheme_Box->setMaximumWidth(150);
    GlobalMap->addChild(GlobalMapColorScheme);   //添加Path_color为Path子节点
    ui.treeWidget->setItemWidget(GlobalMapColorScheme,1,GlobalMapColorScheme_Box);
    // Global Planner ui子节点设计
    QTreeWidgetItem* Global_Planner = new QTreeWidgetItem(QStringList()<<"Planner");
    Global_Planner->setIcon(0,QIcon(":/images/Planner.png"));
    // Global Map 添加子节点
    GlobalMap->addChild(Global_Planner);
    // Path Topic
    QTreeWidgetItem* Global_Planner_Topic = new QTreeWidgetItem(QStringList()<<"Topic");
    Global_Planner_Topic_Box = new QComboBox();
    Global_Planner_Topic_Box->addItem("/move_base/DWAPlannerROS/global_plan");
    Global_Planner_Topic_Box->setEditable(true);
    Global_Planner_Topic_Box->setMaximumWidth(150);
    Global_Planner->addChild(Global_Planner_Topic);
    ui.treeWidget->setItemWidget(Global_Planner_Topic,1,Global_Planner_Topic_Box);
    // Path_color_scheme ui子节点设计
    QTreeWidgetItem* GlobalPlannerColorScheme = new QTreeWidgetItem(QStringList()<<"GlobalPlanner ColorScheme");
    GlobalPlannerColorScheme_Box = new QComboBox();
    GlobalPlannerColorScheme_Box->addItem("255;0;0");
    GlobalPlannerColorScheme_Box->setEditable(true);
    GlobalPlannerColorScheme_Box->setMaximumWidth(150);
    Global_Planner->addChild(GlobalPlannerColorScheme);
    ui.treeWidget->setItemWidget(GlobalPlannerColorScheme,1,GlobalPlannerColorScheme_Box);

    // Local Map ui节点色设计
    QTreeWidgetItem* LocalMap = new QTreeWidgetItem(QStringList()<<"Local Map");
    LocalMap->setIcon(0,QIcon(":/images/default_pkg.png"));
    // CheckBox
    QCheckBox* LocalMap_Check = new QCheckBox();
    connect(LocalMap_Check,SIGNAL(stateChanged(int)),this,SLOT(slot_display_local_map(int)));
    // 向TreeWidget 添加LocalMap top节点
    ui.treeWidget->addTopLevelItem(LocalMap);
    LocalMap->setExpanded(true);
    // 向LocalMap添加CheckBox
    ui.treeWidget->setItemWidget(LocalMap,1,LocalMap_Check);
    // Local_CostMap ui子节点设计
    QTreeWidgetItem* Local_Costmap = new QTreeWidgetItem(QStringList()<<"Costmap");
    Local_Costmap->setIcon(0,QIcon(":/images/Costmap.png"));
    // Local Map 添加子节点
    LocalMap->addChild(Local_Costmap);
    // Map Topic
    QTreeWidgetItem* Local_Costmap_Topic = new QTreeWidgetItem(QStringList()<<"Topic");
    Local_Costmap_Topic_Box = new QComboBox();
    Local_Costmap_Topic_Box->addItem("/move_base/local_costmap/costmap");
    Local_Costmap_Topic_Box->setEditable(true);
    Local_Costmap_Topic_Box->setMaximumWidth(150);
    Local_Costmap->addChild(Local_Costmap_Topic);
    ui.treeWidget->setItemWidget(Local_Costmap_Topic,1,Local_Costmap_Topic_Box);
    // Map_color_scheme ui子节点设计
    QTreeWidgetItem* LocalMapColorScheme = new QTreeWidgetItem(QStringList()<<"LocalMap ColorScheme");
    LocalMapColorScheme_Box = new QComboBox();
    LocalMapColorScheme_Box->addItem("costmap");
    LocalMapColorScheme_Box->addItem("map");
    LocalMapColorScheme_Box->addItem("raw");
    LocalMapColorScheme_Box->setEditable(true);
    LocalMapColorScheme_Box->setMaximumWidth(150);
    LocalMap->addChild(LocalMapColorScheme);
    ui.treeWidget->setItemWidget(LocalMapColorScheme,1,LocalMapColorScheme_Box);
    // Local Planner ui子节点设计
    QTreeWidgetItem* Local_Planner = new QTreeWidgetItem(QStringList()<<"Planner");
    Local_Planner->setIcon(0,QIcon(":/images/Planner.png"));
    // Local Map 添加子节点
    LocalMap->addChild(Local_Planner);
    // Path Topic
    QTreeWidgetItem* Local_Planner_Topic = new QTreeWidgetItem(QStringList()<<"Topic");
    Local_Planner_Topic_Box = new QComboBox();
    Local_Planner_Topic_Box->addItem("/move_base/DWAPlannerROS/local_plan");
    Local_Planner_Topic_Box->setEditable(true);
    Local_Planner_Topic_Box->setMaximumWidth(150);
    Local_Planner->addChild(Local_Planner_Topic);
    ui.treeWidget->setItemWidget(Local_Planner_Topic,1,Local_Planner_Topic_Box);
    // Path_color_scheme ui子节点设计
    QTreeWidgetItem* LocalPlannerColorScheme = new QTreeWidgetItem(QStringList()<<"LocalPlanner ColorScheme");
    LocalPlannerColorScheme_Box = new QComboBox();
    LocalPlannerColorScheme_Box->addItem("0;12;255");
    LocalPlannerColorScheme_Box->setEditable(true);
    LocalPlannerColorScheme_Box->setMaximumWidth(150);
    Local_Planner->addChild(LocalPlannerColorScheme);   //添加Path_color为Path子节点
    ui.treeWidget->setItemWidget(LocalPlannerColorScheme,1,LocalPlannerColorScheme_Box);


    // 信号槽连接***********************************************
    connect(&qnode,SIGNAL(speed_x(double)),this,SLOT(slot_speed_x(double)));
    connect(&qnode,SIGNAL(speed_y(double)),this,SLOT(slot_speed_y(double)));
	//绑定速度控制按钮
	connect(ui.pushButton_i,SIGNAL(clicked()),this,SLOT(slot_cmd_control()));
	connect(ui.pushButton_u,SIGNAL(clicked()),this,SLOT(slot_cmd_control()));
	connect(ui.pushButton_o,SIGNAL(clicked()),this,SLOT(slot_cmd_control()));
	connect(ui.pushButton_j,SIGNAL(clicked()),this,SLOT(slot_cmd_control()));
	connect(ui.pushButton_l,SIGNAL(clicked()),this,SLOT(slot_cmd_control()));
	connect(ui.pushButton_m,SIGNAL(clicked()),this,SLOT(slot_cmd_control()));
	connect(ui.pushButton_pe,SIGNAL(clicked()),this,SLOT(slot_cmd_control()));
	connect(ui.pushButton_co,SIGNAL(clicked()),this,SLOT(slot_cmd_control()));
    connect(ui.pushButton_stop,SIGNAL(clicked()),this,SLOT(slot_cmd_control()));
    connect(ui.horizontalSlider_linear,&QSlider::valueChanged,ui.label_7,[=](){
        ui.label_7->setText(QString::number(ui.horizontalSlider_linear->value()));
    });
    connect(ui.horizontalSlider_raw,&QSlider::valueChanged,ui.label_9,[=](){
        ui.label_9->setText(QString::number(ui.horizontalSlider_raw->value()));
    });
    // quit_button关联close()
    connect(ui.quit_button,SIGNAL(clicked()),this,SLOT(close()));
    // set start pose
    connect(ui.set_start_pose_btn,SIGNAL(clicked()),this,SLOT(slot_set_start_pose()));
    connect(ui.set_goal_pose_btn,SIGNAL(clicked()),this,SLOT(slot_set_goal_pose()));
    // 图像关联
    connect(&qnode,SIGNAL(image_val(QImage)),this,SLOT(slot_update_image(QImage)));
    connect(ui.pushButton_sub_image,SIGNAL(clicked()),this,SLOT(slot_sub_image()));
    // 激光雷达关联
    connect(ui.laser_btn,SIGNAL(clicked()),this,SLOT(slot_quick_cmd_clicked()));
    // 导航位姿信息关联
    connect(&qnode,SIGNAL(position(double,double,double)),this,SLOT(slot_update_pose(double,double,double)));
    // 导航点设置关联
    connect(ui.set_returnpose_btn,SIGNAL(clicked()),this,SLOT(slot_set_return_pose()));
    connect(ui.returnpose_btn,SIGNAL(clicked()),this,SLOT(slot_return_pose()));
    // 机械臂关联
    connect(ui.pushButton_w,SIGNAL(clicked()),this,SLOT(slot_bigarm_control())); // 大臂槽连接
    connect(ui.pushButton_s,SIGNAL(clicked()),this,SLOT(slot_bigarm_control()));
    connect(ui.pushButton_e,SIGNAL(clicked()),this,SLOT(slot_smallarm_control())); // 小臂槽连接
    connect(ui.pushButton_d,SIGNAL(clicked()),this,SLOT(slot_smallarm_control()));
    connect(ui.pushButton_r,SIGNAL(clicked()),this,SLOT(slot_paw_control())); // 爪子槽连接
    connect(ui.pushButton_f,SIGNAL(clicked()),this,SLOT(slot_paw_control()));
    // 云台关联
    connect(ui.PTZ_Slider,&QSlider::valueChanged,ui.label_PTZ,[=](){
        ui.label_PTZ->setText(QString::number(ui.PTZ_Slider->value()));
    });
    connect(ui.PTZ_Slider,SIGNAL(valueChanged(int)),this,SLOT(slot_ptz_control(int)));
}

MainWindow::~MainWindow() {}

/*****************************************************************************
** Implementation [Slots]
*****************************************************************************/

void MainWindow::showNoMasterMessage() {
	QMessageBox msgBox;
	msgBox.setText("Couldn't find the ros master.");
	msgBox.exec();
    close();
}

/*
 * These triggers whenever the button is clicked, regardless of whether it
 * is already checked or not.
 */
// 检测是否连接主机节点
void MainWindow::on_button_connect_clicked(bool check ) {
    if ( ui.checkbox_use_environment->isChecked() ) {
		if ( !qnode.init() ) {
			showNoMasterMessage();
            ui.treeWidget->setEnabled(false);
		} else {
            ui.button_connect->setEnabled(false); // 连接上主机
            ui.treeWidget->setEnabled(true);
            myrviz = new qrviz(ui.Layout_rviz);
        }
	} else {
		if ( ! qnode.init(ui.line_edit_master->text().toStdString(),
                   ui.line_edit_host->text().toStdString())) {
			showNoMasterMessage();
            ui.treeWidget->setEnabled(false);
		} else {
			ui.button_connect->setEnabled(false);
			ui.line_edit_master->setReadOnly(true);
			ui.line_edit_host->setReadOnly(true);
			ui.line_edit_topic->setReadOnly(true);
            ui.treeWidget->setEnabled(true);
            myrviz = new qrviz(ui.Layout_rviz);

		}
	}
}

void MainWindow::on_checkbox_use_environment_stateChanged(int state) {
	bool enabled;
	if ( state == 0 ) {
		enabled = true;
	} else {
		enabled = false;
	}
	ui.line_edit_master->setEnabled(enabled);
	ui.line_edit_host->setEnabled(enabled);
	//ui.line_edit_topic->setEnabled(enabled);
}

void MainWindow::slot_speed_x(double x){
    if(x>=0) ui.label_dir_x->setText("正向");
    else ui.label_dir_x->setText("反向");

    speed_x_dashBoard->setValue(abs(x*100));
}

void MainWindow::slot_speed_y(double y){
    if(y>=0) ui.label_dir_y->setText("正向");
    else ui.label_dir_y->setText("反向");
    speed_y_dashBoard->setValue(abs(y*100));
}

void MainWindow::slot_cmd_control(){
	QPushButton* btn=qobject_cast<QPushButton*>(sender());
    char key = '0';
    if(btn->text() == "stop"){
        key = 'k';
    }else{
        key = btn->text().toStdString()[0];
    }
    qDebug()<<btn->text().toStdString()[0];
    //速度
    float liner=ui.horizontalSlider_linear->value()*0.01;
    float turn=ui.horizontalSlider_raw->value()*0.01;
//    bool is_all=ui.checkBox_use_all->isChecked();
    switch (key) {
        case 'u':
            qnode.move_base('u',liner,turn);
        break;
        case 'i':
            qnode.move_base('i',liner,turn);
        break;
        case 'o':
            qnode.move_base('o',liner,turn);
        break;
        case 'j':
            qnode.move_base('j',liner,turn);
        break;
        case 'l':
            qnode.move_base('l',liner,turn);
        break;
        case 'm':
            qnode.move_base('m',liner,turn);
        break;
        case ',':
            qnode.move_base(',',liner,turn);
        break;
        case '.':
            qnode.move_base('.',liner,turn);
        break;
        case 'k':
            qnode.move_base('k',liner,turn);
        break;
    }
}

// 机械大臂控制槽 id 7
void MainWindow::slot_bigarm_control(){
//    qDebug()<<"成功连接大臂槽函数";
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    QString key = btn->text();
    if(key[key.size()-1] == 'w'){
        // 启动qnode节点发布信息
//        qDebug()<<"进入ros节点函数";
        qnode.arm_base(7,true);
    }else{
        qnode.arm_base(7,false);
    }

}
// 机械小臂控制槽 id 8
void MainWindow::slot_smallarm_control(){
//    qDebug()<<"成功连接小臂槽函数";
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    QString key = btn->text();
    if(key[key.size()-1] == 'e'){
        // 启动qnode节点发布信息
//        qDebug()<<"进入ros节点函数";
        qnode.arm_base(8,true);
    }else{
        qnode.arm_base(8,false);
    }
}
// 机械爪控制槽 id 9
void MainWindow::slot_paw_control(){
//    qDebug()<<"成功连接爪槽函数";
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    QString key = btn->text();
    if(key[key.size()-1] == 'r'){
        // 启动qnode节点发布信息
        qnode.arm_base(9,true);
    }else{
        qnode.arm_base(9,false);
    }
}

// 修改 rviz中FixedFrame的值
void MainWindow::slot_treeWidget_value_change(QString){
    myrviz->Set_FixedFrame(fixed_box->currentText());
}

// 调用qrviz图层显示的接口函数
void MainWindow::slot_display_grid(int state)
{
    bool enable = state>1?true:false;
    qDebug()<<"调用槽函数";
    QStringList qli = Grid_Color_Box->currentText().split(";");
    QColor color = QColor(qli[0].toInt(),qli[1].toInt(),qli[2].toInt());
    myrviz->Display_Grid(Cell_Count_Box->text().toInt(),color,enable);
}

// 调用qrvizTF图层中的接口函数
void MainWindow::slot_display_tf(int state){
    bool enable = state>1?true:false;
    myrviz->Display_TF(enable);
    qDebug()<<"TF接口打开";
}

// 调用qrviz laserscan图层中的接口函数
void MainWindow::slot_display_laserscan(int state){
    bool enable = state>1?true:false;
    myrviz->Display_LaserScan(LaserTopic_Box->currentText(),enable);
    qDebug()<<"Laser接口打开";
}

// 调用qrviz robotmodel图层中的接口函数
void MainWindow::slot_display_RobotModel(int state){
    bool enable = state>1?true:false;
    myrviz->Display_RobotModel(enable);
}

// 调用qrviz Map图层中的接口函数
void MainWindow::slot_display_Map(int state){
    qDebug()<<"进入Map接口图层槽函数";

    bool enable = state>1?true:false;
    myrviz->Display_Map(MapTopic_Box->currentText(),MapColotScheme_Box->currentText(),enable);
    qDebug()<<"打开Map接口图层";
}

// 调用qrviz Path图层的接口函数
void MainWindow::slot_display_Path(int state){
    qDebug()<<"进入Path接口图层槽函数";

    bool enable = state>1?true:false;
    QStringList qli = PathColorScheme_Box->currentText().split(";");
    QColor color = QColor(qli[0].toInt(),qli[1].toInt(),qli[2].toInt());
    myrviz->Display_Path(PathTopic_Box->currentText(),color,enable);
    qDebug()<<"打开path接口图层";

}

// 调用globalmap的接口函数
void MainWindow::slot_display_global_map(int state){  
    bool enable = state>1?true:false;
    qDebug()<<"进入Globalmap接口图层槽函数";
    QStringList qli = GlobalPlannerColorScheme_Box->currentText().split(";");
    QColor color = QColor(qli[0].toInt(),qli[1].toInt(),qli[2].toInt());
    myrviz->Display_Global_Map(Global_Costmap_Topic_Box->currentText(),GlobalMapColorScheme_Box->currentText(),
                               Global_Planner_Topic_Box->currentText(),color,enable);
    qDebug()<<"打开Globalmap接口图层";
}

// 调用localmap的接口函数
void MainWindow::slot_display_local_map(int state){
    bool enable = state>1?true:false;
    qDebug()<<"进入localmap接口图层槽函数";
    QStringList qli = LocalPlannerColorScheme_Box->currentText().split(";");
    QColor color = QColor(qli[0].toInt(),qli[1].toInt(),qli[2].toInt());
    myrviz->Display_Local_Map(Local_Costmap_Topic_Box->currentText(),LocalMapColorScheme_Box->currentText(),
                               Local_Planner_Topic_Box->currentText(),color,enable);
    qDebug()<<"打开Localmap接口图层";
}

// 调用start_pose按键的接口函数
void MainWindow::slot_set_start_pose(){
    myrviz->Set_Start_Pose();
}

// 调用goal_pose按键的接口函数
void MainWindow::slot_set_goal_pose(){
    myrviz->Set_Goal_Pose();
}

// 调用图像订阅的接口函数
void MainWindow::slot_sub_image(){
//    qDebug()<<"1、订阅话题";
    qnode.sub_image(ui.lineEdit_image_topic->text());
}
// 图像更新
void MainWindow::slot_update_image(QImage image){
//    qDebug()<<"6、更新图片";
    ui.label_image->setPixmap(QPixmap::fromImage(image));
}

// 激光雷达cmd
void MainWindow::slot_quick_cmd_clicked(){
    qDebug()<<"进入第一个槽函数中";
    // 创建一个打开外部程序的进程
    laser_cmd = new QProcess;
    // 从终端打开
    laser_cmd->start("bash");
    // 将文本框中内容写入终端bash中
    laser_cmd->write(ui.textEdit_laser_cmd->toPlainText().toLocal8Bit()+'\n');
    // 出现错误时，调用槽函数写入下方的文本框中
    connect(laser_cmd,SIGNAL(readyReadStandardError()),this,SLOT(slot_quick_output()));
    connect(laser_cmd,SIGNAL(readyReadStandardOutput()),this,SLOT(slot_quick_output()));

}

// 激光雷达对话框错误的槽
void MainWindow::slot_quick_output(){
    qDebug()<<"进入第二个槽函数中";
    ui.textEdit_quick_output->append("<font color=\"#FF0000\">"+laser_cmd->readAllStandardError()+"</font>");
    ui.textEdit_quick_output->append("<font color=\"#FFFFFF\">"+laser_cmd->readAllStandardOutput()+"</font>");

}

// 位姿信息槽
void MainWindow::slot_update_pose(double x,double y,double z){
    ui.pose_x->setText(QString::number(x));
    ui.pose_y->setText(QString::number(y));
    ui.pose_z->setText(QString::number(z));

}

// 设置返航点槽(短期记录）  长期记录返航点信息使用：QSettings
void MainWindow::slot_set_return_pose(){
    qDebug()<<"1进入设置返航点";
  ui.return_X->setText(ui.pose_x->text());
  ui.return_Y->setText(ui.pose_y->text());
  ui.return_Z->setText(ui.pose_z->text());
  qDebug()<<"2设置返航点结束";

}

// 返航槽
void MainWindow::slot_return_pose(){
//    qDebug()<<"3进入返航槽";
    qnode.set_goal(ui.return_X->text().toDouble(),ui.return_Y->text().toDouble(),ui.return_Z->text().toDouble());
    qDebug()<<"6成功返航";

}

// 云台槽
void MainWindow::slot_ptz_control(int value){
    qDebug()<<"进入云台槽";
    qnode.ptz_base(value);
}

/*****************************************************************************
** Implemenation [Slots][manually connected]
*****************************************************************************/

/**
 * This function is signalled by the underlying model. When the model changes,
 * this will drop the cursor down to the last line in the QListview to ensure
 * the user can always see the latest log message.
 */
void MainWindow::updateLoggingView() {
        ui.view_logging->scrollToBottom();
}

/*****************************************************************************
** Implementation [Menu]
*****************************************************************************/

void MainWindow::on_actionAbout_triggered() {
    QMessageBox::about(this, tr("About ..."),tr("<h2>PACKAGE_NAME Test Program 0.10</h2><p>Copyright Yujin Robot</p><p>This package needs an about description.</p>"));
}

/*****************************************************************************
** Implementation [Configuration]
*****************************************************************************/

void MainWindow::ReadSettings() {
    QSettings settings("Qt-Ros Package", "qt_ros_demo01");
    restoreGeometry(settings.value("geometry").toByteArray());
    restoreState(settings.value("windowState").toByteArray());
    QString master_url = settings.value("master_url",QString("http://192.168.1.2:11311/")).toString();
    QString host_url = settings.value("host_url", QString("192.168.1.3")).toString();
    //QString topic_name = settings.value("topic_name", QString("/chatter")).toString();
    ui.line_edit_master->setText(master_url);
    ui.line_edit_host->setText(host_url);
    //ui.line_edit_topic->setText(topic_name);
    bool remember = settings.value("remember_settings", false).toBool();
    ui.checkbox_remember_settings->setChecked(remember);
    bool checked = settings.value("use_environment_variables", false).toBool();
    ui.checkbox_use_environment->setChecked(checked);
    if ( checked ) {
    	ui.line_edit_master->setEnabled(false);
    	ui.line_edit_host->setEnabled(false);
    	//ui.line_edit_topic->setEnabled(false);
    }
}

void MainWindow::WriteSettings() {
    QSettings settings("Qt-Ros Package", "qt_ros_demo01");
    settings.setValue("master_url",ui.line_edit_master->text());
    settings.setValue("host_url",ui.line_edit_host->text());
    //settings.setValue("topic_name",ui.line_edit_topic->text());
    settings.setValue("use_environment_variables",QVariant(ui.checkbox_use_environment->isChecked()));
    settings.setValue("geometry", saveGeometry());
    settings.setValue("windowState", saveState());
    settings.setValue("remember_settings",QVariant(ui.checkbox_remember_settings->isChecked()));

}

void MainWindow::closeEvent(QCloseEvent *event)
{
	WriteSettings();
	QMainWindow::closeEvent(event);
    // qDebug()<<"关闭。。。。。";
}

void MainWindow::keyPressEvent(QKeyEvent *event){
    Q_UNUSED(event);
    //速度
    float liner=ui.horizontalSlider_linear->value()*0.01;
    float turn=ui.horizontalSlider_raw->value()*0.01;
//    bool is_all=ui.checkBox_use_all->isChecked();
    switch (event->key()) {
        case Qt::Key_U:
            qnode.move_base('u',liner,turn);
            this->releaseKeyboard();
        break;
        case Qt::Key_I:
            qnode.move_base('i',liner,turn);
            this->releaseKeyboard();
        break;
        case Qt::Key_O:
            qnode.move_base('o',liner,turn);
            this->releaseKeyboard();
        break;
        case Qt::Key_J:
            qnode.move_base('j',liner,turn);
            this->releaseKeyboard();
        break;
        case Qt::Key_L:
            qnode.move_base('l',liner,turn);
            this->releaseKeyboard();
        break;
        case Qt::Key_M:
            qnode.move_base('m',liner,turn);
            this->releaseKeyboard();
        break;
        case Qt::Key_Comma:
            qnode.move_base(',',liner,turn);
            this->releaseKeyboard();
        break;
        case Qt::Key_Period:
            qnode.move_base('.',liner,turn);
            this->releaseKeyboard();
        break;
        case Qt::Key_K:
            qnode.move_base('k',liner,turn);
            this->releaseKeyboard();
        break;
        case Qt::Key_Space:
            qnode.move_base('k',liner,turn);
            this->releaseKeyboard();
        break;
        case Qt::Key_W:
            qnode.arm_base(7,true);
            this->releaseKeyboard();
        break;
        case Qt::Key_S:
            qnode.arm_base(7,false);
            this->releaseKeyboard();
        break;
        case Qt::Key_E:
            qnode.arm_base(8,true);
            this->releaseKeyboard();
        break;
        case Qt::Key_D:
            qnode.arm_base(8,false);
            this->releaseKeyboard();
        break;
        case Qt::Key_R:
            qnode.arm_base(9,true);
            this->releaseKeyboard();
        break;
        case Qt::Key_F:
            qnode.arm_base(9,false);
            this->releaseKeyboard();
        break;


    }
}
}  // namespace qt_ros_demo01

