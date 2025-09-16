#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // qDebug 테스트
    qDebug() << "hello";
    qDebug() << "hello" << "Qt";
    qDebug("hello");
    qDebug() << QString("hello");

    // string 변수 사용
    QString str1, str2;
    str1 = "hello";
    str2 = "Qt";
    qDebug() << QString("%1 Qt").arg(str1);
    qDebug() << QString("%1 %2").arg(str1).arg(str2);
    qDebug() << "hi Qt! " << QString("%1").arg(str1);

    // 정수형 변수 사용
    int n = 10;
    qDebug() << n;

    // 변수의 상수화(const 사용)
    // C++ 계열에서는 #define 보다는 const를 사용
    double const PI = 3.141492;
    qDebug() << PI;

    //사칙연산 가능
    qDebug() << (n*PI) + n;

    //논리연산 가능
    qDebug() << ((n < 11) && (n > 0));
}

MainWindow::~MainWindow()
{
    delete ui;
}
