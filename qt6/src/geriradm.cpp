#include "geriradm.h"
#include "ui_geriradm.h"

/*
    Classe responsavel pela gerenciamento de usuarios
*/


gerirAdm::gerirAdm(QWidget *parent,  QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::gerirAdm)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
}

gerirAdm::~gerirAdm() //destrutor
{
    delete ui;
}

void gerirAdm::on_pushButton_4_clicked()//inicalzador da janela de gerencia de usuarios
{

    janelaParent->show();
    this->close();
    delete this;
}


void gerirAdm::on_pushButton_clicked() // Inicializador da janela de cadastro
{
    this->hide();
    janelaCadAdm = new CadAdm(this, bancoDeDados);
    janelaCadAdm->show();
}


void gerirAdm::on_pushButton_2_clicked()  // // Inicializador da janela de edição de admin
{
    this->hide();
    janelaEditAdm = new EditAdm(this, bancoDeDados);
    janelaEditAdm->show();
}


void gerirAdm::on_pushButton_3_clicked()  // Inicializador da janela de exclusao de admin
{
    this->hide();
    janelaExcluAdm = new ExcluAdm(this, bancoDeDados);
    janelaExcluAdm->show();
}

