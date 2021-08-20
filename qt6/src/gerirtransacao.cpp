#include "gerirtransacao.h"
#include "ui_gerirtransacao.h"

gerirtransacao::gerirtransacao(QWidget *parent, QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::gerirtransacao)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
    //CONFERINDO CONEXÃO
}

gerirtransacao::~gerirtransacao()
{
    delete ui;
}

void gerirtransacao::on_pushButton_4_clicked()
{
    janelaParent->show();
    this->close();
    delete this;
}


void gerirtransacao::on_cadastrar_clicked()
{
    this->hide();
    janelaCadTransacao = new cadtransacao(this, bancoDeDados);
    janelaCadTransacao->show();
}


void gerirtransacao::on_editar_clicked()
{

}


void gerirtransacao::on_excluir_clicked()
{

}

