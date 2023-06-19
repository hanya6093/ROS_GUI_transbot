#ifndef CCTRLDASHBOARD_H
#define CCTRLDASHBOARD_H

#include <QWidget>
#include <QPainter>
#include <QDebug>
#include <qmath.h>
// #include <QPainterPath>
class CCtrlDashBoard : public QWidget
{
    Q_OBJECT
public:
    enum StyleType {
        ST_DEFAULT=0,
        ST_ARCBAR
    };   
    //  enum StyleType {
    //     ST_ARCBAR=0,
    //     ST_DEFAULT
    // };
    // explicit CCtrlDashBoard(QWidget *parent = nullptr, StyleType type=ST_DEFAULT);
    explicit CCtrlDashBoard(QWidget *parent = nullptr, StyleType type=ST_ARCBAR);

    void setValue(qreal value){
        m_DashValue = value;
        update();
    }
    void setBackGroundColor(QColor color){
        m_BgColor=color;
        update();
    }
    void setFrontColor(QColor color){
        m_FrontColor=color;
        update();
    }
    void setBorderColor(QColor color){
        m_BorderColor=color;
        update();
    }
    void setUnitString(QString str){
        m_StrUnit=str;
        update();
    }

    void drawBackGround(QPainter *painter, qreal hlafWidth); // 背景绘制
    void drawScaleDials(QPainter *painter, qreal hlafWidth); // 刻度细节
    void drawIndicator(QPainter *painter, qreal hlafWidth); // 绘制指针
    void drawIndicatorBar(QPainter *painter, qreal hlafWidth); // 绘制另一种指针
signals:

public slots:
protected:
    virtual void paintEvent(QPaintEvent * event);

private:
    int m_StartAngle;   // 开始角度
    int m_EndAngle;     // 结束角度
    int m_StyleType;

    qreal m_LineLength; 
    qreal m_DashValue;  // 表盘值
    qreal m_MaxValue;   // 最大值
    qreal m_MinValue;   // 最小值
    qreal m_DashNum;    // 步长

    QColor m_BgColor;   // 背景色
    QColor m_FrontColor;// 格式色
    QColor m_BorderColor;// 表盘色
    QString m_StrUnit;  //

    qreal m_MaxBorderRadius;// 盘面最大角度
    qreal m_MinBorderRadius;// 盘面最小角度
    qreal m_DialsRadius;
};

#endif // CCTRLDASHBOARD_H
