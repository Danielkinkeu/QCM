/********************************************************************************
** Form generated from reading UI file 'ajoutetudiant.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTETUDIANT_H
#define UI_AJOUTETUDIANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AjoutEtudiant
{
public:
    QPushButton *ajouter;
    QPushButton *exit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *name_edit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *pass_edit;

    void setupUi(QDialog *AjoutEtudiant)
    {
        if (AjoutEtudiant->objectName().isEmpty())
            AjoutEtudiant->setObjectName("AjoutEtudiant");
        AjoutEtudiant->resize(409, 303);
        ajouter = new QPushButton(AjoutEtudiant);
        ajouter->setObjectName("ajouter");
        ajouter->setGeometry(QRect(30, 220, 88, 27));
        QFont font;
        font.setBold(true);
        ajouter->setFont(font);
        exit = new QPushButton(AjoutEtudiant);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(290, 220, 88, 27));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        exit->setFont(font1);
        layoutWidget = new QWidget(AjoutEtudiant);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 200, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        name_edit = new QLineEdit(layoutWidget);
        name_edit->setObjectName("name_edit");

        horizontalLayout->addWidget(name_edit);

        widget = new QWidget(AjoutEtudiant);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 80, 200, 24));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        pass_edit = new QLineEdit(widget);
        pass_edit->setObjectName("pass_edit");

        horizontalLayout_2->addWidget(pass_edit);


        retranslateUi(AjoutEtudiant);

        QMetaObject::connectSlotsByName(AjoutEtudiant);
    } // setupUi

    void retranslateUi(QDialog *AjoutEtudiant)
    {
        AjoutEtudiant->setWindowTitle(QCoreApplication::translate("AjoutEtudiant", "Dialog", nullptr));
        ajouter->setText(QCoreApplication::translate("AjoutEtudiant", "ADD", nullptr));
        exit->setText(QCoreApplication::translate("AjoutEtudiant", "EXIT", nullptr));
        label->setText(QCoreApplication::translate("AjoutEtudiant", "name:", nullptr));
        label_2->setText(QCoreApplication::translate("AjoutEtudiant", "password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutEtudiant: public Ui_AjoutEtudiant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTETUDIANT_H
