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

}

