#ifndef MATIERE_H
#define MATIERE_H

#include <QDialog>

using namespace std;
namespace Ui {
class Matiere;
}

class Matiere : public QDialog
{
    Q_OBJECT

public:
    explicit Matiere(QWidget *parent = nullptr);
    string mat;
    ~Matiere();

private slots:
    void on_AjouterMatiere_clicked();

private:
    Ui::Matiere *ui;
//    QList<string *> m;
};

#endif // MATIERE_H
