#include "cadadm.h"
#include "ui_cadadm.h"
#include <iostream>
using namespace std;

CadAdm::CadAdm(QWidget *parent,  QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::CadAdm)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
    ui->resultLabel->setText("");
}

CadAdm::~CadAdm()
{
    delete ui;
}

void CadAdm::on_pushButton_2_clicked()
{
    janelaParent->show();
    this->close();
    delete this;
}


void CadAdm::on_pushButton_clicked()
{
    QString nomeUsr, senha, ender;
    nomeUsr = ui->lineNome->text();
    senha = ui->lineSenha->text();
    ender = ui->lineEnd->text();

    //Coferindo campos
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
    if(qry.exec("SELECT * FROM tb_adm WHERE userName==\'" + nomeUsr + "\' "))
    {
        if(qry.next())
        {
            ui->resultLabel->setText("Nome de Usuário já Cadastrado");

        }
        else
        {
            if(qry.exec("INSERT INTO tb_adm (userName, password, address) VALUES ( \'" + nomeUsr + "\', \'" + senha + "\',   \'" + ender + "\' )")){
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

