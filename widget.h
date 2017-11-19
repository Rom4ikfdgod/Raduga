#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
protected:
    /*
    void mousePressEvent(QMouseEvent *eventPress);
    void paintEvent(QPaintEvent *e);*/
private:
    Ui::Widget *ui;
    int x = 0;
    int y = 0;

#endif // WIDGET_H
