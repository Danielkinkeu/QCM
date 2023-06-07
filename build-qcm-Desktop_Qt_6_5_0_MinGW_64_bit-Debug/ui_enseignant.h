/********************************************************************************
** Form generated from reading UI file 'enseignant.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENSEIGNANT_H
#define UI_ENSEIGNANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Enseignant
{
public:
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *name_edit_2;
    QPushButton *exit_2;
    QPushButton *ajouter_2;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *pass_edit_2;

    void setupUi(QDialog *Enseignant)
    {
        if (Enseignant->objectName().isEmpty())
            Enseignant->setObjectName("Enseignant");
        Enseignant->resize(497, 357);
        layoutWidget_3 = new QWidget(Enseignant);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(30, 20, 200, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_3);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        name_edit_2 = new QLineEdit(layoutWidget_3);
        name_edit_2->setObjectName("name_edit_2");

        horizontalLayout_3->addWidget(name_edit_2);

        exit_2 = new QPushButton(Enseignant);
        exit_2->setObjectName("exit_2");
        exit_2->setGeometry(QRect(300, 220, 88, 27));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        exit_2->setFont(font);
        ajouter_2 = new QPushButton(Enseignant);
        ajouter_2->setObjectName("ajouter_2");
        ajouter_2->setGeometry(QRect(40, 220, 88, 27));
        QFont font1;
        font1.setBold(true);
        ajouter_2->setFont(font1);
        layoutWidget_4 = new QWidget(Enseignant);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(30, 80, 200, 24));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_4);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        pass_edit_2 = new QLineEdit(layoutWidget_4);
        pass_edit_2->setObjectName("pass_edit_2");

        horizontalLayout_4->addWidget(pass_edit_2);


        retranslateUi(Enseignant);

        QMetaObject::connectSlotsByName(Enseignant);
    } // setupUi

    void retranslateUi(QDialog *Enseignant)
    {
        Enseignant->setWindowTitle(QCoreApplication::translate("Enseignant", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Enseignant", "name:", nullptr));
        exit_2->setText(QCoreApplication::translate("Enseignant", "EXIT", nullptr));
        ajouter_2->setText(QCoreApplication::translate("Enseignant", "ADD", nullptr));
        label_4->setText(QCoreApplication::translate("Enseignant", "password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Enseignant: public Ui_Enseignant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENSEIGNANT_H
