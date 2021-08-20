#include "excluadm.h"
#include "ui_excluadm.h"

/*
    Exclui Admin
    Classe responsavel pelas interfaces de exclusão dos usuaros
*/


ExcluAdm::ExcluAdm(QWidget *parent,  QSqlDatabase *bd) :  //construtor da classe
    QMainWindow(parent),
    ui(new Ui::ExcluAdm)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
    refreshComboBox();
    ui->resultLabel->setText("");
}

ExcluAdm::~ExcluAdm() // Destrutor
{
    delete ui;
}


void ExcluAdm::on_pushButton_2_clicked() // Inicializador da janela de exclusao de admin
{
    janelaParent->show();
    this->close();
    delete this;
}


void ExcluAdm::on_pushButton_clicked() // Exlusao do de Adm
{

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
    if(qry.exec("SELECT * FROM tb_user WHERE userName=\'" + actual + "\'"))
    {

        if(qry.next())
        {
            qry.exec("DELETE FROM tb_user WHERE userName=\'" + actual + "\'");
            ui->resultLabel->setText("Deletado Com sucesso !!");
        }

        else{ ui->resultLabel->setText("Não possivel Deletar."); }

    }
    else { ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados."); }

    refreshComboBox();

}


void ExcluAdm::refreshComboBox(){ //Atualizaçao do label

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
    if(qry.exec("SELECT userName FROM tb_user "))
    {

        while(qry.next())
        {

            QString result = qry.value(0).toString();
            ui->admComboBox->addItem(result);

        }
    }
    else { ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados."); }



}
