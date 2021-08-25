#include "cadtransacao.h"
#include "ui_cadtransacao.h"

cadtransacao::cadtransacao(QWidget *parent, QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::cadtransacao)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;

    ui->tipoComboBox->addItem("Escolha tipo de transação:");
    ui->tipoComboBox->addItem("Venda");
    ui->tipoComboBox->addItem("Compra");

    ui->resultLabel->setText("");

    ui->prodSpinBox->setMinimum(1);
    ui->prodSpinBoxDel->setMinimum(1);

    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setRowCount(15);

    ui->dateEdit->setDate(QDate::currentDate());

    refreshProds();
}

cadtransacao::~cadtransacao()
{
    delete ui;
}

void cadtransacao::on_voltar_clicked()
{
    janelaParent->show();
    this->close();
    delete this;
}

void cadtransacao::refreshProds(){
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
    if(qry.exec("SELECT prodNome, preco FROM tb_produto ")) // Requisição de dados apartir do BD
    {

        while(qry.next())
        {
            qDebug() << qry.value(0).toString() ;
            QString result = qry.value(0).toString() + " - R$ "  + qry.value(1).toString();
            ui->prodComboBox->addItem(result);
            ui->prodComboBoxDel->addItem(result);
        }
    }
    else { ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados. (2)"); }

}


void cadtransacao::on_CadastrarPushButton_clicked()
{
    //Le os campos para cadastro na tabela
    QString produtoNomePreco = ui->prodComboBox->currentText();
    QString produtoNome = produtoNomePreco.split(" - R$ ").at(0);
    QString produtoPreco = produtoNomePreco.split(" - R$ ").at(1);
    produtoPreco.replace("," , ".");
    QString produtoQuant = ui->prodSpinBox->text();
    QString precoT = QString::number(produtoQuant.toFloat() * produtoPreco.toFloat());

    //Armazena os valores lidos em uma estrutura
    struct linha novaLinha;
    novaLinha.nomeProduto = produtoNome;
    novaLinha.preco = produtoPreco;
    novaLinha.quantidade = produtoQuant;
    novaLinha.precoTotal = precoT;

    //Verifica o produto ja está na tabela
    bool in = false;
    std::vector<linha>::iterator itr;
    for(itr = linhas.begin(); itr != linhas.end() ; itr++){

        //Se estiver atualiza as quantidades
        if (itr->nomeProduto == novaLinha.nomeProduto){
            itr->quantidade = QString::number( itr->quantidade.toInt() + novaLinha.quantidade.toInt() );
            itr->precoTotal = QString::number( itr->quantidade.toFloat() * itr->preco.toFloat() );
            in = true;
            break;
        }
    }

    //Adiciona a estrutura em um container de linhas caso o seu repectivo produto já nao estja presente
    if (!in){   linhas.push_back(novaLinha);  }


    //Atualiza a tabela
    refreshTable();

    //Exibindo exito da operação para o usuário
    if (in) { ui->resultLabel->setText("Quantidade do produto atualizada !"); }
    else { ui->resultLabel->setText("Produto Adicionado ao Carrinho !"); }

}

void cadtransacao::refreshTable(){

    //Limpa a tabela
    this->ui->tableWidget->clear();


    for(int i=0; i < linhas.size() ; i++){

        struct linha itrLinha = linhas[i];


        QTableWidgetItem* itemNome = new QTableWidgetItem(itrLinha.nomeProduto);
        ui->tableWidget->setItem(i,0, itemNome);

        QTableWidgetItem* itemPreco = new QTableWidgetItem(itrLinha.preco);
        ui->tableWidget->setItem(i,1, itemPreco);

        QTableWidgetItem* itemQuant = new QTableWidgetItem(itrLinha.quantidade);
        ui->tableWidget->setItem(i,2, itemQuant);

        QTableWidgetItem* itemPrecoT = new QTableWidgetItem(itrLinha.precoTotal);
        ui->tableWidget->setItem(i,3, itemPrecoT);

    }
}

void cadtransacao::on_DeletarPushButton_clicked()
{
    ui->resultLabel->setText("");
    //Le os campos para deleção na tabela
    QString produtoNomePreco = ui->prodComboBoxDel->currentText();
    QString produtoNome = produtoNomePreco.split(" - R$ ").at(0);
    QString produtoQuant = ui->prodSpinBoxDel->text();

    //Armazena os valores lidos em uma estrutura
    struct linha delLinha;
    delLinha.nomeProduto = produtoNome;
    delLinha.quantidade = produtoQuant;

    //Verifica se o produto está na tabela
    bool in = false; //Presente na tabela
    bool delTotal = false; //Deletado totalmente
    std::vector<linha>::iterator itr;
    for(itr = linhas.begin(); itr != linhas.end() ; ){

        //Se estiver deleta o item ou atualiza as quantidades
        if (itr->nomeProduto == delLinha.nomeProduto)
        {

            int novaQuant =  itr->quantidade.toInt() - delLinha.quantidade.toInt();

            if(novaQuant > 0)
            {
                itr->quantidade = QString::number(novaQuant);
                itr->precoTotal = QString::number( itr->quantidade.toFloat() * itr->preco.toFloat() );
            }

            else
            {
                linhas.erase(itr);
                delTotal = true;
            }

            in = true;
            break;
        }
    }

    //Atualiza a tabela
    refreshTable();

    //Exibindo resultado da operação para o usuário
    if (!in) { ui->resultLabel->setText("Produto não esta presente no carrinho !"); }
    else if(delTotal) { ui->resultLabel->setText("Produto deletado do carrinho !"); }
    else { ui->resultLabel->setText("Quantidade do produto atualizada no carrinho !"); }
}


void cadtransacao::on_confirmarPushButton_clicked()
{
    ui->resultLabel->setText("");
    //le os campos preenchidos
    QString tipoTrans = ui->tipoComboBox->currentText();
    QString vendedor = ui->vendedorLineEdit->text();
    QString data = ui->dateEdit->text();

    //Verificando Entradas
    if ( tipoTrans != "Venda" && tipoTrans != "Compra"){
        ui->resultLabel->setText("Selecione um tipo de trasação.");
        return;
    }

    if ( vendedor.length() == 0){
        ui->resultLabel->setText("Preencha o campo vendedor. ");
        return;
    }

    if(linhas.size() <= 0){
        ui->resultLabel->setText("Ao menos um produto deve ser registrado ");
        return;
    }


    //Criando Transação no Banco de Dados
    QSqlQuery qry;
    qDebug() << "INSERT INTO tb_transation ( data, vendendor, tipo) VALUES (\'" + data + "\', \'" + vendedor + "\', \'" + tipoTrans + "\')";
    if( qry.exec("INSERT INTO tb_transation ( data, vendendor, tipo) VALUES (\'" + data + "\', \'" + vendedor + "\', \'" + tipoTrans + "\')") )
    {
    }
    else
    {
        ui->resultLabel->setText("Não foi possivel adicionar transação");
        return;
    }

    //Criando Produtos ligados a transações no Banco de Dados
    QSqlQuery qry2;
    qry2.exec("SELECT last_insert_rowid()");
    QString idTransation = qry2.value(0).toString();
    qDebug() << "ID transation: " << idTransation ;
    do{
        qDebug() << "LEL";
        qDebug() <<"0" << qry2.value(0).toString();
        qDebug() <<"1" << qry2.value(1).toString();
        qDebug() << "2" << qry2.value(2).toString();
    }while(qry2.next());


    std::vector<linha>::iterator itr;
    for(itr = linhas.begin(); itr != linhas.end() ; ){

        QString nomeProd = itr->nomeProduto;
        QString quantidade = itr->quantidade;
        if (qry2.exec("INSERT INTO tb_transation_produto (quantidade, idTransation, prodNome) VALUES ( "+ quantidade +", " + idTransation +", \'"+ nomeProd +"\')") )
        {}
        else
        {
            ui->resultLabel->setText("Não possivel adicionar um dos produtos.");
            return;
        }

    }


    ui->vendedorLineEdit->setText("");
    ui->prodComboBox->setCurrentText("Escolha tipo de transação:");
    ui->dateEdit->setDate(QDate::currentDate());
    linhas.clear();
    refreshTable();
    ui->resultLabel->setText("Transação adicionada com sucesso Q");


}

