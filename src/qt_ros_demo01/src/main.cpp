/**
 * @file /src/main.cpp
 *
 * @brief Qt based gui.
 *
 * @date November 2010
 **/
/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui>
#include <QApplication>
#include "../include/qt_ros_demo01/main_window.hpp"
// #include "../include/qt_ros_demo01/qrviz_widget.h"
// #include "qt_ros_demo01/qttest.hpp"

/*****************************************************************************
** Main
*****************************************************************************/

int main(int argc, char **argv) {

    /*********************
    ** Qt
    **********************/
    QApplication app(argc, argv);
    qt_ros_demo01::MainWindow w(argc,argv);
    w.show();
//    Qttest qtt;
//    qtt.show();
    // QRviz_widget* qrviz;
    // qrviz->show();
    app.connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));
    int result = app.exec();

	return result;
}
