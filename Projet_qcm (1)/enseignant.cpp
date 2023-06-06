#include "enseignant.h"
#include "ui_enseignant.h"
#include <fstream>
#include <iostream>
#include <QString>
#include <QMessageBox>
using namespace std;

Enseignant::Enseignant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Enseignant)
{
    ui->setupUi(this);
}

Enseignant::~Enseignant()
{
    delete ui;
}

void Enseignant::set_name(const string &name)
{
    name_enseignant=name;
}

void Enseignant::on_ajouter_2_clicked()
{
    QString name=ui->name_edit_2->text();
    string name_trs=name.toStdString();

    QString pass=ui->pass_edit_2->text();
    string pass_trs=pass.toStdString();

    ofstream quest_file;

    if(counter_trunc==0)
    {
        quest_file.open("enseignant.txt",ios::trunc);
    } else{ quest_file.open("enseignant.txt",ios::app);}

    if(name_trs=="" || pass_trs==""){
        QMessageBox::information(this,"WARNING!!","Vous avez oubliez d'ajouter un enseignant");
    }
    else{
        quest_file<<"*"+name_trs<<endl;
        quest_file<<"{"+pass_trs<<endl;
        ui->name_edit_2->setText("");
        ui->pass_edit_2->setText("");
        QMessageBox::information(this,"saved","teacher has been saved");
        ++counter_trunc;
    }
    quest_file.close();
}


void Enseignant::on_exit_2_clicked()
{
    string question_rep="enseignant.txt";
    ifstream myfile(question_rep);
    string buffer;
    getline(myfile,buffer);

    if(buffer=="")
    {
        QMessageBox::information(this,"DANGER DANGER!!!","Not a single teacher has been added");
    }else
    {
        close();
        QMessageBox::information(this,"DANGER DANGER!!!","ALL Teacher are saved.\n No more modifications are allowed!!!");
    }
    myfile.close();
}

