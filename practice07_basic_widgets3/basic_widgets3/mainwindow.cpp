#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 최초실행시, 프로그램이 실행되고 있는 파일경로 가져오기
    ui->lineEdit_1_address->setText(QCoreApplication::applicationDirPath());
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 경로지정 버튼 클릭시 호출 슬롯
void MainWindow::on_pushButton_1_pointAddress_clicked()
{
    // 파일 탐색기창 제목

}

void MainWindow::on_pushButton_2_openAddress_clicked()
{

}

void MainWindow::on_pushButton_3saveSetting_clicked()
{

}

void MainWindow::on_pushButton_4_openfile_clicked()
{

}

void MainWindow::on_pushButton_5_apply_clicked()
{

}
