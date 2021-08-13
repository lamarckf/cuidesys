#include "editadm.h"
#include "ui_editadm.h"

/*
    Classe responsavel pela atualizaçao de dados do admin
*/

EditAdm::EditAdm(QWidget *parent,  QSqlDatabase *bd) :  // construtor com passagem por lista
    QMainWindow(parent),
    ui(new Ui::EditAdm)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
    refreshComboBox();
    ui->resultLabel->setText("");
}

EditAdm::~EditAdm() // Destrutor
{
    delete ui;
}

void EditAdm::on_pushButton_2_clicked() // inicializaador da janela de atualização de dados do admin
{
    janelaParent->show();
    this->close();
    delete this;
}


void EditAdm::refreshComboBox(){ //Atualização da listagem

    ui->admComboBox->clear();

    //CONFERINDO CONEXÃO
    if(!bancoDeDados->isOpen())
    {
        //ERRO MSG CONEXÃO
        ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados.");
        return;
    }



    //SQL QUERY
    QSqlQuery qry;
    if(qry.exec("SELECT userName FROM tb_adm ")) // Requisição de dados apartir do BD
    {

        while(qry.next())
        {

            QString result = qry.value(0).toString();
            ui->admComboBox->addItem(result);

        }
    }
    else { ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados."); }



}


void EditAdm::on_pushButton_clicked() // Atualizando dados de adm
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
    QString actual = ui->admComboBox->currentText();
    QSqlQuery qry;
    if(qry.exec("SELECT * FROM tb_adm WHERE userName=\'" + actual + "\'"))
    {

        if(qry.next())
        {
            //qry.exec("INSERT INTO tb_adm (userName, password, address) VALUES ( \'" + nomeUsr + "\', \'" + senha + "\',   \'" + ender + "\' )")
            qry.exec("UPDATE tb_adm SET userName= \'" + nomeUsr + "\', password= \'" + senha
                     + "\', address= \'" + ender + "\' WHERE userName=\'" + actual + "\'");
            ui->resultLabel->setText("Atualizado Com sucesso !!");
        }

        else{ ui->resultLabel->setText("Não possivel Atualizar."); }

    }
    else { ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados."); }


    ui->lineNome->setText("");
    ui->lineSenha->setText("");
    ui->lineEnd->setText("");
    refreshComboBox();
}

