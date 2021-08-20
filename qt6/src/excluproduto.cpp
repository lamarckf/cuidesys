#include "excluproduto.h"
#include "ui_excluproduto.h"

ExcluProduto::ExcluProduto(QWidget *parent, QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::ExcluProduto)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
    ui->resultLabel->setText("");
    refreshComboBox();
}

ExcluProduto::~ExcluProduto()
{
    delete ui;
}

void ExcluProduto::on_bt_voltar_clicked()
{
    janelaParent->show();
    this->close();
    delete this;
}


void ExcluProduto::on_bt_confirmar_clicked()
{

    //CONFERINDO CONEXÃO
    if(!bancoDeDados->isOpen())
    {
        //ERRO MSG CONEXÃO
        ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados.");
        return;
    }

    //SQL QUERY
    QString actual = ui->prodComboBox->currentText();
    QSqlQuery qry;
    if(qry.exec("SELECT * FROM tb_produto WHERE prodNome=\'" + actual + "\'"))
    {

        if(qry.next())
        {
            qry.exec("DELETE FROM tb_produto WHERE prodNome=\'" + actual + "\'");
            ui->resultLabel->setText("Deletado Com sucesso !!");
        }

        else{ ui->resultLabel->setText("Não possivel Deletar."); }

    }
    else { ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados."); }

    refreshComboBox();
}

void ExcluProduto::refreshComboBox(){ //Atualização da listagem

    ui->prodComboBox->clear();

    //CONFERINDO CONEXÃO
    if(!bancoDeDados->isOpen())
    {
        //ERRO MSG CONEXÃO
        ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados.");
        return;
    }



    //SQL QUERY
    QSqlQuery qry;
    if(qry.exec("SELECT prodNome FROM tb_produto ")) // Requisição de dados apartir do BD
    {

        while(qry.next())
        {

            QString result = qry.value(0).toString();
            ui->prodComboBox->addItem(result);

        }
    }
    else { ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados. (2)"); }



}



