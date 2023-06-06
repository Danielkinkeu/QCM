#include "qcm.h"
#include "ui_qcm.h"
#include "question.h"
#include "MakeTest.h"
#include <QObject>
#include <QString>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <iostream>
#include <QTimer>
using namespace std;

Qcm::Qcm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Qcm)
{
    ui->setupUi(this);

    QTimer *timer=new QTimer(this);
    connect(timer ,SIGNAL(timeout()),this,SLOT(showtime_m()));
    timer->start();

    ofstream quest_file;
    quest_file.open("quest_rep.txt",ios::trunc);

}

Qcm::~Qcm()
{
    delete ui;
}

void Qcm::on_addQcm_clicked()
{
    MakeTest* t= new MakeTest(this);
    t->show();
}

