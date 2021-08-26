#include "gerirrelatorio.h"
#include "ui_gerirrelatorio.h"

gerirrelatorio::gerirrelatorio(QWidget *parent, QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::gerirrelatorio)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
    refreshRelatorio();
    refreshTransacaoInicial();
    refreshTransacaoFinal();
}

gerirrelatorio::~gerirrelatorio()
{
    delete ui;
}

void gerirrelatorio::on_bt_voltar_clicked()
{
    janelaParent->show();
    this->close();
    delete this;
}

void gerirrelatorio::refreshRelatorio(){
    ui->tiporelatorio->clear();
    ui->tiporelatorio->addItem("Escolha tipo de relatório:");
    ui->tiporelatorio->addItem("Histórico de transações");
    ui->tiporelatorio->addItem("Produtos em estoque");
    ui->tiporelatorio->addItem("Produto mais vendido");
    ui->tiporelatorio->addItem("Melhor vendedor");
    ui->tiporelatorio->addItem("Todos os vendedores");
    ui->tiporelatorio->addItem("Devoluções realizadas");
    ui->tiporelatorio->addItem("Fluxo de caixa");

}

void gerirrelatorio::refreshTransacaoInicial(){

    ui->relatorioinicial->clear();
    ui->relatorioinicial->addItem("Escolha o número da transação inicial");
    //CONFERINDO CONEXÃO
    if(!bancoDeDados->isOpen())
    {
        //ERRO MSG CONEXÃO
        ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados.");
        return;
    }

    //SQL QUERY
    QSqlQuery qry;
    if(qry.exec("SELECT id FROM tb_transation ")) // Requisição de dados apartir do BD
    {
        while(qry.next())
        {
            QString result = qry.value(0).toString();
            ui->relatorioinicial->addItem(result);

        }
    }
    else { ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados. (2)"); }

}

void gerirrelatorio::refreshTransacaoFinal(){
    ui->relatoriofinal->clear();
    ui->relatoriofinal->addItem("Escolha o número da transação final");
    //CONFERINDO CONEXÃO
    if(!bancoDeDados->isOpen())
    {
        //ERRO MSG CONEXÃO
        ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados.");
        return;
    }

    //SQL QUERY
    QSqlQuery qry;
    if(qry.exec("SELECT id FROM tb_transation ")) // Requisição de dados apartir do BD
    {
        while(qry.next())
        {
            QString result = qry.value(0).toString();
            ui->relatoriofinal->addItem(result);

        }
    }
    else { ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados. (2)"); }

}

void gerirrelatorio::on_confirmar_clicked()
{
    if(this->ui->tiporelatorio->currentText()=="Escolha tipo de relatório:") {
        ui->resultLabel->setText("Tipo de relatório em branco");

        refreshRelatorio();
        refreshTransacaoInicial();
        refreshTransacaoFinal();

    } else if(this->ui->relatoriofinal->currentText()>this->ui->relatorioinicial->currentText())
    {
        int *inicio=new int [this->ui->relatorioinicial->currentText().split(" ")[0].toInt()];
        int *fim= new int [this->ui->relatoriofinal->currentText().split(" ")[0].toInt()];
        this->hide();
        QString *type = new QString (this->ui->tiporelatorio->currentText());
        JanelaExibeRelatorio = new exiberelatorio(this, bancoDeDados,type, inicio, fim );
        JanelaExibeRelatorio->show();
    }
    else
    {
        ui->resultLabel->setText("O número do relátorio final é menor que o número do relátorio inicial");
        refreshTransacaoInicial();
        refreshTransacaoFinal();
    }
}

