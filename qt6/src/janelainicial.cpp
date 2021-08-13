#include "janelainicial.h"
#include "ui_janelainicial.h"
/*
    Classe resposavel pela interface do ambiente do usuario logado
*/

janelaInicial::janelaInicial(QWidget *parent, QSqlDatabase* bd) : // construtor
    QMainWindow(parent),
    ui(new Ui::janelaInicial)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
}

janelaInicial::~janelaInicial() // destrutor
{
    delete ui;
}

void janelaInicial::on_bt_logout_clicked() // incializador da janela filha
{
    janelaParent->show();
    this->close();
    delete this;
}




void janelaInicial::on_bt_admin_clicked() // Inicializador da jenale de gerencia da dos adms
{
    this->hide();
    janelaGerir = new gerirAdm(this, bancoDeDados);
    janelaGerir->show();

}

