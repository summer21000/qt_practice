#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QDataStream>
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);

    setWindowTitle("QDataSteam을 이용한 파일 입출력");

    connect(ui->pbtSave, SIGNAL(pressed()),
            this, SLOT(slotPbtFileSave()));
    connect(ui->pbtFileRead, SIGNAL(pressed()),
            this, SLOT(slotPbtFileRead()));

    mFile = new QFile();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::slotPbtFileSave()
{
    QString fileName;
    fileName = QString("d:/price.data");

    mFile->setFileName(fileName);
    if(!mFile->open(QIODevice::WriteOnly | QIODevice::Truncate))
    {
        qDebug() << "File open fail.";
        return;
    }
    else
    {
        qint32 keyboardPrice = ui->leKeyboard->text().toInt();
        qint32 monitoryPrice = ui->leMonitor->text().toInt();

        QDataStream out(mFile);
        out << keyboardPrice;
        out << monitoryPrice;

        mFile->close();
    }
}

void Widget::slotPbtFileRead()
{
    if(!mFile->open(QIODevice::ReadOnly))
    {
        qDebug() << "File open fail.";
        return;
    }
    else
    {
        qint32 keyboardPrice;
        qint32 monitoryPrice;

        QDataStream in(mFile);
        in >> keyboardPrice;
        in >> monitoryPrice;

        mFile->close();

        QString str1 = QString("키보드가격 : %L1").arg(keyboardPrice);
        QString str2 = QString("모니터가격 : %L1").arg(monitoryPrice);

        ui->textEdit->clear();
        ui->textEdit->append(str1);
        ui->textEdit->append(str2);
    }
}



