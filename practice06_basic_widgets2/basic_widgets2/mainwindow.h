#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

// 타이머용 헤더파일
#include <QTimer>                           // QTimer add
#include <QDateTime>                        // QDateTime add (현재시각 받아오는 용도)

// 파일 다이얼로그용 헤더파일
#include <QFileDialog>                      // QFileDialog add (파일다이얼로그)

// 그래픽뷰용 헤더파일
#include <QGraphicsScene>                   // QGraphicsScene add
#include <QPixmap>                          // QPixmap add
#include <QDir>                             // QDir add (경로관련)

// 딜레이를 사용하기 위한 헤더파일
#include <QThread>                          // QThread add

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

    void timer_update();                    // 타이머 구현 관련 함수 선언

    void on_pushButton_3_esc_clicked();
    void on_pushButton_1_select_image_clicked();
    void on_pushButton_2_apply_clicked();

    void count_progressbar(int number);     // 프로그래스 바 값 증가 함수 선언

private:
    Ui::MainWindow *ui;

    QTimer*timer;                           // 타이머 구현 관련 변수 선언

    QGraphicsScene*scene;                   // 그래픽씬 타입 변수 선언

};

#endif // MAINWINDOW_H
