#include "widget.h"
#include "ui_widget.h"

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

void Widget::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);
    QPen pen1;
    pen1.setColor(Qt::black);
    pen1.setWidth(3);
    painter.setPen(pen1);

    QBrush cetka1;
    cetka1.setColor(Qt::red);
    cetka1.setStyle(Qt::SolidPattern);

    painter.begin(this);
    painter.fillRect(rect(),Qt::yellow);


}
