#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>               // QTimer add
#include <QDateTime>            // QDateTime add (현재시각 받아오는 용도)


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
    void on_pushButton_3_esc_clicked();

private:
    Ui::MainWindow *ui;

    QTimer*timer;               // 타이머 관련 변수 선언

//private slots:
//    void timer_update();        // 타이머 관련 함수 선언
};

#endif // MAINWINDOW_H
