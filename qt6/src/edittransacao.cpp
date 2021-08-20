#include "edittransacao.h"
#include "ui_edittransacao.h"

edittransacao::edittransacao(QWidget *parent, QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::edittransacao)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
}

edittransacao::~edittransacao()
{
    delete ui;
}

void edittransacao::on_voltar_clicked()
{
    janelaParent->show();
    this->close();
    delete this;
}

