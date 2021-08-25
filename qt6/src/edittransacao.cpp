#include "edittransacao.h"
#include "ui_edittransacao.h"

edittransacao::edittransacao(QWidget *parent, QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::edittransacao)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;

    //Conectando chamada de função à mudança do indice do combobox transacao
    connect(ui->transacaoComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(on_transacaoComboBox_currentIndexChanged(int)));

    //Conectando chamada de função à mudança do indice do combobox transacao
    //connect(ui->aplicarPushButton, SIGNAL(currentIndexChanged(int)), this, SLOT(on_transacaoComboBox_currentIndexChanged(int)));

    //Ajustando Label de resultados
    ui->resultLabel->setText("");

    //Ajustando Spin Boxes
    ui->prodSpinBox->setMinimum(1);
    ui->prodSpinBoxDel->setMinimum(1);

    //Ajustando Tabela
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setRowCount(15);
    auto header = this->ui->tableWidget->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);

    //Ajustando Data inicial
    ui->dateEdit->setDate(QDate::currentDate());

    //Atualizando os transaçoes do comboBox
    refreshTransacoes();

    //Atualizando os produtos do comboBox
    refreshProds();

    //Atualizando os campos do formulario com dados da transação selecionada
    refreshCamposTransacao();
}

edittransacao::~edittransacao()
{
    delete ui;
}



void edittransacao::refreshProds(){
    ui->prodComboBox->clear();
    ui->prodComboBoxDel->clear();

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
            QString result = qry.value(0).toString() + " - R$ "  + qry.value(1).toString();
            ui->prodComboBox->addItem(result);
            ui->prodComboBoxDel->addItem(result);
        }
    }
    else { ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados. (2)"); }

}

void edittransacao::refreshTransacoes(){

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

void edittransacao::refreshCamposTransacao(){

    //Limpa valores antigos
    ui->vendedorLineEdit->setText("");
    ui->dateEdit->setDate(QDate::currentDate());
    linhas.clear();


    //CONFERINDO CONEXÃO
    if(!bancoDeDados->isOpen())
    {
        //ERRO MSG CONEXÃO
        ui->resultLabel->setText("Não foi possivel estabelecer conexão com bando de dados.");
        return;
    }


    //Recuperando Id, Tipo, Vendedor e data do banco
    QString id = this->ui->transacaoComboBox->currentText().split(" - ").at(1);
    QString tipo;
    QString vendedor;
    QString dataStr;

    QSqlQuery qry;
    if(qry.exec("SELECT id, tipo, vendedor, data FROM tb_transation  WHERE id = " + id)) // Requisição de dados apartir do BD
    {

        while(qry.next())
        {
            id =  qry.value(0).toString();
            tipo =  qry.value(1).toString();
            vendedor =  qry.value(2).toString();
            dataStr =  qry.value(3).toString();
        }

    }
    else
    {
        ui->resultLabel->setText("Não foi possivel resgatar dados da transação");
        return;
    }


    //Recuperando Itens da Tabela (Carrinho)
    QSqlQuery qry_table;
    if(qry_table.exec("SELECT T.prodNome, TP.quantidade, preco FROM tb_transation_produto as TP , tb_produto as T WHERE T.prodNome = TP.prodNome and idTransation = "+ id )) // Requisição de dados apartir do BD
    {

        while(qry_table.next())
        {
            struct linha itr_linha;
            itr_linha.nomeProduto = qry_table.value(0).toString() ;
            itr_linha.quantidade = qry_table.value(1).toString() ;
            itr_linha.preco = qry_table.value(2).toString() ;
            itr_linha.precoTotal = QString::number(itr_linha.quantidade.toFloat() * itr_linha.preco.toFloat()) ;
            linhas.push_back(itr_linha);
        }

    }
    else
    {
        ui->resultLabel->setText("Não foi possivel carregar itens do carrinho !");
        return;
    }



    //Atualizando compos
    ui->vendedorLineEdit->setText(vendedor);
    ui->dateEdit->setDate(QDate::fromString(dataStr));

    //Atualizando Tabela
    refreshTable();

}

void edittransacao::refreshTable(){

    //Limpa a tabela
    this->ui->tableWidget->clear();

    //Definindo cabeçalho
    QString coluna1 = "Produto";
    QString coluna2 = "Preço Un.";
    QString coluna3 = "Unidades";
    QString coluna4 = "Preço Total";
    QStringList headersLabel(coluna1);
    headersLabel << coluna2 << coluna3<< coluna4;
    this->ui->tableWidget->setHorizontalHeaderLabels(headersLabel);




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

void edittransacao::on_transacaoComboBox_currentIndexChanged(int index)
{
    refreshCamposTransacao();
}

void edittransacao::on_voltarPushButton_clicked()
{
    janelaParent->show();
    this->close();
    delete this;
}


void edittransacao::on_aplicarPushButton_clicked()
{
    ui->resultLabel->setText("");


    //Obtendo id do produto
    QString id = this->ui->transacaoComboBox->currentText().split(" - ").at(1);


    //le os campos preenchidos
    QString vendedor = ui->vendedorLineEdit->text();
    QString data = ui->dateEdit->text();

    //Verificando Entradas
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
    if( qry.exec("UPDATE tb_transation SET vendedor = \'" + vendedor + "\', data = \'" + data + "\' WHERE id =" + id) )
    {}
    else
    {
        ui->resultLabel->setText("Não foi possivel atualizar transação.");
        return;
    }

    //Criando Produtos ligados a transações no Banco de Dados
    QSqlQuery qry2;
    qry2.exec("DELETE FROM tb_transation_produto WHERE idTransation = " + id);

    std::vector<linha>::iterator itr;
    for(itr = linhas.begin(); itr != linhas.end() ; itr++){

        QString nomeProd = itr->nomeProduto;
        QString quantidade = itr->quantidade;


        if (qry2.exec("INSERT INTO tb_transation_produto (quantidade, idTransation, prodNome) VALUES ( "+ quantidade +", " + id +", \'"+ nomeProd +"\')") )
        {}
        else
        {
            ui->resultLabel->setText("Não possivel adicionar novamente um dos produtos.");
            return;
        }

    }


    ui->vendedorLineEdit->setText("");
    ui->prodComboBox->setCurrentIndex(0);
    ui->dateEdit->setDate(QDate::currentDate());
    linhas.clear();

    //Atualizando combobox de transações
    //refreshTransacoes(); (Ta dando erro n sei pq)

    //Atualizando os Campos
    refreshCamposTransacao();

    ui->resultLabel->setText("Transação atualizada com sucesso !");
}


void edittransacao::on_CadastrarPushButton_clicked()
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
            itr->precoTotal = QString::number( itr->quantidade.toFloat() * itr->preco.replace(',','.').toFloat() );
            in = true;
            break;
        }
    }

    //Adiciona a estrutura em um container de linhas caso o seu repectivo produto já nao estja presente
    if (!in){   linhas.push_back(novaLinha);  }


    //Atualiza a tabela
    refreshTable();

    //Atualizando os produtos do comboBox
    refreshProds();

    //Exibindo exito da operação para o usuário
    if (in) { ui->resultLabel->setText("Quantidade do produto atualizada !"); }
    else { ui->resultLabel->setText("Produto Adicionado ao Carrinho !"); }

    //Reseta valro do spin
    ui->prodSpinBox->setValue(1);

}


void edittransacao::on_DeletarPushButton_clicked()
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
    for(itr = linhas.begin(); itr != linhas.end(); itr++){

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

    //Atualizando os produtos do comboBox
    refreshProds();

    //Exibindo resultado da operação para o usuário
    if (!in) { ui->resultLabel->setText("Produto não esta presente no carrinho !"); }
    else if(delTotal) { ui->resultLabel->setText("Produto deletado do carrinho !"); }
    else { ui->resultLabel->setText("Quantidade do produto atualizada no carrinho !"); }


    //Reseta valro do spin
    ui->prodSpinBoxDel->setValue(1);
}

