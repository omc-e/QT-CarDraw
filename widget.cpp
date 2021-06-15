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

    //prozor1
    QPainterPath p1;
    p1.moveTo(310,130);
    p1.arcTo(QRectF(310,50,182,170),175,-81);
    p1.lineTo(395,130);
    p1.lineTo(310,130);
    painter.fillPath(p1,Qt::blue);
    painter.drawPath(p1);

    QPainterPath p2;
    p2.moveTo(405,130);
    p2.arcTo(QRectF(310,50,182,170),3,84);
    p2.lineTo(405,130);
    painter.fillPath(p2,Qt::blue);
    painter.drawPath(p2);

    //Gume
    painter.setBrush(Qt::gray);
    painter.drawEllipse(300,165,70,70);
    painter.drawEllipse(480,165,70,70);
    painter.setBrush(Qt::black);
    painter.drawEllipse(310,175,50,50);
    painter.drawEllipse(490,175,50,50);
   // painter.setBrush(Qt::gray);

    //painter.setBrush(Qt::black);


    painter.end();



}
