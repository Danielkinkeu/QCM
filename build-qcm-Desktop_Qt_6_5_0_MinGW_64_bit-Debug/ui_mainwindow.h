/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *valider;
    QLabel *question;
    QCheckBox *choix1;
    QCheckBox *choix2;
    QCheckBox *choix3;
    QCheckBox *choix4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *clock;
    QLabel *digital_clock;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_id;
    QCheckBox *choix5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(988, 439);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        valider = new QPushButton(centralWidget);
        valider->setObjectName("valider");
        valider->setGeometry(QRect(40, 350, 861, 41));
        question = new QLabel(centralWidget);
        question->setObjectName("question");
        question->setGeometry(QRect(40, 60, 911, 31));
        choix1 = new QCheckBox(centralWidget);
        choix1->setObjectName("choix1");
        choix1->setGeometry(QRect(50, 110, 921, 41));
        choix2 = new QCheckBox(centralWidget);
        choix2->setObjectName("choix2");
        choix2->setGeometry(QRect(50, 150, 921, 41));
        choix3 = new QCheckBox(centralWidget);
        choix3->setObjectName("choix3");
        choix3->setGeometry(QRect(50, 200, 921, 41));
        choix4 = new QCheckBox(centralWidget);
        choix4->setObjectName("choix4");
        choix4->setGeometry(QRect(50, 250, 921, 41));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(770, 10, 181, 19));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        clock = new QLabel(layoutWidget);
        clock->setObjectName("clock");
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        clock->setFont(font);

        horizontalLayout->addWidget(clock);

        digital_clock = new QLabel(layoutWidget);
        digital_clock->setObjectName("digital_clock");

        horizontalLayout->addWidget(digital_clock);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 10, 189, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        lineEdit_id = new QLineEdit(layoutWidget1);
        lineEdit_id->setObjectName("lineEdit_id");

        horizontalLayout_3->addWidget(lineEdit_id);

        choix5 = new QCheckBox(centralWidget);
        choix5->setObjectName("choix5");
        choix5->setGeometry(QRect(50, 300, 891, 31));
        MainWindow->setCentralWidget(centralWidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 988, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QCM", nullptr));
        valider->setText(QCoreApplication::translate("MainWindow", "valider", nullptr));
        question->setText(QCoreApplication::translate("MainWindow", "Question", nullptr));
        choix1->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        choix2->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        choix3->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        choix4->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        clock->setText(QCoreApplication::translate("MainWindow", "Clock", nullptr));
        digital_clock->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "enter id", nullptr));
        choix5->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
