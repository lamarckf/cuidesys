#include "excluadm.h"
#include "ui_excluadm.h"


ExcluAdm::ExcluAdm(QWidget *parent,  QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::ExcluAdm)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
    refreshComboBox();
    ui->resultLabel->setText("");
}

ExcluAdm::~ExcluAdm()
{
    delete ui;
}


void ExcluAdm::on_pushButton_2_clicked()
{
    janelaParent->show();
    this->close();
    delete this;
}


void ExcluAdm::on_pushButton_clicked()
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
    if(qry.exec("SELECT * FROM tb_adm WHERE userName=\'" + actual + "\'"))
    {

        if(qry.next())
        {
            qry.exec("DELETE FROM tb_adm WHERE userName=\'" + actual + "\'");
            ui->resultLabel->setText("Deletado Com sucesso !!");
        }

        else{ ui->resultLabel->setText("Não possivel Deletar."); }

    }
    else { ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados."); }

    refreshComboBox();

}


void ExcluAdm::refreshComboBox(){

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
    if(qry.exec("SELECT userName FROM tb_adm "))
    {

        while(qry.next())
        {

            QString result = qry.value(0).toString();
            ui->admComboBox->addItem(result);

        }
    }
    else { ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados."); }



}