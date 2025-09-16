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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
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
    QPushButton *pushButton1_sex_male;
    QPushButton *pushButton2_sex_female;
    QPushButton *pushButton3_sex_etc;
    QLabel *label_4;
    QLabel *label_2_sex;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(466, 512);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 56, 12));
        pushButton1_sex_male = new QPushButton(centralWidget);
        pushButton1_sex_male->setObjectName(QStringLiteral("pushButton1_sex_male"));
        pushButton1_sex_male->setGeometry(QRect(10, 30, 75, 23));
        pushButton2_sex_female = new QPushButton(centralWidget);
        pushButton2_sex_female->setObjectName(QStringLiteral("pushButton2_sex_female"));
        pushButton2_sex_female->setGeometry(QRect(100, 30, 75, 23));
        pushButton3_sex_etc = new QPushButton(centralWidget);
        pushButton3_sex_etc->setObjectName(QStringLiteral("pushButton3_sex_etc"));
        pushButton3_sex_etc->setGeometry(QRect(190, 30, 75, 23));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 60, 56, 12));
        label_2_sex = new QLabel(centralWidget);
        label_2_sex->setObjectName(QStringLiteral("label_2_sex"));
        label_2_sex->setGeometry(QRect(70, 60, 56, 12));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 90, 56, 12));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 466, 21));
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
        label->setText(QApplication::translate("MainWindow", "\354\204\261\353\263\204\354\204\240\355\203\235", nullptr));
        pushButton1_sex_male->setText(QApplication::translate("MainWindow", "\353\202\250\354\236\220", nullptr));
        pushButton2_sex_female->setText(QApplication::translate("MainWindow", "\354\227\254\354\236\220", nullptr));
        pushButton3_sex_etc->setText(QApplication::translate("MainWindow", "\352\270\260\355\203\200", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\354\204\240\355\203\235 \354\204\261\353\263\204:l", nullptr));
        label_2_sex->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\354\240\225\353\263\264\354\236\205\353\240\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
