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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8_name;
    QLabel *label_10_average;
    QLabel *label_9;
    QPushButton *pushButton_4_cal;
    QPushButton *pushButton_5_reset;
    QLineEdit *lineEdit_1_name;
    QLineEdit *lineEdit_2_korean;
    QLineEdit *lineEdit_3_english;
    QLineEdit *lineEdit_4_math;
    QLabel *label_8;
    QLabel *label_10;
    QCheckBox *checkBox_1_youtube;
    QCheckBox *checkBox_2_exercise;
    QCheckBox *checkBox_3_game;
    QPushButton *pushButton_6_set;
    QPushButton *pushButton_7_reset;
    QLineEdit *lineEdit_5_display;
    QRadioButton *radioButton_1_20;
    QRadioButton *radioButton_2_30;
    QRadioButton *radioButton_3_40;
    QLabel *label_11;
    QListWidget *listWidget_1_great_person;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QComboBox *comboBox_1_gu;
    QComboBox *comboBox_2_dong;
    QLineEdit *lineEdit_6_address;
    QLineEdit *lineEdit_6_great_person;
    QPushButton *pushButton_8_add_great_person;
    QPushButton *pushButton_9_remove_great_person;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(328, 628);
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
        label_3->setGeometry(QRect(10, 90, 61, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 90, 51, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 110, 51, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 130, 51, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 150, 61, 16));
        label_8_name = new QLabel(centralWidget);
        label_8_name->setObjectName(QStringLiteral("label_8_name"));
        label_8_name->setGeometry(QRect(70, 180, 61, 16));
        label_10_average = new QLabel(centralWidget);
        label_10_average->setObjectName(QStringLiteral("label_10_average"));
        label_10_average->setGeometry(QRect(230, 180, 71, 16));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(120, 180, 111, 16));
        pushButton_4_cal = new QPushButton(centralWidget);
        pushButton_4_cal->setObjectName(QStringLiteral("pushButton_4_cal"));
        pushButton_4_cal->setGeometry(QRect(10, 110, 51, 41));
        pushButton_5_reset = new QPushButton(centralWidget);
        pushButton_5_reset->setObjectName(QStringLiteral("pushButton_5_reset"));
        pushButton_5_reset->setGeometry(QRect(10, 150, 51, 41));
        lineEdit_1_name = new QLineEdit(centralWidget);
        lineEdit_1_name->setObjectName(QStringLiteral("lineEdit_1_name"));
        lineEdit_1_name->setGeometry(QRect(120, 90, 191, 20));
        lineEdit_2_korean = new QLineEdit(centralWidget);
        lineEdit_2_korean->setObjectName(QStringLiteral("lineEdit_2_korean"));
        lineEdit_2_korean->setGeometry(QRect(120, 110, 191, 20));
        lineEdit_3_english = new QLineEdit(centralWidget);
        lineEdit_3_english->setObjectName(QStringLiteral("lineEdit_3_english"));
        lineEdit_3_english->setGeometry(QRect(120, 130, 191, 20));
        lineEdit_4_math = new QLineEdit(centralWidget);
        lineEdit_4_math->setObjectName(QStringLiteral("lineEdit_4_math"));
        lineEdit_4_math->setGeometry(QRect(120, 150, 191, 20));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 210, 56, 12));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(70, 210, 56, 12));
        checkBox_1_youtube = new QCheckBox(centralWidget);
        checkBox_1_youtube->setObjectName(QStringLiteral("checkBox_1_youtube"));
        checkBox_1_youtube->setGeometry(QRect(70, 230, 61, 16));
        checkBox_1_youtube->setChecked(false);
        checkBox_2_exercise = new QCheckBox(centralWidget);
        checkBox_2_exercise->setObjectName(QStringLiteral("checkBox_2_exercise"));
        checkBox_2_exercise->setGeometry(QRect(70, 250, 61, 16));
        checkBox_3_game = new QCheckBox(centralWidget);
        checkBox_3_game->setObjectName(QStringLiteral("checkBox_3_game"));
        checkBox_3_game->setGeometry(QRect(70, 270, 61, 16));
        pushButton_6_set = new QPushButton(centralWidget);
        pushButton_6_set->setObjectName(QStringLiteral("pushButton_6_set"));
        pushButton_6_set->setGeometry(QRect(140, 220, 61, 31));
        pushButton_7_reset = new QPushButton(centralWidget);
        pushButton_7_reset->setObjectName(QStringLiteral("pushButton_7_reset"));
        pushButton_7_reset->setGeometry(QRect(140, 252, 61, 31));
        lineEdit_5_display = new QLineEdit(centralWidget);
        lineEdit_5_display->setObjectName(QStringLiteral("lineEdit_5_display"));
        lineEdit_5_display->setGeometry(QRect(210, 220, 101, 61));
        radioButton_1_20 = new QRadioButton(centralWidget);
        radioButton_1_20->setObjectName(QStringLiteral("radioButton_1_20"));
        radioButton_1_20->setGeometry(QRect(10, 230, 41, 16));
        radioButton_2_30 = new QRadioButton(centralWidget);
        radioButton_2_30->setObjectName(QStringLiteral("radioButton_2_30"));
        radioButton_2_30->setGeometry(QRect(10, 250, 41, 16));
        radioButton_3_40 = new QRadioButton(centralWidget);
        radioButton_3_40->setObjectName(QStringLiteral("radioButton_3_40"));
        radioButton_3_40->setGeometry(QRect(10, 270, 41, 16));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 290, 121, 16));
        listWidget_1_great_person = new QListWidget(centralWidget);
        new QListWidgetItem(listWidget_1_great_person);
        new QListWidgetItem(listWidget_1_great_person);
        new QListWidgetItem(listWidget_1_great_person);
        listWidget_1_great_person->setObjectName(QStringLiteral("listWidget_1_great_person"));
        listWidget_1_great_person->setGeometry(QRect(10, 310, 151, 151));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(170, 290, 61, 16));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(170, 320, 56, 12));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(170, 370, 56, 12));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(170, 420, 91, 16));
        comboBox_1_gu = new QComboBox(centralWidget);
        comboBox_1_gu->addItem(QString());
        comboBox_1_gu->addItem(QString());
        comboBox_1_gu->addItem(QString());
        comboBox_1_gu->setObjectName(QStringLiteral("comboBox_1_gu"));
        comboBox_1_gu->setGeometry(QRect(170, 340, 141, 22));
        comboBox_2_dong = new QComboBox(centralWidget);
        comboBox_2_dong->addItem(QString());
        comboBox_2_dong->addItem(QString());
        comboBox_2_dong->addItem(QString());
        comboBox_2_dong->addItem(QString());
        comboBox_2_dong->addItem(QString());
        comboBox_2_dong->setObjectName(QStringLiteral("comboBox_2_dong"));
        comboBox_2_dong->setGeometry(QRect(170, 390, 141, 22));
        lineEdit_6_address = new QLineEdit(centralWidget);
        lineEdit_6_address->setObjectName(QStringLiteral("lineEdit_6_address"));
        lineEdit_6_address->setGeometry(QRect(170, 440, 141, 51));
        lineEdit_6_great_person = new QLineEdit(centralWidget);
        lineEdit_6_great_person->setObjectName(QStringLiteral("lineEdit_6_great_person"));
        lineEdit_6_great_person->setGeometry(QRect(10, 470, 81, 20));
        pushButton_8_add_great_person = new QPushButton(centralWidget);
        pushButton_8_add_great_person->setObjectName(QStringLiteral("pushButton_8_add_great_person"));
        pushButton_8_add_great_person->setGeometry(QRect(100, 470, 31, 23));
        pushButton_9_remove_great_person = new QPushButton(centralWidget);
        pushButton_9_remove_great_person->setObjectName(QStringLiteral("pushButton_9_remove_great_person"));
        pushButton_9_remove_great_person->setGeometry(QRect(130, 470, 31, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 328, 21));
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
        label_2->setText(QApplication::translate("MainWindow", "\354\235\264\353\246\204", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\352\265\255\354\226\264\354\240\220\354\210\230", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\354\230\201\354\226\264\354\240\220\354\210\230", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\354\210\230\355\225\231\354\240\220\354\210\230", nullptr));
        label_8_name->setText(QApplication::translate("MainWindow", "\354\235\264\353\246\204", nullptr));
        label_10_average->setText(QApplication::translate("MainWindow", "\355\217\211\352\267\240\354\240\220\354\210\230", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\353\213\230\354\235\230 \355\217\211\352\267\240\354\240\220\354\210\230\353\212\224:", nullptr));
        pushButton_4_cal->setText(QApplication::translate("MainWindow", "\352\263\204\354\202\260", nullptr));
        pushButton_5_reset->setText(QApplication::translate("MainWindow", "\353\246\254\354\205\213", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\354\227\260\353\240\271\353\214\200", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\354\267\250\353\257\270", nullptr));
        checkBox_1_youtube->setText(QApplication::translate("MainWindow", "\354\234\240\355\212\234\353\270\214", nullptr));
        checkBox_2_exercise->setText(QApplication::translate("MainWindow", "\354\232\264\353\217\231", nullptr));
        checkBox_3_game->setText(QApplication::translate("MainWindow", "\352\262\214\354\236\204", nullptr));
        pushButton_6_set->setText(QApplication::translate("MainWindow", "\354\204\240\355\203\235\354\231\204\353\243\214", nullptr));
        pushButton_7_reset->setText(QApplication::translate("MainWindow", "\353\246\254\354\205\213", nullptr));
        radioButton_1_20->setText(QApplication::translate("MainWindow", "20\353\214\200", nullptr));
        radioButton_2_30->setText(QApplication::translate("MainWindow", "30\353\214\200", nullptr));
        radioButton_3_40->setText(QApplication::translate("MainWindow", "40\353\214\200", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\354\241\264\352\262\275\355\225\230\353\212\224 \354\234\204\354\235\270\353\246\254\354\212\244\355\212\270", nullptr));

        const bool __sortingEnabled = listWidget_1_great_person->isSortingEnabled();
        listWidget_1_great_person->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_1_great_person->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "\354\235\264\354\210\234\354\213\240", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_1_great_person->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "\354\204\270\354\242\205\353\214\200\354\231\225", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_1_great_person->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "\354\225\210\354\244\221\352\267\274", nullptr));
        listWidget_1_great_person->setSortingEnabled(__sortingEnabled);

        label_12->setText(QApplication::translate("MainWindow", "\354\243\274\354\206\214\354\247\200", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\352\265\254 \354\204\240\355\203\235:", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "\353\217\231 \354\204\240\355\203\235 :", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "\354\204\240\355\203\235\355\225\234 \354\243\274\354\206\214\354\247\200", nullptr));
        comboBox_1_gu->setItemText(0, QApplication::translate("MainWindow", "\353\266\201\352\265\254", nullptr));
        comboBox_1_gu->setItemText(1, QApplication::translate("MainWindow", "\354\204\234\352\265\254", nullptr));
        comboBox_1_gu->setItemText(2, QApplication::translate("MainWindow", "\352\264\221\354\202\260\352\265\254", nullptr));

        comboBox_2_dong->setItemText(0, QApplication::translate("MainWindow", "\354\232\251\353\264\211\353\217\231", nullptr));
        comboBox_2_dong->setItemText(1, QApplication::translate("MainWindow", "\353\247\244\352\263\241\353\217\231", nullptr));
        comboBox_2_dong->setItemText(2, QApplication::translate("MainWindow", "\354\271\230\355\217\211\353\217\231", nullptr));
        comboBox_2_dong->setItemText(3, QApplication::translate("MainWindow", "\354\213\240\352\260\200\353\217\231", nullptr));
        comboBox_2_dong->setItemText(4, QApplication::translate("MainWindow", "\354\213\240\354\260\275\353\217\231", nullptr));

        pushButton_8_add_great_person->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_9_remove_great_person->setText(QApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
