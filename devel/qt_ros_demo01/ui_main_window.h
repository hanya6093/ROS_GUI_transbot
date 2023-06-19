/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_7;
    QTabWidget *tab_manager;
    QWidget *tab_status;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_speed_x;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_dir_x;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_speed_y;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *label_dir_y;
    QFrame *frame_2;
    QGroupBox *groupBox_12;
    QListView *view_logging;
    QWidget *tab_3;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_image;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_22;
    QSlider *PTZ_Slider;
    QLabel *label_PTZ;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *lineEdit_image_topic;
    QPushButton *pushButton_sub_image;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *set_start_pose_btn;
    QPushButton *set_goal_pose_btn;
    QPushButton *set_returnpose_btn;
    QPushButton *returnpose_btn;
    QVBoxLayout *Layout_rviz;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *pose_x;
    QLabel *label_14;
    QLabel *pose_y;
    QLabel *label_16;
    QLabel *pose_z;
    QLabel *label_18;
    QLabel *label_15;
    QLabel *return_X;
    QLabel *label_19;
    QLabel *return_Y;
    QLabel *label_17;
    QLabel *return_Z;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_11;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *button_connect;
    QLabel *label;
    QLineEdit *line_edit_topic;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkbox_remember_settings;
    QCheckBox *checkbox_use_environment;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *line_edit_master;
    QLineEdit *line_edit_host;
    QWidget *widget;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_14;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_o;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_u;
    QPushButton *pushButton_i;
    QPushButton *pushButton_pe;
    QPushButton *pushButton_l;
    QPushButton *pushButton_j;
    QPushButton *pushButton_co;
    QPushButton *pushButton_m;
    QLabel *label_20;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QSlider *horizontalSlider_linear;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QSlider *horizontalSlider_raw;
    QLabel *label_9;
    QGridLayout *gridLayout_5;
    QLabel *label_21;
    QPushButton *pushButton_w;
    QPushButton *pushButton_e;
    QPushButton *pushButton_r;
    QPushButton *pushButton_s;
    QPushButton *pushButton_d;
    QPushButton *pushButton_f;
    QPushButton *quit_button;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QPushButton *laser_btn;
    QTextEdit *textEdit_laser_cmd;
    QTextEdit *textEdit_quick_output;
    QWidget *Tab2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLabel *label_11;
    QTreeWidget *treeWidget;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QStringLiteral("MainWindowDesign"));
        MainWindowDesign->resize(1616, 785);
        MainWindowDesign->setMaximumSize(QSize(100000, 100000));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QStringLiteral("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        tab_manager = new QTabWidget(centralwidget);
        tab_manager->setObjectName(QStringLiteral("tab_manager"));
        tab_manager->setMinimumSize(QSize(560, 670));
        tab_manager->setMaximumSize(QSize(100000, 100000));
        tab_manager->setLocale(QLocale(QLocale::English, QLocale::Australia));
        tab_status = new QWidget();
        tab_status->setObjectName(QStringLiteral("tab_status"));
        verticalLayout_7 = new QVBoxLayout(tab_status);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_speed_x = new QWidget(tab_status);
        widget_speed_x->setObjectName(QStringLiteral("widget_speed_x"));
        widget_speed_x->setMinimumSize(QSize(250, 250));
        widget_speed_x->setMaximumSize(QSize(100000, 100000));

        verticalLayout_4->addWidget(widget_speed_x);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(tab_status);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(125, 20));
        label_4->setMaximumSize(QSize(125, 16777215));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        label_dir_x = new QLabel(tab_status);
        label_dir_x->setObjectName(QStringLiteral("label_dir_x"));
        label_dir_x->setMinimumSize(QSize(125, 20));
        label_dir_x->setMaximumSize(QSize(125, 16777215));
        label_dir_x->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_dir_x);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        widget_speed_y = new QWidget(tab_status);
        widget_speed_y->setObjectName(QStringLiteral("widget_speed_y"));
        widget_speed_y->setMinimumSize(QSize(250, 250));
        widget_speed_y->setMaximumSize(QSize(10000, 10000));

        verticalLayout_6->addWidget(widget_speed_y);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(tab_status);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(125, 23));
        label_6->setMaximumSize(QSize(125, 16777215));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_6);

        label_dir_y = new QLabel(tab_status);
        label_dir_y->setObjectName(QStringLiteral("label_dir_y"));
        label_dir_y->setMinimumSize(QSize(125, 20));
        label_dir_y->setMaximumSize(QSize(125, 16777215));
        label_dir_y->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_dir_y);


        verticalLayout_6->addLayout(horizontalLayout_4);


        horizontalLayout_6->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_6);

        frame_2 = new QFrame(tab_status);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalLayout_7->addWidget(frame_2);

        groupBox_12 = new QGroupBox(tab_status);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy);
        groupBox_12->setMinimumSize(QSize(270, 300));
        groupBox_12->setMaximumSize(QSize(10000, 10000));
        view_logging = new QListView(groupBox_12);
        view_logging->setObjectName(QStringLiteral("view_logging"));
        view_logging->setGeometry(QRect(12, 32, 521, 291));
        view_logging->setMinimumSize(QSize(250, 250));
        view_logging->setMaximumSize(QSize(10000, 10000));

        verticalLayout_7->addWidget(groupBox_12);

        tab_manager->addTab(tab_status, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_7 = new QGridLayout(tab_3);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_image = new QLabel(tab_3);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setMinimumSize(QSize(540, 520));
        label_image->setMaximumSize(QSize(10000, 10000));
        label_image->setStyleSheet(QStringLiteral("border:1px solid black"));

        verticalLayout_10->addWidget(label_image);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_22 = new QLabel(tab_3);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_9->addWidget(label_22);

        PTZ_Slider = new QSlider(tab_3);
        PTZ_Slider->setObjectName(QStringLiteral("PTZ_Slider"));
        PTZ_Slider->setMinimum(60);
        PTZ_Slider->setMaximum(120);
        PTZ_Slider->setValue(90);
        PTZ_Slider->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(PTZ_Slider);

        label_PTZ = new QLabel(tab_3);
        label_PTZ->setObjectName(QStringLiteral("label_PTZ"));

        horizontalLayout_9->addWidget(label_PTZ);


        verticalLayout_9->addLayout(horizontalLayout_9);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        lineEdit_image_topic = new QLineEdit(tab_3);
        lineEdit_image_topic->setObjectName(QStringLiteral("lineEdit_image_topic"));

        verticalLayout_8->addWidget(lineEdit_image_topic);

        pushButton_sub_image = new QPushButton(tab_3);
        pushButton_sub_image->setObjectName(QStringLiteral("pushButton_sub_image"));

        verticalLayout_8->addWidget(pushButton_sub_image);


        verticalLayout_9->addLayout(verticalLayout_8);


        verticalLayout_10->addLayout(verticalLayout_9);


        gridLayout_7->addLayout(verticalLayout_10, 0, 0, 1, 1);

        tab_manager->addTab(tab_3, QString());

        horizontalLayout_7->addWidget(tab_manager);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(670, 680));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        set_start_pose_btn = new QPushButton(widget_2);
        set_start_pose_btn->setObjectName(QStringLiteral("set_start_pose_btn"));
        set_start_pose_btn->setMaximumSize(QSize(150, 16777215));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/2D_Pose_Estimate.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_start_pose_btn->setIcon(icon1);

        horizontalLayout_2->addWidget(set_start_pose_btn);

        set_goal_pose_btn = new QPushButton(widget_2);
        set_goal_pose_btn->setObjectName(QStringLiteral("set_goal_pose_btn"));
        set_goal_pose_btn->setMaximumSize(QSize(150, 16777215));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/2D_Nav_Goal.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_goal_pose_btn->setIcon(icon2);

        horizontalLayout_2->addWidget(set_goal_pose_btn);

        set_returnpose_btn = new QPushButton(widget_2);
        set_returnpose_btn->setObjectName(QStringLiteral("set_returnpose_btn"));
        set_returnpose_btn->setMinimumSize(QSize(150, 25));
        set_returnpose_btn->setMaximumSize(QSize(150, 25));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/set_pose.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_returnpose_btn->setIcon(icon3);

        horizontalLayout_2->addWidget(set_returnpose_btn);

        returnpose_btn = new QPushButton(widget_2);
        returnpose_btn->setObjectName(QStringLiteral("returnpose_btn"));
        returnpose_btn->setMinimumSize(QSize(150, 25));
        returnpose_btn->setMaximumSize(QSize(150, 25));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        returnpose_btn->setIcon(icon4);

        horizontalLayout_2->addWidget(returnpose_btn);


        verticalLayout_5->addLayout(horizontalLayout_2);

        Layout_rviz = new QVBoxLayout();
        Layout_rviz->setObjectName(QStringLiteral("Layout_rviz"));

        verticalLayout_5->addLayout(Layout_rviz);


        gridLayout_2->addLayout(verticalLayout_5, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(widget_2);


        verticalLayout_12->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(45, 0));
        label_12->setMaximumSize(QSize(45, 16777215));

        horizontalLayout_5->addWidget(label_12);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_5->addWidget(label_13);

        pose_x = new QLabel(centralwidget);
        pose_x->setObjectName(QStringLiteral("pose_x"));
        pose_x->setMinimumSize(QSize(71, 0));
        pose_x->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_5->addWidget(pose_x);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_5->addWidget(label_14);

        pose_y = new QLabel(centralwidget);
        pose_y->setObjectName(QStringLiteral("pose_y"));
        pose_y->setMinimumSize(QSize(71, 0));
        pose_y->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_5->addWidget(pose_y);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_5->addWidget(label_16);

        pose_z = new QLabel(centralwidget);
        pose_z->setObjectName(QStringLiteral("pose_z"));
        pose_z->setMinimumSize(QSize(71, 0));
        pose_z->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_5->addWidget(pose_z);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(90, 0));
        label_18->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_5->addWidget(label_18);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_5->addWidget(label_15);

        return_X = new QLabel(centralwidget);
        return_X->setObjectName(QStringLiteral("return_X"));
        return_X->setMinimumSize(QSize(71, 0));
        return_X->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_5->addWidget(return_X);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_5->addWidget(label_19);

        return_Y = new QLabel(centralwidget);
        return_Y->setObjectName(QStringLiteral("return_Y"));
        return_Y->setMinimumSize(QSize(71, 0));
        return_Y->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_5->addWidget(return_Y);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_5->addWidget(label_17);

        return_Z = new QLabel(centralwidget);
        return_Z->setObjectName(QStringLiteral("return_Z"));
        return_Z->setMinimumSize(QSize(71, 0));
        return_Z->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_5->addWidget(return_Z);


        verticalLayout_12->addLayout(horizontalLayout_5);


        horizontalLayout_8->addLayout(verticalLayout_12);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(350, 700));
        tabWidget->setMaximumSize(QSize(10000, 10000));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_11 = new QVBoxLayout(tab);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        frame = new QFrame(tab);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        button_connect = new QPushButton(groupBox);
        button_connect->setObjectName(QStringLiteral("button_connect"));
        button_connect->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(button_connect->sizePolicy().hasHeightForWidth());
        button_connect->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(button_connect, 8, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        line_edit_topic = new QLineEdit(groupBox);
        line_edit_topic->setObjectName(QStringLiteral("line_edit_topic"));
        line_edit_topic->setEnabled(false);

        gridLayout->addWidget(line_edit_topic, 5, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(170, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 8, 0, 1, 1);

        checkbox_remember_settings = new QCheckBox(groupBox);
        checkbox_remember_settings->setObjectName(QStringLiteral("checkbox_remember_settings"));
        checkbox_remember_settings->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(checkbox_remember_settings, 7, 0, 1, 2);

        checkbox_use_environment = new QCheckBox(groupBox);
        checkbox_use_environment->setObjectName(QStringLiteral("checkbox_use_environment"));
        checkbox_use_environment->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(checkbox_use_environment, 6, 0, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        line_edit_master = new QLineEdit(groupBox);
        line_edit_master->setObjectName(QStringLiteral("line_edit_master"));

        gridLayout->addWidget(line_edit_master, 1, 0, 1, 2);

        line_edit_host = new QLineEdit(groupBox);
        line_edit_host->setObjectName(QStringLiteral("line_edit_host"));

        gridLayout->addWidget(line_edit_host, 3, 0, 1, 2);


        verticalLayout_3->addWidget(groupBox);


        verticalLayout_11->addWidget(frame);

        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_6 = new QGridLayout(widget);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButton_o = new QPushButton(widget);
        pushButton_o->setObjectName(QStringLiteral("pushButton_o"));
        pushButton_o->setMinimumSize(QSize(90, 25));

        gridLayout_4->addWidget(pushButton_o, 1, 2, 1, 1);

        pushButton_stop = new QPushButton(widget);
        pushButton_stop->setObjectName(QStringLiteral("pushButton_stop"));
        pushButton_stop->setMinimumSize(QSize(90, 25));

        gridLayout_4->addWidget(pushButton_stop, 2, 1, 1, 1);

        pushButton_u = new QPushButton(widget);
        pushButton_u->setObjectName(QStringLiteral("pushButton_u"));
        pushButton_u->setMinimumSize(QSize(90, 25));

        gridLayout_4->addWidget(pushButton_u, 1, 0, 1, 1);

        pushButton_i = new QPushButton(widget);
        pushButton_i->setObjectName(QStringLiteral("pushButton_i"));
        pushButton_i->setMinimumSize(QSize(90, 25));

        gridLayout_4->addWidget(pushButton_i, 1, 1, 1, 1);

        pushButton_pe = new QPushButton(widget);
        pushButton_pe->setObjectName(QStringLiteral("pushButton_pe"));
        pushButton_pe->setMinimumSize(QSize(90, 25));

        gridLayout_4->addWidget(pushButton_pe, 3, 2, 1, 1);

        pushButton_l = new QPushButton(widget);
        pushButton_l->setObjectName(QStringLiteral("pushButton_l"));
        pushButton_l->setMinimumSize(QSize(90, 25));

        gridLayout_4->addWidget(pushButton_l, 2, 2, 1, 1);

        pushButton_j = new QPushButton(widget);
        pushButton_j->setObjectName(QStringLiteral("pushButton_j"));
        pushButton_j->setMinimumSize(QSize(90, 25));

        gridLayout_4->addWidget(pushButton_j, 2, 0, 1, 1);

        pushButton_co = new QPushButton(widget);
        pushButton_co->setObjectName(QStringLiteral("pushButton_co"));
        pushButton_co->setMinimumSize(QSize(90, 25));

        gridLayout_4->addWidget(pushButton_co, 3, 1, 1, 1);

        pushButton_m = new QPushButton(widget);
        pushButton_m->setObjectName(QStringLiteral("pushButton_m"));
        pushButton_m->setMinimumSize(QSize(90, 25));

        gridLayout_4->addWidget(pushButton_m, 3, 0, 1, 1);

        label_20 = new QLabel(widget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_20, 0, 1, 1, 1);


        verticalLayout_14->addLayout(gridLayout_4);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(16777215, 23));

        horizontalLayout_10->addWidget(label_5);

        horizontalSlider_linear = new QSlider(widget);
        horizontalSlider_linear->setObjectName(QStringLiteral("horizontalSlider_linear"));
        horizontalSlider_linear->setValue(0);
        horizontalSlider_linear->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(horizontalSlider_linear);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_10->addWidget(label_7);


        verticalLayout_13->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(16777215, 23));

        horizontalLayout_11->addWidget(label_8);

        horizontalSlider_raw = new QSlider(widget);
        horizontalSlider_raw->setObjectName(QStringLiteral("horizontalSlider_raw"));
        horizontalSlider_raw->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(horizontalSlider_raw);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_11->addWidget(label_9);


        verticalLayout_13->addLayout(horizontalLayout_11);


        verticalLayout_14->addLayout(verticalLayout_13);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_21 = new QLabel(widget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMaximumSize(QSize(16777215, 25));
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_21, 0, 1, 1, 1);

        pushButton_w = new QPushButton(widget);
        pushButton_w->setObjectName(QStringLiteral("pushButton_w"));
        pushButton_w->setMinimumSize(QSize(90, 25));
        pushButton_w->setAutoRepeat(true);

        gridLayout_5->addWidget(pushButton_w, 1, 0, 1, 1);

        pushButton_e = new QPushButton(widget);
        pushButton_e->setObjectName(QStringLiteral("pushButton_e"));
        pushButton_e->setMinimumSize(QSize(90, 25));
        pushButton_e->setAutoRepeat(true);

        gridLayout_5->addWidget(pushButton_e, 1, 1, 1, 1);

        pushButton_r = new QPushButton(widget);
        pushButton_r->setObjectName(QStringLiteral("pushButton_r"));
        pushButton_r->setMinimumSize(QSize(90, 25));
        pushButton_r->setAutoRepeat(true);

        gridLayout_5->addWidget(pushButton_r, 1, 2, 1, 1);

        pushButton_s = new QPushButton(widget);
        pushButton_s->setObjectName(QStringLiteral("pushButton_s"));
        pushButton_s->setMinimumSize(QSize(90, 25));
        pushButton_s->setAutoRepeat(true);

        gridLayout_5->addWidget(pushButton_s, 2, 0, 1, 1);

        pushButton_d = new QPushButton(widget);
        pushButton_d->setObjectName(QStringLiteral("pushButton_d"));
        pushButton_d->setMinimumSize(QSize(90, 25));
        pushButton_d->setAutoRepeat(true);

        gridLayout_5->addWidget(pushButton_d, 2, 1, 1, 1);

        pushButton_f = new QPushButton(widget);
        pushButton_f->setObjectName(QStringLiteral("pushButton_f"));
        pushButton_f->setMinimumSize(QSize(90, 25));
        pushButton_f->setAutoRepeat(true);

        gridLayout_5->addWidget(pushButton_f, 2, 2, 1, 1);


        verticalLayout_14->addLayout(gridLayout_5);


        gridLayout_6->addLayout(verticalLayout_14, 0, 0, 1, 1);


        verticalLayout_11->addWidget(widget);

        quit_button = new QPushButton(tab);
        quit_button->setObjectName(QStringLiteral("quit_button"));
        sizePolicy2.setHeightForWidth(quit_button->sizePolicy().hasHeightForWidth());
        quit_button->setSizePolicy(sizePolicy2);

        verticalLayout_11->addWidget(quit_button);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 30, 321, 131));
        laser_btn = new QPushButton(groupBox_2);
        laser_btn->setObjectName(QStringLiteral("laser_btn"));
        laser_btn->setGeometry(QRect(90, 100, 121, 25));
        textEdit_laser_cmd = new QTextEdit(groupBox_2);
        textEdit_laser_cmd->setObjectName(QStringLiteral("textEdit_laser_cmd"));
        textEdit_laser_cmd->setGeometry(QRect(20, 30, 281, 51));
        textEdit_quick_output = new QTextEdit(tab_2);
        textEdit_quick_output->setObjectName(QStringLiteral("textEdit_quick_output"));
        textEdit_quick_output->setGeometry(QRect(30, 230, 291, 121));
        textEdit_quick_output->setStyleSheet(QStringLiteral("background:black"));
        tabWidget->addTab(tab_2, QString());
        Tab2 = new QWidget();
        Tab2->setObjectName(QStringLiteral("Tab2"));
        verticalLayout_2 = new QVBoxLayout(Tab2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_10 = new QLabel(Tab2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(16, 16));
        label_10->setMaximumSize(QSize(25, 16));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/images/display.png")));

        horizontalLayout->addWidget(label_10);

        label_11 = new QLabel(Tab2);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout->addWidget(label_11);


        verticalLayout->addLayout(horizontalLayout);

        treeWidget = new QTreeWidget(Tab2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->header()->setDefaultSectionSize(150);
        treeWidget->header()->setMinimumSectionSize(150);

        verticalLayout->addWidget(treeWidget);


        verticalLayout_2->addLayout(verticalLayout);

        tabWidget->addTab(Tab2, QString());

        horizontalLayout_8->addWidget(tabWidget);


        gridLayout_3->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        MainWindowDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1616, 28));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        MainWindowDesign->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowDesign);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowDesign->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));

        tab_manager->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "QRosApp", Q_NULLPTR));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", Q_NULLPTR));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindowDesign", "x\350\275\264\347\272\277\351\200\237\345\272\246", Q_NULLPTR));
        label_dir_x->setText(QApplication::translate("MainWindowDesign", "\346\255\243\345\220\221", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindowDesign", "y\350\275\264\347\272\277\351\200\237\345\272\246", Q_NULLPTR));
        label_dir_y->setText(QApplication::translate("MainWindowDesign", "\346\255\243\345\220\221", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("MainWindowDesign", "Logging", Q_NULLPTR));
        tab_manager->setTabText(tab_manager->indexOf(tab_status), QApplication::translate("MainWindowDesign", "Ros Communications", Q_NULLPTR));
        label_image->setText(QApplication::translate("MainWindowDesign", "NO IMAGE", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindowDesign", "\344\272\221\345\217\260\350\275\254\345\212\250", Q_NULLPTR));
        label_PTZ->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        pushButton_sub_image->setText(QApplication::translate("MainWindowDesign", "\350\256\242\351\230\205", Q_NULLPTR));
        tab_manager->setTabText(tab_manager->indexOf(tab_3), QApplication::translate("MainWindowDesign", "LaserScan", Q_NULLPTR));
        set_start_pose_btn->setText(QApplication::translate("MainWindowDesign", "2D Pose Estimate", Q_NULLPTR));
        set_goal_pose_btn->setText(QApplication::translate("MainWindowDesign", "2D Nav Goal", Q_NULLPTR));
        set_returnpose_btn->setText(QApplication::translate("MainWindowDesign", "\350\256\276\347\275\256\350\277\224\350\210\252\347\202\271", Q_NULLPTR));
        returnpose_btn->setText(QApplication::translate("MainWindowDesign", "\350\277\224\350\210\252", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindowDesign", "\345\235\220\346\240\207\357\274\232", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindowDesign", "X\357\274\232", Q_NULLPTR));
        pose_x->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindowDesign", "Y\357\274\232", Q_NULLPTR));
        pose_y->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindowDesign", "Z\357\274\232", Q_NULLPTR));
        pose_z->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindowDesign", "\350\277\224\350\210\252\347\202\271\345\235\220\346\240\207\357\274\232", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindowDesign", "X\357\274\232", Q_NULLPTR));
        return_X->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindowDesign", "Y\357\274\232", Q_NULLPTR));
        return_Y->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindowDesign", "Z\357\274\232", Q_NULLPTR));
        return_Z->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindowDesign", "Ros Master", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        button_connect->setToolTip(QApplication::translate("MainWindowDesign", "Set the target to the current joint trajectory state.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_connect->setStatusTip(QApplication::translate("MainWindowDesign", "Clear all waypoints and set the target to the current joint trajectory state.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        button_connect->setText(QApplication::translate("MainWindowDesign", "Connect", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindowDesign", "Ros Master Url", Q_NULLPTR));
        line_edit_topic->setText(QApplication::translate("MainWindowDesign", "unused", Q_NULLPTR));
        checkbox_remember_settings->setText(QApplication::translate("MainWindowDesign", "Remember settings on startup", Q_NULLPTR));
        checkbox_use_environment->setText(QApplication::translate("MainWindowDesign", "Use environment variables", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindowDesign", "Ros IP", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindowDesign", "Ros Hostname", Q_NULLPTR));
        line_edit_master->setText(QApplication::translate("MainWindowDesign", "http://192.168.1.2:11311/", Q_NULLPTR));
        line_edit_host->setText(QApplication::translate("MainWindowDesign", "192.168.1.67", Q_NULLPTR));
        pushButton_o->setText(QApplication::translate("MainWindowDesign", "o", Q_NULLPTR));
        pushButton_stop->setText(QApplication::translate("MainWindowDesign", "stop", Q_NULLPTR));
        pushButton_u->setText(QApplication::translate("MainWindowDesign", "u", Q_NULLPTR));
        pushButton_i->setText(QApplication::translate("MainWindowDesign", "i", Q_NULLPTR));
        pushButton_pe->setText(QApplication::translate("MainWindowDesign", ".", Q_NULLPTR));
        pushButton_l->setText(QApplication::translate("MainWindowDesign", "l", Q_NULLPTR));
        pushButton_j->setText(QApplication::translate("MainWindowDesign", "j", Q_NULLPTR));
        pushButton_co->setText(QApplication::translate("MainWindowDesign", ",", Q_NULLPTR));
        pushButton_m->setText(QApplication::translate("MainWindowDesign", "m", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindowDesign", "\347\247\273\345\212\250\346\216\247\345\210\266", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindowDesign", "\347\272\277\351\200\237\345\272\246cm/s:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindowDesign", "\350\247\222\351\200\237\345\272\246rad/s:", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindowDesign", "\346\234\272\346\242\260\350\207\202\346\216\247\345\210\266", Q_NULLPTR));
        pushButton_w->setText(QApplication::translate("MainWindowDesign", "\345\244\247\350\207\202\344\270\212w", Q_NULLPTR));
        pushButton_e->setText(QApplication::translate("MainWindowDesign", "\345\260\217\350\207\202\344\270\212e", Q_NULLPTR));
        pushButton_r->setText(QApplication::translate("MainWindowDesign", "\347\210\252\345\274\200r", Q_NULLPTR));
        pushButton_s->setText(QApplication::translate("MainWindowDesign", "\345\244\247\350\207\202\344\270\213s", Q_NULLPTR));
        pushButton_d->setText(QApplication::translate("MainWindowDesign", "\345\260\217\350\207\202\344\270\213d", Q_NULLPTR));
        pushButton_f->setText(QApplication::translate("MainWindowDesign", "\347\210\252\346\224\266f", Q_NULLPTR));
        quit_button->setText(QApplication::translate("MainWindowDesign", "Quit", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindowDesign", "Tab 1", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindowDesign", "\346\277\200\345\205\211\351\233\267\350\276\276", Q_NULLPTR));
        laser_btn->setText(QApplication::translate("MainWindowDesign", "\346\211\223\345\274\200\346\277\200\345\205\211\351\233\267\350\276\276", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindowDesign", "Tab2", Q_NULLPTR));
        label_10->setText(QString());
        label_11->setText(QApplication::translate("MainWindowDesign", "Display", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Tab2), QApplication::translate("MainWindowDesign", "rviz", Q_NULLPTR));
        menu_File->setTitle(QApplication::translate("MainWindowDesign", "&App", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
