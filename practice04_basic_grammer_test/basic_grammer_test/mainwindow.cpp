#include "mainwindow.h"
#include "ui_mainwindow.h"

enum weekday {
    mon, tue, wed, thu, fri, sat,sun //switch 문은 일반적으로 enum과 함께 쓰임
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

    qDebug() << "=============<C++ basic grammer test: array>==========";

    qDebug() << "static array";
    int number[10]; // 정적배열
    for(int i = 0; i < 10; i++){
        number[i] = i;
        qDebug() << QString("number[%1] = %2").arg(i).arg(number[i]);
    }

    qDebug() << "dynamic array";
    int* num = new int[10]; // 동적 배열
    for(int i = 0; i < 10; i++){
        num[i] = i;
        qDebug() << QString("num[%1] = %2").arg(i).arg(num[i]);
    }
    delete[] num; // 동적배열 메모리 해제

    qDebug() << "======================================================";
}

MainWindow::~MainWindow()
{
    delete ui;
}
