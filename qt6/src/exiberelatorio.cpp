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

        //Exibe relatório
        QSqlQuery qry;
        qDebug() << "SELECT COUNT(*) FROM tb_transation WHERE " + *transacaoInicio + "<= id AND id <=" + *transacaoFim;
        qry.exec("SELECT COUNT(*) FROM tb_transation WHERE " + *transacaoInicio + "<= id AND id <=" + *transacaoFim);
        QString n_transacoes = qry.value(0).toString();
        while( n_transacoes.length() == 0){
            qDebug() << "Hello Man";
            qry.next();
            n_transacoes = qry.value(0).toString();
        }

        this->ui->tableWidget->setRowCount(n_transacoes.toInt());



        qry.exec("SELECT id, tipo FROM tb_transation WHERE " + *transacaoInicio + "<= id AND id <=" + *transacaoFim);
        int l = 0;
        while(qry.next()  &&  l < n_transacoes.toInt() ){

            if (qry.value(0).toString().length() == 0){
                continue;
            }

            QTableWidgetItem* id = new QTableWidgetItem(qry.value(0).toString());
            ui->tableWidget->setItem(l,0, id);

            QTableWidgetItem* tipo = new QTableWidgetItem(qry.value(1).toString());
            ui->tableWidget->setItem(l,1, tipo);



            QSqlQuery qry2;
            qDebug() << "SELECT SUM(quantidade*preco) FROM view_qry_hist_trans WHERE id = " + qry.value(0).toString();
            qry2.exec("SELECT SUM(quantidade*preco) FROM view_qry_hist_trans WHERE id = " + qry.value(0).toString());
            QString valor = qry2.value(0).toString();

            while( valor.length() == 0){
                qry2.next();
                valor = qry2.value(0).toString();
            }

            if (qry.value(1).toString() == "Compra"){ valor = "-" +valor; }

            QTableWidgetItem* valorItn = new QTableWidgetItem(valor);
            ui->tableWidget->setItem(l,2, valorItn);


            l++;
        }
        //SELECT SUM(quantidade*preco) FROM view_qry_hist_trans WHERE id = 19




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


        //Exibe relatório
        QSqlQuery qry;
        qry.exec("SELECT COUNT(*) FROM tb_produto");
        QString n_produtos = qry.value(0).toString();
        while( n_produtos.length() == 0){
            qry.next();
            n_produtos = qry.value(0).toString();
        }

        this->ui->tableWidget->setRowCount(n_produtos.toInt());

        qry.exec("SELECT * FROM tb_produto");
        int l = 0;
        while(qry.next()  &&  l < n_produtos.toInt() ){

            if (qry.value(0).toString().length() == 0){
                continue;
            }

            QTableWidgetItem* nome = new QTableWidgetItem(qry.value(0).toString());
            ui->tableWidget->setItem(l,0, nome);

            QTableWidgetItem* quantidade = new QTableWidgetItem(qry.value(1).toString());
            ui->tableWidget->setItem(l,1, quantidade);

            QTableWidgetItem* preco = new QTableWidgetItem(qry.value(2).toString());
            ui->tableWidget->setItem(l,2, preco);

            l++;
        }


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

