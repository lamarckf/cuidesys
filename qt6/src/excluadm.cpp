#include "excluadm.h"
#include "ui_excluadm.h"

ExcluAdm::ExcluAdm(QWidget *parent,  QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::ExcluAdm)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
}

ExcluAdm::~ExcluAdm()
{
    delete ui;
}

void ExcluAdm::on_pushButton_2_clicked()
{
    janelaParent->show();
    this->close();
    delete this;
}

