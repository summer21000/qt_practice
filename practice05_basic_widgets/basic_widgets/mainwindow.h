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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
