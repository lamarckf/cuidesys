#include "exiberelatorio.h"
#include "ui_exiberelatorio.h"

exiberelatorio::exiberelatorio(QWidget *parent, QSqlDatabase *bd, QString *type, QString *transacaoInicio, QString *transacaoFim) :
    QMainWindow(parent),
    ui(new Ui::exiberelatorio)
{
    ui->setupUi(this);

    janelaParent = parent;
    bancoDeDados = bd;
    tipo= type;
    tInicio= transacaoInicio;
    tFim = transacaoFim;
    ui->relatorio->setText(*tipo);
    if(*tipo=="Histórico de transações")
    {
        int inicio= (tInicio->split(" ")[0].toInt());
        int fim= (tFim->split(" ")[0].toInt());
        this->ui->tableWidget->setColumnCount(3);
        QString coluna1 = "Transação";
        QString coluna2 = "Tipo Transação";
        QString coluna3 = "Valor";
        QStringList headersLabel(coluna1);
        headersLabel << coluna2 << coluna3;
        this->ui->tableWidget->setHorizontalHeaderLabels(headersLabel);
        this->ui->tableWidget->setRowCount(fim-inicio+1);
        auto header = this->ui->tableWidget->horizontalHeader();
        header->setSectionResizeMode(QHeaderView::Stretch);


    }
    else if(*tipo=="Produtos em estoque")
    {
        this->ui->tableWidget->setColumnCount(3);
        QString coluna1 = "Produto";
        QString coluna2 = "Quantidade";
        QString coluna3 = "Preço";
        QStringList headersLabel(coluna1);
        headersLabel << coluna2 << coluna3;
        this->ui->tableWidget->setHorizontalHeaderLabels(headersLabel);
        auto header = this->ui->tableWidget->horizontalHeader();
        header->setSectionResizeMode(QHeaderView::Stretch);


        //this->ui->tableWidget->setRowCount(Tem que contar os produtos em estoque);

    }
    else if(*tipo== "Produto mais vendido")
    {
        this->ui->tableWidget->setColumnCount(3);
        QString coluna1 = "Produto";
        QString coluna2 = "Quantidade";
        QString coluna3 = "Valor Total";
        QStringList headersLabel(coluna1);
        headersLabel << coluna2 << coluna3;
        this->ui->tableWidget->setHorizontalHeaderLabels(headersLabel);
        this->ui->tableWidget->setRowCount(1);
        auto header = this->ui->tableWidget->horizontalHeader();
        header->setSectionResizeMode(QHeaderView::Stretch);
    }else if(*tipo== "Melhor vendedor")
    {
        this->ui->tableWidget->setColumnCount(3);
        QString coluna1 = "Vendedor";
        QString coluna2 = "Número de vendas";
        QString coluna3 = "Valor Total";
        QStringList headersLabel(coluna1);
        headersLabel << coluna2 << coluna3;
        this->ui->tableWidget->setHorizontalHeaderLabels(headersLabel);
        this->ui->tableWidget->setRowCount(1);
        auto header = this->ui->tableWidget->horizontalHeader();
        header->setSectionResizeMode(QHeaderView::Stretch);
    }else if(*tipo== "Todos os vendedores")
    {
        this->ui->tableWidget->setColumnCount(3);
        QString coluna1 = "Vendedor";
        QString coluna2 = "Número de vendas";
        QString coluna3 = "Valor Total";
        QStringList headersLabel(coluna1);
        headersLabel << coluna2 << coluna3;
        this->ui->tableWidget->setHorizontalHeaderLabels(headersLabel);
        auto header = this->ui->tableWidget->horizontalHeader();
        header->setSectionResizeMode(QHeaderView::Stretch);


        //this->ui->tableWidget->setRowCount(tem que somar o numero de vendedores);
    }else if(*tipo== "Fluxo de caixa")
    {
        this->ui->tableWidget->setColumnCount(5);
        QString coluna1 = "Data Inicial";
        QString coluna2 = "Data Final";
        QString coluna3 = "Entrada";
        QString coluna4 = "Saída";
        QString coluna5 = "Saldo";
        QStringList headersLabel(coluna1);
        headersLabel << coluna2 << coluna3 <<coluna4<<coluna5;
        this->ui->tableWidget->setHorizontalHeaderLabels(headersLabel);
        this->ui->tableWidget->setRowCount(1);
        auto header = this->ui->tableWidget->horizontalHeader();
        header->setSectionResizeMode(QHeaderView::Stretch);
    }
}

exiberelatorio::~exiberelatorio()
{
    delete ui;

}

void exiberelatorio::on_bt_voltar_clicked()
{
    janelaParent->show();
    this->close();
    delete this;
}

