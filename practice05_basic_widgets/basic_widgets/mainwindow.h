#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_pushButton1_sex_male_clicked();

    void on_pushButton2_sex_female_clicked();

    void on_pushButton3_sex_etc_clicked();

    void on_pushButton_4_cal_clicked();

    void on_pushButton_5_reset_clicked();

    void on_pushButton_6_set_clicked();

    void on_pushButton_7_reset_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
