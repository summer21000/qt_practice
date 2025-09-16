/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3_Time;
    QLabel *label_4;
    QLineEdit *lineEdit_fileAdress;
    QPushButton *pushButton_1_select_image;
    QPushButton *pushButton_2_apply;
    QLabel *label_5;
    QProgressBar *progressBar;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_3_esc;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 588);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 56, 12));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 51, 16));
        label_3_Time = new QLabel(centralWidget);
        label_3_Time->setObjectName(QStringLiteral("label_3_Time"));
        label_3_Time->setGeometry(QRect(70, 30, 251, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 60, 181, 16));
        lineEdit_fileAdress = new QLineEdit(centralWidget);
        lineEdit_fileAdress->setObjectName(QStringLiteral("lineEdit_fileAdress"));
        lineEdit_fileAdress->setGeometry(QRect(20, 80, 221, 20));
        pushButton_1_select_image = new QPushButton(centralWidget);
        pushButton_1_select_image->setObjectName(QStringLiteral("pushButton_1_select_image"));
        pushButton_1_select_image->setGeometry(QRect(250, 80, 75, 23));
        pushButton_2_apply = new QPushButton(centralWidget);
        pushButton_2_apply->setObjectName(QStringLiteral("pushButton_2_apply"));
        pushButton_2_apply->setGeometry(QRect(330, 80, 51, 23));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 110, 91, 16));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(20, 130, 361, 23));
        progressBar->setValue(24);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(20, 170, 361, 311));
        pushButton_3_esc = new QPushButton(centralWidget);
        pushButton_3_esc->setObjectName(QStringLiteral("pushButton_3_esc"));
        pushButton_3_esc->setGeometry(QRect(30, 500, 341, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "QTimer", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\355\230\204\354\236\254\354\213\234\352\260\201:", nullptr));
        label_3_Time->setText(QApplication::translate("MainWindow", "\355\203\200\354\236\204", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "QFileDialog and QGraphicsview", nullptr));
        pushButton_1_select_image->setText(QApplication::translate("MainWindow", "\354\235\264\353\257\270\354\247\200\354\204\240\355\203\235", nullptr));
        pushButton_2_apply->setText(QApplication::translate("MainWindow", "\354\240\201\354\232\251", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "QProgressBar", nullptr));
        pushButton_3_esc->setText(QApplication::translate("MainWindow", "\354\242\205\353\243\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
