#include "cadproduto.h"
#include "ui_cadproduto.h"

CadProduto::CadProduto(QWidget *parent, QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::CadProduto)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
    ui->resultLabel->setText("");

}

CadProduto::~CadProduto()
{
    delete ui;
}

void CadProduto::on_pushButton_clicked()
{


    QString nomeProd, preco, quantidade;

    nomeProd = ui->lineNome->text();
    quantidade = ui->spinQuantidade->text();
    preco = ui->linePreco->text();




    //Processo somente os numeros e um virgula de 'preco' (Parsing)
    QString precoParse = "";
    bool virgula = false;
    for (int i =0;i<preco.size();i++)
    {
        if (preco[i].isDigit())
        {
            precoParse.append(preco[i]);
        }
        else if( preco[i] == ',' && !virgula)
        {
            precoParse.append('.');
            virgula = true;
        }
    }


    //validando os campos
    if( nomeProd.length() == 0, precoParse.length() == 0 ){
        ui->resultLabel->setText("Todos os campos devem ser preenchidos corretamente");
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

    if(qry.exec("SELECT * FROM tb_produto WHERE prodNome = \'" + nomeProd + "\' "))

    {
        if(qry.next())
        {
            ui->resultLabel->setText("Nome de Produto já Cadastrado");

        }
        else
        {
            if (qry.exec("INSERT INTO tb_produto (prodNome, quantidade, preco) VALUES ( \'" + nomeProd + "\', \'" + quantidade + "\',   \'" + precoParse + "\' )") )
             {
                ui->resultLabel->setText("Produto Cadastrado !");
                ui->lineNome->setText("");
                ui->spinQuantidade->setValue(0);
                ui->linePreco->setText("");
            }
            else{
                ui->resultLabel->setText("Não foi possivel cadastrar produto.");
            }
        }
    }
    else { ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados."); }


}


void CadProduto::on_pushButton_2_clicked()
{
    janelaParent->show();
    this->close();
    delete this;
}

