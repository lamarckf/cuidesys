#include "cadadm.h"
#include "ui_cadadm.h"
#include <iostream>
using namespace std;

/*
classe responsavel pela interface do cadastro dos adms
*/

CadAdm::CadAdm(QWidget *parent,  QSqlDatabase *bd) :  // Construtor com passagem de por lista
    QMainWindow(parent),
    ui(new Ui::CadAdm)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
    ui->resultLabel->setText("");
}

CadAdm::~CadAdm()  // Destrutor
{
    delete ui;
}

void CadAdm::on_bt_voltar_clicked()//// inicilizador da janela filha
{
    janelaParent->show();
    this->close();
    delete this;
}


void CadAdm::on_bt_confirmar_clicked() // Cadastrando novo usuarioa
{
    QString nomeUsr, senha, ender;
    nomeUsr = ui->lineNome->text();
    senha = ui->lineSenha->text();
    ender = ui->lineEnd->text();

                                                                                 //validando os campos
    if( nomeUsr.length() == 0  || senha.length() == 0 || ender.length() == 0 ){
        ui->resultLabel->setText("Todos os campos devem ser preenchidos");
        return;
    }


    //CONFERINDO CONEXÃO
    if(!bancoDeDados->isOpen())
    {
        //ERRO MSG CONEXÃO
        ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados.");
        return;
    }


    //SQL QUERY
    QSqlQuery qry;
    if(qry.exec("SELECT * FROM tb_user WHERE userName==\'" + nomeUsr + "\' "))
    {
        if(qry.next())
        {
            ui->resultLabel->setText("Nome de Usuário já Cadastrado");

        }
        else
        {
            if(qry.exec("INSERT INTO tb_user (userName, password, address) VALUES ( \'" + nomeUsr + "\', \'" + senha + "\',   \'" + ender + "\' )")){
                ui->resultLabel->setText("Usuário Cadastrado !");
                ui->lineNome->setText("");
                ui->lineSenha->setText("");
                ui->lineEnd->setText("");
            }
            else{
                ui->resultLabel->setText("Não foi possivel cadastrar usuário.");
            }
        }
    }
    else { ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados."); }

}



