/********************************************************************************
** Form generated from reading UI file 'qcm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCM_H
#define UI_QCM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Qcm
{
public:
    QLineEdit *lineEdit;
    QFrame *frame;
    QPushButton *addQcm;
    QPushButton *listQcm;

    void setupUi(QDialog *Qcm)
    {
        if (Qcm->objectName().isEmpty())
            Qcm->setObjectName("Qcm");
        Qcm->resize(754, 368);
        Qcm->setStyleSheet(QString::fromUtf8("backgroud-color:white;\n"
""));
        lineEdit = new QLineEdit(Qcm);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(0, 0, 751, 91));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:red;\n"
"color: white;\n"
"font-size: 50px;\n"
"justify-content: center;\n"
"text-align: center;\n"
"\n"
""));
        frame = new QFrame(Qcm);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(90, 120, 541, 221));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        addQcm = new QPushButton(frame);
        addQcm->setObjectName("addQcm");
        addQcm->setGeometry(QRect(90, 90, 131, 41));
        listQcm = new QPushButton(frame);
        listQcm->setObjectName("listQcm");
        listQcm->setGeometry(QRect(350, 90, 131, 41));

        retranslateUi(Qcm);

        QMetaObject::connectSlotsByName(Qcm);
    } // setupUi

    void retranslateUi(QDialog *Qcm)
    {
        Qcm->setWindowTitle(QCoreApplication::translate("Qcm", "Dialog", nullptr));
        lineEdit->setText(QCoreApplication::translate("Qcm", "Teacher Only", nullptr));
        addQcm->setText(QCoreApplication::translate("Qcm", "Ajouter un QCM", nullptr));
        listQcm->setText(QCoreApplication::translate("Qcm", "Voir les anciens QCM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Qcm: public Ui_Qcm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCM_H
