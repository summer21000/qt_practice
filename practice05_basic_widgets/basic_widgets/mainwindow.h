#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>          // #include <QListWidget> add

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

    void on_listWidget_1_great_person_itemClicked(QListWidgetItem *item);

    void on_pushButton_8_add_great_person_clicked();

    void on_pushButton_9_remove_great_person_clicked();

    void on_comboBox_1_gu_currentIndexChanged(int index);

    void on_comboBox_2_dong_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;


    QString dong_list[5];        // 동 초기값들을 저장해서 사용, 본문 소스 상단에서 텍스트 값을 가져옴
};

#endif // MAINWINDOW_H
