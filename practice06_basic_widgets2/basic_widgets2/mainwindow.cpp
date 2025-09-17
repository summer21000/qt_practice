#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);                                           // 타이머 생성(프로그램 시작 시 타이머 동작 되도록 설정)
    connect(timer, SIGNAL(timeout()), this, SLOT(timer_update()));      // 타이머가 타임아웃 시그널을 보내면 timer_update() 슬롯 호출
    timer->start(1000);                                                 // 밀리세컨드 단의, 타임아웃을 몇 ms로 할지 설정(1000ms)
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timer_update(){                                        // 타이머 타임아웃마다 호출되는 슬롯
    QDateTime local(QDateTime::currentDateTime());                      // 현재시각 받아 local변수에 넣기
    ui->label_3_Time->setText(local.toString());
}

void MainWindow::count_progressbar(int number){                         // 프로그래스가 너무 빨라 프로그래스바 시각화를 위해 일부러 딜레이시킴(실제 코드에서는 사용하지 말것!)
    ui->label_5_progressbar->setText("Now Loading...");                 // 프로그래스 진행 메세지

    // 프로그래스바 카운팅 관련 변수 선언 및 초기값 설정
    int start=0, max=0;

    switch(number){
    case 1:
        start = 0; max = 21; break;
    case 2:
        start = 20; max = 41; break;
    case 3:
        start = 40; max = 61; break;
    case 4:
        start = 60; max = 81; break;
    case 5:
        start = 80; max = 101; break;
    default:
        break;
    }

    // 프로그래스바 값 증가
    // 일부러 불필요한 딜레이를 넣어서 프로그래스 바 값 증가하는것 을 예제로 볼 수 있게 함(안하면 너무 빠름)
    for(int i=start; i<max; ++i){
        ui->progressBar->setValue(i);
        QThread::msleep(10);
    }

    // 프로그래스바 값 100일때, 완료 메시지 표시
    if(ui->progressBar->value()>99)
        ui->label_5_progressbar->setText("completed");

}


void MainWindow::on_pushButton_1_select_image_clicked()                 // 이미지선택 버튼 클리시 호출 슬롯
{
    QString str_caption = ui->pushButton_1_select_image->text();        // 파일 탐색기창 제목
    QString str_dir = "";                                               // 처음 탐색할 경로 설정
    // 탐색기에서 보여줄 파일타입 필터 설정
    // 이미지만 보기, 모든파일보기, 두가지타입 필터 설정
    QString str_filters = "Images (*.png *.jpg *.jpeg *.bmp);; All Files (*.*)";

    // 파일명 가져오기
    QString file = QFileDialog::getOpenFileName(this,
                                                str_caption,
                                                str_dir,
                                                str_filters);

    ui->lineEdit_fileName->setText(file);                               // 파일명 화면에 보여주기

}

void MainWindow::on_pushButton_2_apply_clicked()                        // 적용 버튼 클릭시 호출 슬롯
{
    scene = new QGraphicsScene(this);                                   // 새로운 scene객체 생성

    // 빈 화면 보여주기(이전에 있던 뷰 지우기)
    ui->graphicsView->setScene(scene);
    ui->graphicsView->show();
    count_progressbar(1);                                               // 첫번째 딜레이 호출(1~20%)

    // 화면에 출력되고 있는파일 경로 가져와 dir변수에 넣기
    QDir dir_file(ui->lineEdit_fileName->text());

    // pixmap객체를 생성하고, 생성시 소스로 파일경로 넣기
    QPixmap pixmap(dir_file.path());
    QPixmap new_pixmap;                                                 // 새로운 pixmap객체 생성

    count_progressbar(2);                                               // 새로운 딜레이 호출(21~40%)
    // 그래픽뷰의 너비와 높이값 가져와서 변수로 저장
    int width  = ui->graphicsView->width()-3;
    int height = ui->graphicsView->height()-3;

    count_progressbar(3);                                               // 세번째 딜레이 호촐(41~60%)
    // 기존 pixmap 소스를 활용하여, 이미지크기를 변환 후 새로운 pixmap에 넣기
    new_pixmap = pixmap.scaled(width, height, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    scene->addPixmap(new_pixmap);                                       // scene 객체에 픽스맵 데이터 추가하기

    count_progressbar(4);                                               // 네번째 딜레이 호출(61~80%)
    // 그래픽뷰 배경색 속성 설정
    ui->graphicsView->setBackgroundRole(QPalette::Dark);
    // 그래픽뷰 가운데정렬 속성 설정(수직/수평)
    ui->graphicsView->setAlignment(Qt::AlignCenter);

    // 그래픽뷰 수평/수직 스크롤바 속성 정책 변경(항상 끔)
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // 그래픽뷰에 scene객체 설정하기
    ui->graphicsView->setScene(scene);

    count_progressbar(5);                                               // 다섯번째 딜레이 호출(81~100%)
    // 속성들을 설정한 그래픽뷰 화면에 보여주기
    ui->graphicsView->show();
}

void MainWindow::on_pushButton_3_esc_clicked()
{
    this->close();
}
