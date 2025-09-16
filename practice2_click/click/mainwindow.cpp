#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->setText("hello"); // 라인에딧 창에 텍스트 hello 세팅
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText(""); // 라인에딧 창에 공백으로 텍스트 세팅 해서 지우는 효과
}

void MainWindow::on_pushButton_3_clicked()
{
    this->close(); // 전체 창 종료
}
