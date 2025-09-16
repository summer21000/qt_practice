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


void MainWindow::on_pushButton1_sex_male_clicked()                  // 남자 선택 버튼
{
    ui->pushButton1_sex_male  ->setEnabled(false);                  // 남자 버튼 비활성화
    ui->pushButton2_sex_female->setEnabled(true);                   // 여자 버튼 활성화
    ui->pushButton3_sex_etc   ->setEnabled(true);                   // 기타 버튼 활성화
    ui->label_2_sex->setText(ui->pushButton1_sex_male->text());     // 성별 남자 출력
}

void MainWindow::on_pushButton2_sex_female_clicked()                // 여자 선택 버튼
{
    ui->pushButton1_sex_male->setEnabled(true);                     // 남자 버튼 활성화
    ui->pushButton2_sex_female->setEnabled(false);                  // 여자 버튼 비활성화
    ui->pushButton3_sex_etc->setEnabled(true);                      // 기타 버튼 활성화
    ui->label_2_sex->setText(ui->pushButton2_sex_female->text());   // 성별 여자 출력
}

void MainWindow::on_pushButton3_sex_etc_clicked()                   // 기타 선택 버튼
{
    ui->pushButton1_sex_male->setEnabled(true);                     // 남자 버튼 활성화
    ui->pushButton2_sex_female->setEnabled(true);                   // 여자 버튼 활성화
    ui->pushButton3_sex_etc->setEnabled(false);                     // 기타 버튼 비활성화
    ui->label_2_sex->setText(ui->pushButton3_sex_etc->text());      // 성별 기타 출력
}

void MainWindow::on_pushButton_4_cal_clicked()                      // 성적 평균 계산버튼
{
    int korean, english, math, average;
    korean  = ui->lineEdit_2_korean->text().toInt();                // 국어점수 가져오기
    english = ui->lineEdit_3_english->text().toInt();               // 영어점수 가져오기
    math    = ui->lineEdit_4_math->text().toInt();                  // 수학점수 가져오기
    average = (korean + english + math) / 3;                        // 평균값 산출

    ui->label_8_name->setText(ui->lineEdit_1_name->text());         // 이름 표시
    ui->label_10_average->setText(QString::number(average));        // 평균값 표시
}

void MainWindow::on_pushButton_5_reset_clicked()                    // 초기화 버튼
{
    ui->lineEdit_1_name->setText("");                               // 이름 입력란 초기화
    ui->lineEdit_2_korean->setText("");                             // 국어 입력란 초기화
    ui->lineEdit_3_english->setText("");                            // 영어 입력란 초기화
    ui->lineEdit_4_math->setText("");                               // 수학 입력란 초기화

    ui->label_8_name->setText("");                                  // 이름 결과값 초기화
    ui->label_10_average->setText("");                              // 평균점수 결과값 초기화
}

void MainWindow::on_pushButton_6_set_clicked()                      // 선택완료 버튼
{
    QString age = "", hobby = "";

    if(ui->radioButton_1_20->isChecked()){                          // 라디오 체크 여부에 따라 나이대 설정
        age = ui->radioButton_1_20->text();
    } else if(ui->radioButton_2_30->isChecked()){
        age = ui->radioButton_2_30->text();
    } else if(ui->radioButton_3_40->isChecked()){
        age = ui->radioButton_3_40->text();
    } else {
        age = QString("그외");
    }

    if(ui->checkBox_1_youtube->isChecked()){                         // 각 체크박스 확인 후 취미 문자열에 추가
        hobby = hobby + ui->checkBox_1_youtube->text();
        if(ui->checkBox_2_exercise->isChecked())
            hobby = hobby + ", \n" + ui->checkBox_2_exercise->text();
        if(ui->checkBox_3_game->isChecked())
            hobby = hobby + ", " + ui->checkBox_3_game->text();
    } else if(ui->checkBox_2_exercise->isChecked()){
        hobby = hobby + ui->checkBox_2_exercise->text();
        if(ui->checkBox_3_game->isChecked())
            hobby = hobby + ", \n" + ui->checkBox_3_game->text();
    } else if(ui->checkBox_3_game->isChecked()){
        hobby = hobby + ui->checkBox_3_game->text();
    } else {
        hobby = "";
    }

    ui->lineEdit_5_display->setText(age + ", " +hobby);              // 나이대, 취미 표시
}

void MainWindow::on_pushButton_7_reset_clicked()                    // 리셋 버튼
{
    ui->radioButton_1_20->setAutoExclusive(false);                  // 동일 부모를 가진 세 나이대 라디오 버튼의 원버튼유지속성 해제
    ui->radioButton_2_30->setAutoExclusive(false);
    ui->radioButton_3_40->setAutoExclusive(false);

    ui->radioButton_1_20->setChecked(false);                        // 각 나이대 라디오버튼 체크 해제
    ui->radioButton_2_30->setChecked(false);
    ui->radioButton_3_40->setChecked(false);

    ui->radioButton_1_20->setAutoExclusive(true);                   // 각 나이대 라디오버튼 원버튼유지속성 부여
    ui->radioButton_2_30->setAutoExclusive(true);
    ui->radioButton_3_40->setAutoExclusive(true);

    ui->checkBox_1_youtube->setChecked(false);                      // 각 취미 체크박스 해제
    ui->checkBox_2_exercise->setChecked(false);
    ui->checkBox_3_game->setChecked(false);

    ui->lineEdit_5_display->setText("");                            // 나이대, 취미 표시창 초기화
}
