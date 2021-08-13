#include "janelainicial.h"
#include "ui_janelainicial.h"

janelaInicial::janelaInicial(QWidget *parent, QSqlDatabase* bd) :
    QMainWindow(parent),
    ui(new Ui::janelaInicial)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
}

janelaInicial::~janelaInicial()
{
    delete ui;
}

void janelaInicial::on_bt_logout_clicked()
{
    janelaParent->show();
    this->close();
    delete this;
}




void janelaInicial::on_bt_admin_clicked()
{
    this->hide();
    janelaGerir = new gerirAdm(this, bancoDeDados);
    janelaGerir->show();

}

