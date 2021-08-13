#include "janelainicial.h"
#include "ui_janelainicial.h"

janelaInicial::janelaInicial(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::janelaInicial)
{
    ui->setupUi(this);
}

janelaInicial::~janelaInicial()
{
    delete ui;
}
