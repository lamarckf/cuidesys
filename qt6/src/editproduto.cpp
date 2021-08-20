#include "editproduto.h"
#include "ui_editproduto.h"

EditProduto::EditProduto(QWidget *parent, QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::EditProduto)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
    ui->resultLabel->setText("");
    refreshComboBox();
}


EditProduto::~EditProduto()
{
    delete ui;
}

void EditProduto::on_pushButton_2_clicked()
{
    janelaParent->show();
    this->close();
    delete this;
}

void EditProduto::on_bt_confirmar_clicked()
{

    QString nomeProd, preco, quantidade;

    nomeProd = ui->lineNome->text();
    quantidade = ui->quantidadeSpin->text();
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
    QString actual = ui->prodComboBox->currentText();
    QSqlQuery qry;
    if(qry.exec("SELECT * FROM tb_produto WHERE prodNome=\'" + actual + "\'"))
    {

        if(qry.next())
        {


            qry.exec("UPDATE tb_produto SET prodNome = \'" + nomeProd + "\',quantidade = \'" + quantidade
                     + "\', preco = \'" + preco + "\' WHERE prodNome = \'" + actual + "\' ");
            ui->resultLabel->setText("Atualizado Com sucesso !!");
        }

        else{ ui->resultLabel->setText("Não possivel Atualizar."); }

    }
    else { ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados."); }


    ui->lineNome->setText("");
    ui->quantidadeSpin->setValue(0);
    ui->linePreco->setText("");
    refreshComboBox();

}

void EditProduto::refreshComboBox(){ //Atualização da listagem

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


