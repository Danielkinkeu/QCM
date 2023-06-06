#ifndef MATLIST_H
#define MATLIST_H

#include <QDialog>

namespace Ui {
class MatList;
}

class MatList : public QDialog
{
    Q_OBJECT

public:
    explicit MatList(QWidget *parent = nullptr);
    ~MatList();

private:
    Ui::MatList *ui;
};

#endif // MATLIST_H
