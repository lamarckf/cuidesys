#include "janelainicial.h"
#include "ui_janelainicial.h"

janelaInicial::janelaInicial(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::janelaInicial)
{
    ui->setupUi(this);
    janela = parent;
}

janelaInicial::~janelaInicial()
{
    delete ui;
}

void janelaInicial::on_bt_logout_clicked()
{
    janela->show();
    this->close();
}

