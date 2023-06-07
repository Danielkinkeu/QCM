/********************************************************************************
** Form generated from reading UI file 'users.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERS_H
#define UI_USERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Users
{
public:
    QLabel *label;
    QPushButton *yes_btn;
    QPushButton *no_btn;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_nbr_student;
    QLineEdit *lineEdit_user;

    void setupUi(QDialog *Users)
    {
        if (Users->objectName().isEmpty())
            Users->setObjectName("Users");
        Users->resize(495, 294);
        label = new QLabel(Users);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 451, 71));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label->setFont(font);
        yes_btn = new QPushButton(Users);
        yes_btn->setObjectName("yes_btn");
        yes_btn->setGeometry(QRect(40, 180, 88, 27));
        no_btn = new QPushButton(Users);
        no_btn->setObjectName("no_btn");
        no_btn->setGeometry(QRect(300, 180, 88, 27));
        widget = new QWidget(Users);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(140, 120, 136, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_nbr_student = new QLabel(widget);
        label_nbr_student->setObjectName("label_nbr_student");

        horizontalLayout->addWidget(label_nbr_student);

        lineEdit_user = new QLineEdit(widget);
        lineEdit_user->setObjectName("lineEdit_user");

        horizontalLayout->addWidget(lineEdit_user);


        retranslateUi(Users);

        QMetaObject::connectSlotsByName(Users);
    } // setupUi

    void retranslateUi(QDialog *Users)
    {
        Users->setWindowTitle(QCoreApplication::translate("Users", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Users", "IS there another student who want to take  the TEST?", nullptr));
        yes_btn->setText(QCoreApplication::translate("Users", "YES", nullptr));
        no_btn->setText(QCoreApplication::translate("Users", "NO", nullptr));
        label_nbr_student->setText(QCoreApplication::translate("Users", "enter id", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Users: public Ui_Users {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERS_H
