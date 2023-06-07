/********************************************************************************
** Form generated from reading UI file 'matiere.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATIERE_H
#define UI_MATIERE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Matiere
{
public:
    QLineEdit *title;
    QLineEdit *matiere;
    QPushButton *AjouterMatiere;

    void setupUi(QDialog *Matiere)
    {
        if (Matiere->objectName().isEmpty())
            Matiere->setObjectName("Matiere");
        Matiere->resize(747, 343);
        title = new QLineEdit(Matiere);
        title->setObjectName("title");
        title->setGeometry(QRect(190, 20, 331, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(26);
        font.setBold(true);
        font.setUnderline(true);
        title->setFont(font);
        matiere = new QLineEdit(Matiere);
        matiere->setObjectName("matiere");
        matiere->setGeometry(QRect(220, 110, 261, 51));
        QFont font1;
        font1.setBold(true);
        matiere->setFont(font1);
        AjouterMatiere = new QPushButton(Matiere);
        AjouterMatiere->setObjectName("AjouterMatiere");
        AjouterMatiere->setGeometry(QRect(280, 210, 131, 41));
        AjouterMatiere->setAutoFillBackground(false);
        AjouterMatiere->setStyleSheet(QString::fromUtf8("background-color: blue;"));

        retranslateUi(Matiere);

        QMetaObject::connectSlotsByName(Matiere);
    } // setupUi

    void retranslateUi(QDialog *Matiere)
    {
        Matiere->setWindowTitle(QCoreApplication::translate("Matiere", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("Matiere", "Ajouter des Matieres", nullptr));
        matiere->setPlaceholderText(QCoreApplication::translate("Matiere", "veuillez entrez le nom de la matiere", nullptr));
        AjouterMatiere->setText(QCoreApplication::translate("Matiere", "Ajouter Matiere", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Matiere: public Ui_Matiere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATIERE_H
