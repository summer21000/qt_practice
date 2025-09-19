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
    QString str_caption = "Save_File";
    // 처음탐색할 경로 설정
    QString str_dir = "";

    QString file = QFileDialog::getExistingDirectory(this,str_caption, str_dir);

    ui->lineEdit_1_address->setText(file);
}

void MainWindow::on_pushButton_2_openAddress_clicked()
{
    QDir path(ui->lineEdit_1_address->text());

    if(path.exists() == 1){
        QDesktopServices::openUrl(QUrl::fromLocalFile(ui->lineEdit_1_address->text()));
    }
    else{
        QMessageBox::warning(this,
                             tr)
    }
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
