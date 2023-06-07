/********************************************************************************
** Form generated from reading UI file 'matlist.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATLIST_H
#define UI_MATLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_MatList
{
public:

    void setupUi(QDialog *MatList)
    {
        if (MatList->objectName().isEmpty())
            MatList->setObjectName("MatList");
        MatList->resize(719, 358);

        retranslateUi(MatList);

        QMetaObject::connectSlotsByName(MatList);
    } // setupUi

    void retranslateUi(QDialog *MatList)
    {
        MatList->setWindowTitle(QCoreApplication::translate("MatList", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MatList: public Ui_MatList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATLIST_H
