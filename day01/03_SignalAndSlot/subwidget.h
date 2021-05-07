#ifndef SUBWIDGET_H
#define SUBWIDGET_H

#include <QWidget>
#include <QPushButton>

class SubWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SubWidget(QWidget *parent = nullptr);

    void sendSlot();


signals:
    /*信号必须有signals关键字来声明
     * 信号没有返回值，但可以有参数
     * 信号就是函数的声明，只需声明，无需定义
     * 使用:emit mysignal();
    */
    void mySignal();
    void mySignal(int,QString);

private:
    QPushButton b;
};

#endif // SUBWIDGET_H
