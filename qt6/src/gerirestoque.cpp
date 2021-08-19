#include "gerirestoque.h"
#include "ui_gerirestoque.h"

GerirEstoque::GerirEstoque(QWidget *parent, QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::GerirEstoque)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
    //CONFERINDO CONEXÃO

}

GerirEstoque::~GerirEstoque()
{
    delete ui;
}

void GerirEstoque::on_bt_voltar_clicked()
{

    janelaParent->show();
    this->close();
    delete this;
}


void GerirEstoque::on_bt_cad_produto_clicked()
{
    this->hide();
    janelaCadProduto = new CadProduto(this,bancoDeDados);
    janelaCadProduto->show();
}


void GerirEstoque::on_bt_edit_produto_clicked()
{
    this->hide();
    janelaEditProduto = new EditProduto(this,bancoDeDados);
    janelaEditProduto->show();
}


void GerirEstoque::on_bt_excl_produto_clicked()
{
    this->hide();
    janelaExcluProduto = new ExcluProduto(this,bancoDeDados);
    janelaExcluProduto->show();
}

