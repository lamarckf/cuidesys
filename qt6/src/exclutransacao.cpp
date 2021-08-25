#include "exclutransacao.h"
#include "ui_exclutransacao.h"

exclutransacao::exclutransacao(QWidget *parent, QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::exclutransacao)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
    refreshTransacoes();
}

exclutransacao::~exclutransacao()
{
    delete ui;
}

void exclutransacao::on_voltar_clicked()
{
    janelaParent->show();
    this->close();
    delete this;
}


void exclutransacao::on_confirmarPushButton_clicked()
{

    //Recuperando Id, Tipo, Vendedor e data do banco
    QString id = this->ui->transacaoComboBox->currentText().split(" - ").at(1);
    //Criando Produtos ligados a transações no Banco de Dados
    QSqlQuery qry;

    qry.exec("DELETE FROM tb_transation WHERE id = " + id);
    qry.exec("DELETE FROM tb_transation_produto WHERE idTransation = " + id);
    refreshTransacoes();

    ui->resultLabel->setText("Produto Deletado com sucesso!");

}

void exclutransacao::refreshTransacoes(){

    ui->transacaoComboBox->clear();


    //CONFERINDO CONEXÃO
    if(!bancoDeDados->isOpen())
    {
        //ERRO MSG CONEXÃO
        ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados.");
        return;
    }



    //SQL QUERY
    QSqlQuery qry;
    if(qry.exec("SELECT id, tipo, vendedor, data FROM tb_transation ")) // Requisição de dados apartir do BD
    {
        while(qry.next())
        {
            QString result = qry.value(1).toString() + " - " +  qry.value(0).toString() + " - "  + qry.value(2).toString() +
                    " - " + qry.value(3).toString();
            ui->transacaoComboBox->addItem(result);

        }
    }
    else { ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados. (2)"); }

}

