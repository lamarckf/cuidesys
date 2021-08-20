#include "cadtransacao.h"
#include "ui_cadtransacao.h"

cadtransacao::cadtransacao(QWidget *parent, QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::cadtransacao)
{
    ui->setupUi(this);
    ui->prodComboBox->addItem("Escolha tipo de transação:");
    ui->prodComboBox->addItem("Venda");
    ui->prodComboBox->addItem("Compra");
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

