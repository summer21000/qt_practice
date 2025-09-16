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


void MainWindow::on_pushButton1_sex_male_clicked()
{
    ui->pushButton1_sex_male->setEnabled(false);
    ui->pushButton2_sex_female->setEnabled(true);
    ui->pushButton3_sex_etc->setEnabled(true);
    ui->label_2_sex->setText(ui->pushButton1_sex_male->text());
}

void MainWindow::on_pushButton2_sex_female_clicked()
{
    ui->pushButton1_sex_male->setEnabled(true);
    ui->pushButton2_sex_female->setEnabled(false);
    ui->pushButton3_sex_etc->setEnabled(true);
    ui->label_2_sex->setText(ui->pushButton2_sex_female->text());
}

void MainWindow::on_pushButton3_sex_etc_clicked()
{
    ui->pushButton1_sex_male->setEnabled(true);
    ui->pushButton2_sex_female->setEnabled(true);
    ui->pushButton3_sex_etc->setEnabled(false);
    ui->label_2_sex->setText(ui->pushButton3_sex_etc->text());
}
