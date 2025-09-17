#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>                                       // QDebug add

// 파일탐색기 창을 사용하기 위해 삽입
#include <QFileDialog>
#include <QDesktopServices>

// 파일 쓰기/읽기용 삽입
#include <QFile>
#include <QTextStream>

// 메시지 알림창을 사용하기 위해 삽입
#include <QMessageBox>

// 현재시각을 받아오기 위해 삽입
#include <QDateTime>

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
    void on_pushButton_1_pointAddress_clicked();
    void on_pushButton_2_openAddress_clicked();
    void on_pushButton_3saveSetting_clicked();
    void on_pushButton_4_openfile_clicked();
    void on_pushButton_5_apply_clicked();

    // 스트링 타입변수로 반환하는 슬롯 선언
    QString return_setup();

private:
    Ui::MainWindow *ui;
    QString global_file_contents;
};

#endif // MAINWINDOW_H
