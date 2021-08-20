#include "exclutransacao.h"
#include "ui_exclutransacao.h"

exclutransacao::exclutransacao(QWidget *parent, QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::exclutransacao)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
}

exclutransacao::~exclutransacao()
{
    delete ui;
}

void exclutransacao::on_voltar_clicked()
{
    janelaParent->show();
    this->close();
    delete this;
}

