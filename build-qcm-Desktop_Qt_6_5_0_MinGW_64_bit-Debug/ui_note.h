/********************************************************************************
** Form generated from reading UI file 'note.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTE_H
#define UI_NOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NOTE
{
public:
    QLabel *label_note;
    QLabel *note_text;
    QPushButton *EXIT;
    QLabel *label_date;

    void setupUi(QDialog *NOTE)
    {
        if (NOTE->objectName().isEmpty())
            NOTE->setObjectName("NOTE");
        NOTE->resize(668, 447);
        label_note = new QLabel(NOTE);
        label_note->setObjectName("label_note");
        label_note->setGeometry(QRect(50, 20, 91, 21));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_note->setFont(font);
        note_text = new QLabel(NOTE);
        note_text->setObjectName("note_text");
        note_text->setGeometry(QRect(140, 110, 291, 161));
        EXIT = new QPushButton(NOTE);
        EXIT->setObjectName("EXIT");
        EXIT->setGeometry(QRect(410, 370, 151, 41));
        label_date = new QLabel(NOTE);
        label_date->setObjectName("label_date");
        label_date->setGeometry(QRect(420, 10, 221, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_date->setFont(font1);

        retranslateUi(NOTE);

        QMetaObject::connectSlotsByName(NOTE);
    } // setupUi

    void retranslateUi(QDialog *NOTE)
    {
        NOTE->setWindowTitle(QCoreApplication::translate("NOTE", "Dialog", nullptr));
        label_note->setText(QCoreApplication::translate("NOTE", "NOTE", nullptr));
        note_text->setText(QCoreApplication::translate("NOTE", "TextLabel", nullptr));
        EXIT->setText(QCoreApplication::translate("NOTE", "EXIT", nullptr));
        label_date->setText(QCoreApplication::translate("NOTE", "DATE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NOTE: public Ui_NOTE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTE_H
