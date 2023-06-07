/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_U;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_P;
    QPushButton *pushButton_log;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *clock;
    QLabel *digital_clock;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Date;
    QLabel *Date_ed;

    void setupUi(QDialog *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->resize(841, 537);
        groupBox = new QGroupBox(LoginPage);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(170, 100, 341, 181));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_U = new QLineEdit(groupBox);
        lineEdit_U->setObjectName("lineEdit_U");

        horizontalLayout->addWidget(lineEdit_U);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_P = new QLineEdit(groupBox);
        lineEdit_P->setObjectName("lineEdit_P");

        horizontalLayout_2->addWidget(lineEdit_P);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_log = new QPushButton(groupBox);
        pushButton_log->setObjectName("pushButton_log");

        verticalLayout->addWidget(pushButton_log);

        widget = new QWidget(LoginPage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(590, 20, 181, 19));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        clock = new QLabel(widget);
        clock->setObjectName("clock");
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        clock->setFont(font);

        horizontalLayout_3->addWidget(clock);

        digital_clock = new QLabel(widget);
        digital_clock->setObjectName("digital_clock");

        horizontalLayout_3->addWidget(digital_clock);

        widget1 = new QWidget(LoginPage);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(50, 20, 107, 19));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        Date = new QLabel(widget1);
        Date->setObjectName("Date");
        Date->setFont(font);

        horizontalLayout_4->addWidget(Date);

        Date_ed = new QLabel(widget1);
        Date_ed->setObjectName("Date_ed");

        horizontalLayout_4->addWidget(Date_ed);


        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QDialog *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LoginPage", "QCM assignement", nullptr));
        label->setText(QCoreApplication::translate("LoginPage", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("LoginPage", "Password", nullptr));
        pushButton_log->setText(QCoreApplication::translate("LoginPage", "Log In", nullptr));
        clock->setText(QCoreApplication::translate("LoginPage", "Clock", nullptr));
        digital_clock->setText(QCoreApplication::translate("LoginPage", "TextLabel", nullptr));
        Date->setText(QCoreApplication::translate("LoginPage", "DATE:", nullptr));
        Date_ed->setText(QCoreApplication::translate("LoginPage", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
