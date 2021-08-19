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

}

