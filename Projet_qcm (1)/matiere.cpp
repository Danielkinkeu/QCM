#include "matiere.h"
#include "ui_matiere.h"
#include <fstream>
#include <iostream>
#include <QString>
#include <QMessageBox>
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;
Matiere::Matiere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Matiere)
{
    ui->setupUi(this);
}

Matiere::~Matiere()
{
    delete ui;
}

void Matiere::on_AjouterMatiere_clicked()
{
    QString name=ui->matiere->text();
    string name_trs=name.toStdString();

    if(name_trs==""){
        QMessageBox::information(this,"WARNING!!","Vous avez oubliez d'ajouter une matiere");
    }
    else{

        fs::create_directory(name_trs);
//        Matiere::m.push_back(name_trs);
        ui->matiere->setText("");
        ui->matiere->setText("");
        QMessageBox::information(this,"saved","la matiere a bien ete sauvegarder");
    }
}

