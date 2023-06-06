#ifndef QCM_H
#define QCM_H

#include <QDialog>

namespace Ui {
class Qcm;
}

class Qcm : public QDialog
{
    Q_OBJECT

public:
    explicit Qcm(QWidget *parent = nullptr);
    ~Qcm();

private slots:
    void on_addQcm_clicked();

private:
    Ui::Qcm *ui;
};

#endif // QCM_H
