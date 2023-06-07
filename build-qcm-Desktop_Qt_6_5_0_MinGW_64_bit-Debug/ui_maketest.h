/********************************************************************************
** Form generated from reading UI file 'maketest.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKETEST_H
#define UI_MAKETEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MakeTest
{
public:
    QPushButton *pushButton_add;
    QPushButton *pushButton_exit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_q;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QWidget *widget;
    QLabel *label_2;
    QLineEdit *lineEdit_r1;
    QLineEdit *lineEdit_r2;
    QLineEdit *lineEdit_r3;
    QLineEdit *lineEdit_r4;
    QLineEdit *lineEdit_r5;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Date;
    QLabel *Date_ed;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *clock;
    QLabel *digital_clock;
    QLabel *label_5;
    QLineEdit *title;

    void setupUi(QDialog *MakeTest)
    {
        if (MakeTest->objectName().isEmpty())
            MakeTest->setObjectName("MakeTest");
        MakeTest->resize(1153, 672);
        pushButton_add = new QPushButton(MakeTest);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(40, 180, 181, 41));
        QFont font;
        font.setPointSize(14);
        pushButton_add->setFont(font);
        pushButton_exit = new QPushButton(MakeTest);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setGeometry(QRect(890, 550, 181, 41));
        pushButton_exit->setFont(font);
        layoutWidget = new QWidget(MakeTest);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 80, 501, 47));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEdit_q = new QLineEdit(layoutWidget);
        lineEdit_q->setObjectName("lineEdit_q");

        verticalLayout->addWidget(lineEdit_q);

        layoutWidget1 = new QWidget(MakeTest);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 320, 1045, 78));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setPointSize(20);
        label_3->setFont(font1);

        verticalLayout_4->addWidget(label_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");
        QFont font2;
        font2.setPointSize(16);
        label_4->setFont(font2);

        verticalLayout_3->addWidget(label_4);


        verticalLayout_4->addLayout(verticalLayout_3);

        widget = new QWidget(MakeTest);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(540, 70, 611, 251));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 569, 16));
        lineEdit_r1 = new QLineEdit(widget);
        lineEdit_r1->setObjectName("lineEdit_r1");
        lineEdit_r1->setGeometry(QRect(20, 30, 569, 22));
        lineEdit_r2 = new QLineEdit(widget);
        lineEdit_r2->setObjectName("lineEdit_r2");
        lineEdit_r2->setGeometry(QRect(20, 80, 569, 22));
        lineEdit_r3 = new QLineEdit(widget);
        lineEdit_r3->setObjectName("lineEdit_r3");
        lineEdit_r3->setGeometry(QRect(20, 120, 569, 22));
        lineEdit_r4 = new QLineEdit(widget);
        lineEdit_r4->setObjectName("lineEdit_r4");
        lineEdit_r4->setGeometry(QRect(20, 160, 569, 22));
        lineEdit_r5 = new QLineEdit(widget);
        lineEdit_r5->setObjectName("lineEdit_r5");
        lineEdit_r5->setGeometry(QRect(20, 200, 569, 22));
        layoutWidget_2 = new QWidget(MakeTest);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(30, 10, 107, 19));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        Date = new QLabel(layoutWidget_2);
        Date->setObjectName("Date");
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        Date->setFont(font3);

        horizontalLayout_4->addWidget(Date);

        Date_ed = new QLabel(layoutWidget_2);
        Date_ed->setObjectName("Date_ed");

        horizontalLayout_4->addWidget(Date_ed);

        layoutWidget2 = new QWidget(MakeTest);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(920, 10, 181, 19));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        clock = new QLabel(layoutWidget2);
        clock->setObjectName("clock");
        clock->setFont(font3);

        horizontalLayout->addWidget(clock);

        digital_clock = new QLabel(layoutWidget2);
        digital_clock->setObjectName("digital_clock");

        horizontalLayout->addWidget(digital_clock);

        label_5 = new QLabel(MakeTest);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 440, 811, 51));
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(true);
        label_5->setFont(font4);
        title = new QLineEdit(MakeTest);
        title->setObjectName("title");
        title->setGeometry(QRect(310, 10, 113, 22));

        retranslateUi(MakeTest);

        QMetaObject::connectSlotsByName(MakeTest);
    } // setupUi

    void retranslateUi(QDialog *MakeTest)
    {
        MakeTest->setWindowTitle(QCoreApplication::translate("MakeTest", "Dialog", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MakeTest", "Add question", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("MakeTest", "Exit", nullptr));
        label->setText(QCoreApplication::translate("MakeTest", "Question:", nullptr));
        label_3->setText(QCoreApplication::translate("MakeTest", "ATTENTION: VEUILLEZ AJOUTER \"-> \" AVANT LES REPONSES CORRECTES.", nullptr));
        label_4->setText(QCoreApplication::translate("MakeTest", "Exemple: \"-> Encapsulation\"", nullptr));
        label_2->setText(QCoreApplication::translate("MakeTest", "Reponses:", nullptr));
        Date->setText(QCoreApplication::translate("MakeTest", "DATE:", nullptr));
        Date_ed->setText(QCoreApplication::translate("MakeTest", "TextLabel", nullptr));
        clock->setText(QCoreApplication::translate("MakeTest", "Clock", nullptr));
        digital_clock->setText(QCoreApplication::translate("MakeTest", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("MakeTest", "Notons biens que 2 \303\240 5 r\303\251ponses peuvent \303\252tre ajouter.", nullptr));
        title->setPlaceholderText(QCoreApplication::translate("MakeTest", "Nom de la matiere", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MakeTest: public Ui_MakeTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKETEST_H
