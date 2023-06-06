#ifndef ADMINPAGE_H
#define ADMINPAGE_H

#include <QDialog>
#include "maketest.h"
#include "ajoutetudiant.h"
#include "enseignant.h"
#include "matiere.h"
#include "qcm.h"
#include "loginpage.h"

namespace Ui {
class AdminPage;
}

class AdminPage : public QDialog
{
    Q_OBJECT

public:
    explicit AdminPage(QWidget *parent = nullptr);
    ~AdminPage();

private slots:
    void on_make_test_clicked();

    void on_add_etudiant_clicked();

    void on_exit_clicked();

    void on_add_enseignant_clicked();

    void on_add_matiere_clicked();

private:
    Ui::AdminPage *ui;
};

#endif // ADMINPAGE_H
