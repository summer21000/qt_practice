#include "mainwindow.h"
#include "ui_mainwindow.h"

enum weekday {
    mon, tue, wed, thu, fri, sat,sun
};

void reaction_if(int x){
    if(x <= 30){
        qDebug() << "wow...";
    } else if(30 < x && x < 70){
        qDebug() << "soso";
    } else if(70 <= x && x <= 100){
        qDebug() << "WOW!";
    }
}

void reaction_switch(int day){
    switch(day){
    case fri:
    case sat: qDebug() << "saturday!!"; break;
    case mon: qDebug() << "No...";      break;
    default: qDebug()  << "hi!";        break;
    }
}


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 헤더파일에 #include <QDebug> 추가
    qDebug() << "<C++ basic grammer test>";
    qDebug() << "=============<C++ basic grammer test: if>=============";

    int point1 = 20, point2 = 60, point3 = 99;

    reaction_if(point1);
    reaction_if(point2);
    reaction_if(point3);

    qDebug() << "=============<C++ basic grammer test: switch>=========";

    int today;
    today = mon;

    reaction_switch(today);

    qDebug() << "=============<C++ basic grammer test: for>============";

    int sum = 0;

    for(int i = 0; i < 10; i++){
        qDebug() << i;
        sum += i;
    }

    qDebug() << QString("sum %1").arg(sum);

    qDebug() << "======================================================";
}

MainWindow::~MainWindow()
{
    delete ui;
}
