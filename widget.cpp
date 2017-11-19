#include "widget.h"
#include "ui_widget.h"
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::mousePressEvent(QMouseEvent *eventPress){
    x = eventPress->x();
    y = eventPress->y();
    this->repaint();
}
void Widget::paintEvent(QPaintEvent *e){
    QPainter painter(this);
    painter.setPen(QPen(Qt::black));
    painter.setBrush(QBrush(QColor::fromRgb(120,40,50)));
    painter.drawEllipse(x-25, y-25,50,50);
}

