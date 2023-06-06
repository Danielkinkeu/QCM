#include "matlist.h"
#include "ui_matlist.h"

MatList::MatList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MatList)
{
    ui->setupUi(this);
}

MatList::~MatList()
{
    delete ui;
}
