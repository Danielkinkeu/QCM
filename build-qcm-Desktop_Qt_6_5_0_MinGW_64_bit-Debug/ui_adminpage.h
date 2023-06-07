/********************************************************************************
** Form generated from reading UI file 'adminpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPAGE_H
#define UI_ADMINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminPage
{
public:
    QPushButton *make_test;
    QPushButton *add_etudiant;
    QPushButton *exit;
    QPushButton *add_enseignant;
    QPushButton *add_matiere;

    void setupUi(QDialog *AdminPage)
    {
        if (AdminPage->objectName().isEmpty())
            AdminPage->setObjectName("AdminPage");
        AdminPage->resize(740, 366);
        QFont font;
        font.setFamilies({QString::fromUtf8("Cambria Math")});
        font.setItalic(false);
        AdminPage->setFont(font);
        make_test = new QPushButton(AdminPage);
        make_test->setObjectName("make_test");
        make_test->setGeometry(QRect(170, 30, 131, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cambria Math")});
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setItalic(false);
        make_test->setFont(font1);
        add_etudiant = new QPushButton(AdminPage);
        add_etudiant->setObjectName("add_etudiant");
        add_etudiant->setGeometry(QRect(110, 90, 131, 31));
        add_etudiant->setFont(font1);
        exit = new QPushButton(AdminPage);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(450, 90, 88, 27));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cambria Math")});
        font2.setBold(true);
        font2.setItalic(false);
        exit->setFont(font2);
        add_enseignant = new QPushButton(AdminPage);
        add_enseignant->setObjectName("add_enseignant");
        add_enseignant->setGeometry(QRect(170, 150, 131, 31));
        add_enseignant->setFont(font1);
        add_matiere = new QPushButton(AdminPage);
        add_matiere->setObjectName("add_matiere");
        add_matiere->setGeometry(QRect(110, 210, 131, 31));
        add_matiere->setFont(font1);

        retranslateUi(AdminPage);

        QMetaObject::connectSlotsByName(AdminPage);
    } // setupUi

    void retranslateUi(QDialog *AdminPage)
    {
        AdminPage->setWindowTitle(QCoreApplication::translate("AdminPage", "Dialog", nullptr));
        make_test->setText(QCoreApplication::translate("AdminPage", "concevoir QCM", nullptr));
        add_etudiant->setText(QCoreApplication::translate("AdminPage", "Ajouter etudiants", nullptr));
        exit->setText(QCoreApplication::translate("AdminPage", "Exit", nullptr));
        add_enseignant->setText(QCoreApplication::translate("AdminPage", "Ajouter ensegnants", nullptr));
        add_matiere->setText(QCoreApplication::translate("AdminPage", "Ajouter Matiere", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminPage: public Ui_AdminPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H
