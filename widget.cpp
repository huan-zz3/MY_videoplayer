#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QDir>


Widget::Widget(QWidget *parent): QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);

    QString targetDirectory = QDir::currentPath();
    QStringList mp4Files;
    qDebug() << mp4Files;

//    QDirIterator it(targetDirectory, QStringList() <<"*.mp4", QDir::Files, QDirIterator::Subdirectories);

//    QStringList urls;


//    urls << "http://vfx.mtime.cn/Video/2021/11/16/mp4/211116131456748178.mp4";
//    urls << "http://vd3.bdstatic.com/mda-jennyc5ci1ugrxzi/mda-jennyc5ci1ugrxzi.mp4";
//    urls << "rtsp://admin:Admin123456@192.168.0.15:554/media/video1";
//    ui->cboxUrl->addItems(urls);
//    ui->cboxUrl->setCurrentIndex(0);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_playButton_clicked()
{

}


void Widget::on_stopButton_clicked()
{

}
