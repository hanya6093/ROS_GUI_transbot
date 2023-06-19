/********************************************************************************
** Form generated from reading UI file 'main_window(复件).ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_28__590D__4EF6__29__H
#define UI_MAIN_WINDOW_28__590D__4EF6__29__H

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
    QGridLayout *gridLayout_9;
    QTabWidget *tab_manager;
    QWidget *tab_status;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_speed_x;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_dir_x;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_speed_y;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *label_dir_y;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_12;
    QListView *view_logging;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_image;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *lineEdit_image_topic;
    QPushButton *pushButton_sub_image;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *set_start_pose_btn;
    QPushButton *set_goal_pose_btn;
    QVBoxLayout *Layout_rviz;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_11;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *line_edit_master;
    QLabel *label_2;
    QLineEdit *line_edit_host;
    QLabel *label_3;
    QLineEdit *line_edit_topic;
    QCheckBox *checkbox_use_environment;
    QCheckBox *checkbox_remember_settings;
    QSpacerItem *horizontalSpacer;
    QPushButton *button_connect;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_5;
    QSlider *horizontalSlider_linear;
    QPushButton *pushButton_pe;
    QLabel *label_7;
    QPushButton *pushButton_u;
    QPushButton *pushButton_j;
    QCheckBox *checkBox_use_all;
    QPushButton *pushButton_co;
    QPushButton *pushButton_i;
    QLabel *label_9;
    QLabel *label_8;
    QPushButton *pushButton_m;
    QPushButton *pushButton_o;
    QPushButton *pushButton_l;
    QSlider *horizontalSlider_raw;
    QLabel *label_5;
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
        MainWindowDesign->resize(1074, 768);
        MainWindowDesign->setMaximumSize(QSize(1074, 768));
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
        gridLayout_9 = new QGridLayout(centralwidget);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        tab_manager = new QTabWidget(centralwidget);
        tab_manager->setObjectName(QStringLiteral("tab_manager"));
        tab_manager->setMinimumSize(QSize(700, 700));
        tab_manager->setMaximumSize(QSize(100000, 100000));
        tab_manager->setLocale(QLocale(QLocale::English, QLocale::Australia));
        tab_status = new QWidget();
        tab_status->setObjectName(QStringLiteral("tab_status"));
        verticalLayout_10 = new QVBoxLayout(tab_status);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        widget_speed_x = new QWidget(tab_status);
        widget_speed_x->setObjectName(QStringLiteral("widget_speed_x"));
        widget_speed_x->setMinimumSize(QSize(300, 300));
        widget_speed_x->setMaximumSize(QSize(100000, 100000));

        verticalLayout_7->addWidget(widget_speed_x);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(tab_status);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(150, 0));

        horizontalLayout_3->addWidget(label_4);

        label_dir_x = new QLabel(tab_status);
        label_dir_x->setObjectName(QStringLiteral("label_dir_x"));
        label_dir_x->setMinimumSize(QSize(150, 0));

        horizontalLayout_3->addWidget(label_dir_x);


        verticalLayout_7->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_7);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_speed_y = new QWidget(tab_status);
        widget_speed_y->setObjectName(QStringLiteral("widget_speed_y"));
        widget_speed_y->setMinimumSize(QSize(300, 300));
        widget_speed_y->setMaximumSize(QSize(10000, 10000));

        verticalLayout_4->addWidget(widget_speed_y);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(tab_status);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(150, 0));

        horizontalLayout_4->addWidget(label_6);

        label_dir_y = new QLabel(tab_status);
        label_dir_y->setObjectName(QStringLiteral("label_dir_y"));
        label_dir_y->setMinimumSize(QSize(150, 0));

        horizontalLayout_4->addWidget(label_dir_y);


        verticalLayout_4->addLayout(horizontalLayout_4);


        horizontalLayout_6->addLayout(verticalLayout_4);


        verticalLayout_9->addLayout(horizontalLayout_6);

        frame_2 = new QFrame(tab_status);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalLayout_9->addWidget(frame_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
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
        view_logging->setGeometry(QRect(12, 32, 250, 250));
        view_logging->setMinimumSize(QSize(250, 250));
        view_logging->setMaximumSize(QSize(250, 250));

        horizontalLayout_7->addWidget(groupBox_12);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_image = new QLabel(tab_status);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setMinimumSize(QSize(250, 200));
        label_image->setMaximumSize(QSize(10000, 10000));
        label_image->setStyleSheet(QStringLiteral("border:1px solid black"));

        horizontalLayout_5->addWidget(label_image);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        lineEdit_image_topic = new QLineEdit(tab_status);
        lineEdit_image_topic->setObjectName(QStringLiteral("lineEdit_image_topic"));

        verticalLayout_8->addWidget(lineEdit_image_topic);

        pushButton_sub_image = new QPushButton(tab_status);
        pushButton_sub_image->setObjectName(QStringLiteral("pushButton_sub_image"));

        verticalLayout_8->addWidget(pushButton_sub_image);


        horizontalLayout_5->addLayout(verticalLayout_8);


        horizontalLayout_7->addLayout(horizontalLayout_5);


        verticalLayout_9->addLayout(horizontalLayout_7);


        verticalLayout_10->addLayout(verticalLayout_9);

        tab_manager->addTab(tab_status, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_6 = new QVBoxLayout(tab_3);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        set_start_pose_btn = new QPushButton(tab_3);
        set_start_pose_btn->setObjectName(QStringLiteral("set_start_pose_btn"));
        set_start_pose_btn->setMaximumSize(QSize(150, 16777215));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/2D_Pose_Estimate.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_start_pose_btn->setIcon(icon1);

        horizontalLayout_2->addWidget(set_start_pose_btn);

        set_goal_pose_btn = new QPushButton(tab_3);
        set_goal_pose_btn->setObjectName(QStringLiteral("set_goal_pose_btn"));
        set_goal_pose_btn->setMaximumSize(QSize(150, 16777215));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/2D_Nav_Goal.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_goal_pose_btn->setIcon(icon2);

        horizontalLayout_2->addWidget(set_goal_pose_btn);


        verticalLayout_5->addLayout(horizontalLayout_2);

        Layout_rviz = new QVBoxLayout();
        Layout_rviz->setObjectName(QStringLiteral("Layout_rviz"));

        verticalLayout_5->addLayout(Layout_rviz);


        verticalLayout_6->addLayout(verticalLayout_5);

        tab_manager->addTab(tab_3, QString());

        gridLayout_9->addWidget(tab_manager, 0, 0, 1, 1);

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
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        line_edit_master = new QLineEdit(groupBox);
        line_edit_master->setObjectName(QStringLiteral("line_edit_master"));

        gridLayout->addWidget(line_edit_master, 1, 0, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        line_edit_host = new QLineEdit(groupBox);
        line_edit_host->setObjectName(QStringLiteral("line_edit_host"));

        gridLayout->addWidget(line_edit_host, 3, 0, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        line_edit_topic = new QLineEdit(groupBox);
        line_edit_topic->setObjectName(QStringLiteral("line_edit_topic"));
        line_edit_topic->setEnabled(false);

        gridLayout->addWidget(line_edit_topic, 5, 0, 1, 2);

        checkbox_use_environment = new QCheckBox(groupBox);
        checkbox_use_environment->setObjectName(QStringLiteral("checkbox_use_environment"));
        checkbox_use_environment->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(checkbox_use_environment, 6, 0, 1, 2);

        checkbox_remember_settings = new QCheckBox(groupBox);
        checkbox_remember_settings->setObjectName(QStringLiteral("checkbox_remember_settings"));
        checkbox_remember_settings->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(checkbox_remember_settings, 7, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(170, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 8, 0, 1, 1);

        button_connect = new QPushButton(groupBox);
        button_connect->setObjectName(QStringLiteral("button_connect"));
        button_connect->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(button_connect->sizePolicy().hasHeightForWidth());
        button_connect->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(button_connect, 8, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox);


        verticalLayout_11->addWidget(frame);

        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalSlider_linear = new QSlider(widget);
        horizontalSlider_linear->setObjectName(QStringLiteral("horizontalSlider_linear"));
        horizontalSlider_linear->setValue(0);
        horizontalSlider_linear->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider_linear, 3, 1, 1, 3);

        pushButton_pe = new QPushButton(widget);
        pushButton_pe->setObjectName(QStringLiteral("pushButton_pe"));

        gridLayout_5->addWidget(pushButton_pe, 2, 3, 1, 2);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_5->addWidget(label_7, 3, 4, 1, 1);

        pushButton_u = new QPushButton(widget);
        pushButton_u->setObjectName(QStringLiteral("pushButton_u"));

        gridLayout_5->addWidget(pushButton_u, 0, 0, 1, 2);

        pushButton_j = new QPushButton(widget);
        pushButton_j->setObjectName(QStringLiteral("pushButton_j"));

        gridLayout_5->addWidget(pushButton_j, 1, 0, 1, 2);

        checkBox_use_all = new QCheckBox(widget);
        checkBox_use_all->setObjectName(QStringLiteral("checkBox_use_all"));

        gridLayout_5->addWidget(checkBox_use_all, 1, 2, 1, 1);

        pushButton_co = new QPushButton(widget);
        pushButton_co->setObjectName(QStringLiteral("pushButton_co"));

        gridLayout_5->addWidget(pushButton_co, 2, 2, 1, 1);

        pushButton_i = new QPushButton(widget);
        pushButton_i->setObjectName(QStringLiteral("pushButton_i"));

        gridLayout_5->addWidget(pushButton_i, 0, 2, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_5->addWidget(label_9, 4, 4, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_5->addWidget(label_8, 4, 0, 1, 1);

        pushButton_m = new QPushButton(widget);
        pushButton_m->setObjectName(QStringLiteral("pushButton_m"));

        gridLayout_5->addWidget(pushButton_m, 2, 0, 1, 2);

        pushButton_o = new QPushButton(widget);
        pushButton_o->setObjectName(QStringLiteral("pushButton_o"));

        gridLayout_5->addWidget(pushButton_o, 0, 3, 1, 2);

        pushButton_l = new QPushButton(widget);
        pushButton_l->setObjectName(QStringLiteral("pushButton_l"));

        gridLayout_5->addWidget(pushButton_l, 1, 3, 1, 2);

        horizontalSlider_raw = new QSlider(widget);
        horizontalSlider_raw->setObjectName(QStringLiteral("horizontalSlider_raw"));
        horizontalSlider_raw->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider_raw, 4, 1, 1, 3);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_5->addWidget(label_5, 3, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 0, 0, 1, 1);


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

        gridLayout_9->addWidget(tabWidget, 0, 1, 1, 1);

        MainWindowDesign->setCentralWidget(centralwidget);
        tabWidget->raise();
        tab_manager->raise();
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1074, 28));
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

        tab_manager->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);


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
        label_image->setText(QApplication::translate("MainWindowDesign", "NO IMAGE", Q_NULLPTR));
        pushButton_sub_image->setText(QApplication::translate("MainWindowDesign", "\350\256\242\351\230\205", Q_NULLPTR));
        tab_manager->setTabText(tab_manager->indexOf(tab_status), QApplication::translate("MainWindowDesign", "Ros Communications", Q_NULLPTR));
        set_start_pose_btn->setText(QApplication::translate("MainWindowDesign", "2D Pose Estimate", Q_NULLPTR));
        set_goal_pose_btn->setText(QApplication::translate("MainWindowDesign", "2D Nav Goal", Q_NULLPTR));
        tab_manager->setTabText(tab_manager->indexOf(tab_3), QApplication::translate("MainWindowDesign", "rivz", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindowDesign", "Ros Master", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindowDesign", "Ros Master Url", Q_NULLPTR));
        line_edit_master->setText(QApplication::translate("MainWindowDesign", "http://192.168.1.2:11311/", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindowDesign", "Ros IP", Q_NULLPTR));
        line_edit_host->setText(QApplication::translate("MainWindowDesign", "192.168.1.67", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindowDesign", "Ros Hostname", Q_NULLPTR));
        line_edit_topic->setText(QApplication::translate("MainWindowDesign", "unused", Q_NULLPTR));
        checkbox_use_environment->setText(QApplication::translate("MainWindowDesign", "Use environment variables", Q_NULLPTR));
        checkbox_remember_settings->setText(QApplication::translate("MainWindowDesign", "Remember settings on startup", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        button_connect->setToolTip(QApplication::translate("MainWindowDesign", "Set the target to the current joint trajectory state.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_connect->setStatusTip(QApplication::translate("MainWindowDesign", "Clear all waypoints and set the target to the current joint trajectory state.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        button_connect->setText(QApplication::translate("MainWindowDesign", "Connect", Q_NULLPTR));
        pushButton_pe->setText(QApplication::translate("MainWindowDesign", ".", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindowDesign", "100", Q_NULLPTR));
        pushButton_u->setText(QApplication::translate("MainWindowDesign", "u", Q_NULLPTR));
        pushButton_j->setText(QApplication::translate("MainWindowDesign", "j", Q_NULLPTR));
        checkBox_use_all->setText(QApplication::translate("MainWindowDesign", "\345\205\250\345\220\221\350\275\256\346\250\241\345\274\217", Q_NULLPTR));
        pushButton_co->setText(QApplication::translate("MainWindowDesign", ",", Q_NULLPTR));
        pushButton_i->setText(QApplication::translate("MainWindowDesign", "i", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindowDesign", "\350\247\222\351\200\237\345\272\246rad/s:", Q_NULLPTR));
        pushButton_m->setText(QApplication::translate("MainWindowDesign", "m", Q_NULLPTR));
        pushButton_o->setText(QApplication::translate("MainWindowDesign", "o", Q_NULLPTR));
        pushButton_l->setText(QApplication::translate("MainWindowDesign", "l", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindowDesign", "\347\272\277\351\200\237\345\272\246cm/s:", Q_NULLPTR));
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

#endif // UI_MAIN_WINDOW_28__590D__4EF6__29__H
