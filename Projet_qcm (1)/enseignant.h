#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H

#include <QDialog>
using namespace std;

namespace Ui {
class Enseignant;
}

class Enseignant : public QDialog
{
    Q_OBJECT

public:
    explicit Enseignant(QWidget *parent = nullptr);
    void set_name(const string& name);
    ~Enseignant();

private slots:
    void on_ajouter_2_clicked();

    void on_exit_2_clicked();

private:
    Ui::Enseignant *ui;
    int counter_trunc=0;
    string name_enseignant;
};

#endif // ENSEIGNANT_H
