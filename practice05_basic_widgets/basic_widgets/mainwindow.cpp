#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for(int i=0; i<5; i++){
       dong_list[i] = ui->comboBox_2_dong->itemText(i);         // 동 콤보박스에 저장된 초기값 아이템의 텍스트를 가져와 배열 초기화
    }
    ui->comboBox_2_dong->clear();                               // 구 콤보박스 아이템 초기화
    ui->comboBox_2_dong->addItem(dong_list[0]);                 // 초기 구에 맞춰 동 아이템추가(용봉동)
    ui->comboBox_2_dong->addItem(dong_list[1]);                 // 초기 구에 맞춰 동 아이템추가(매곡동)

    ui->horizontalSlider_weight->setMinimum(30);                // 체중 최소값 최대값 설정
    ui->horizontalSlider_weight->setMaximum(120);

    ui->verticalSlider_height->setMinimum(100);                 // 신장 최소값 최대값 설정
    ui->verticalSlider_height->setMaximum(210);

    ui->horizontalScrollBar_career->setMinimum(0);              // 경력 최소값 최대값 설정
    ui->horizontalScrollBar_career->setMaximum(20);

    ui->verticalScrollBar_salary->setMinimum(2400);             // 희망연봉 최소값 최대값 설정
    ui->verticalScrollBar_salary->setMaximum(10000);

    // 최소 최대값 뒤집기
    // ui->verticalScrollBar_salary->setInvertedAppearance(true);

    ui->dial_prefer_num->setMinimum(0);                         // 좋아하는 숫자 최소값 최대값 설정
    ui->dial_prefer_num->setMaximum(100);

    ui->lineEdit_8_weight->setReadOnly(true);                   // 라인에딧 읽기전용 속성 설정
    ui->lineEdit_10_height->setReadOnly(true);
    ui->lineEdit_9_career->setReadOnly(true);
    ui->lineEdit_11_salary->setReadOnly(true);
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

void MainWindow::on_pushButton_8_add_great_person_clicked()         // 리스트 아이템 추가 버튼
{
    if(ui->lineEdit_6_great_person->text() != "")
        ui->listWidget_1_great_person->addItem(ui->lineEdit_6_great_person->text());
    ui->lineEdit_6_great_person->setText("");                       // 입력란 초기화
}

void MainWindow::on_pushButton_9_remove_great_person_clicked()      // 리스트 아이템 제거 버튼
{
    QListWidgetItem*item = ui->listWidget_1_great_person->currentItem(); // 리스트에서 선택된 아이템 가져오기

    delete item;
}


void MainWindow::on_listWidget_1_great_person_itemClicked(QListWidgetItem *item)
{
    ui->lineEdit_6_great_person->setText(item->text());
}


void MainWindow::on_comboBox_1_gu_currentIndexChanged(int index)    // 구 슬롯 박스가 변경되었을 때 발생 슬롯
{
    ui->comboBox_2_dong->clear();

    switch(index){
    case 0:                                                         // 구 콤보박스가 북구일때
        ui->comboBox_2_dong->addItem(dong_list[0]);                 // 용봉동 추가
        ui->comboBox_2_dong->addItem(dong_list[1]);                 // 매곡동 추가
        break;

    case 1:                                                         // 구 콤보박스가 서구일때
        ui->comboBox_2_dong->addItem(dong_list[2]);                 // 치평동 추가
        break;

    case 2:                                                         // 구 콤보박스가 광산구일때
        ui->comboBox_2_dong->addItem(dong_list[3]);                 // 신가동 추가
        ui->comboBox_2_dong->addItem(dong_list[4]);                 // 신창동 추가
        break;
    }
}

void MainWindow::on_comboBox_2_dong_currentIndexChanged(int index)  // 동 슬롯 박스가 변경되었을 때 발생 슬롯
{
    QString gu, dong;
    gu   = ui->comboBox_1_gu->currentText();
    dong = ui->comboBox_2_dong->currentText();
    ui->lineEdit_7_address->setText(gu + " " + dong);
}

void MainWindow::on_horizontalSlider_weight_valueChanged(int value) // 가로 체중 슬라이더 값 변경시 발생 슬롯
{
    ui->lineEdit_8_weight->setText(QString::number(value));
}

void MainWindow::on_verticalSlider_height_valueChanged(int value)   // 세로 신장 슬라이더 값 변경시 발생 슬롯
{
    ui->lineEdit_10_height->setText(QString::number(value));
}

void MainWindow::on_horizontalScrollBar_career_valueChanged(int value)  // 가로 경력 스크롤 값 변경시 발생 슬롯
{
    ui->lineEdit_9_career->setText(QString::number(value));
}

void MainWindow::on_verticalScrollBar_salary_valueChanged(int value)    // 세로 희망 연봉 스크롤 값 변경시 발생 슬롯
{
    ui->lineEdit_11_salary->setText(QString::number(value));
}

void MainWindow::on_dial_prefer_num_valueChanged(int value)             // 다이얼 선호 숫자 값 변경시 발생 슬롯
{
    ui->label_19_prefer_num->setText(QString::number(value));
}

void MainWindow::on_pushButton_10_esc_clicked()                         // 종료 버튼 클릭시 인스턴스 종료
{
    this->close();
}

