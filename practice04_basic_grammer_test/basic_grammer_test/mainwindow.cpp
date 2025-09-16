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

    int point1 = 20, point2 = 60, point3 = 99;

    reaction_if(point1);
    reaction_if(point2);
    reaction_if(point3);

    int today, yesterday;
    today = sat;
    yesterday = today - 1;

    reaction_switch(yesterday);
}

MainWindow::~MainWindow()
{
    delete ui;
}
