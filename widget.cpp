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

    //zuta pozadina
    painter.begin(this);
    painter.fillRect(rect(),Qt::yellow);

    //Sasija
    QPainterPath spath;
    spath.moveTo(600, 130);
        spath.arcTo(QRect(300,40,200,180),0,180);
        spath.moveTo(300, 130);
        spath.lineTo(245, 135);
        spath.lineTo(240, 200);
        spath.lineTo(290, 197);

        spath.arcTo(QRect(290,155.5,90,90), 180, -180);
        spath.lineTo(380,205);
        spath.lineTo(470,205);
        spath.lineTo(470,205);

        spath.arcTo(QRect(470,155.5,90,90), 180, -180);
        spath.lineTo(620,200);
        spath.lineTo(600,130);

    painter.fillPath(spath, Qt::red);
    painter.drawPath(spath);




}
