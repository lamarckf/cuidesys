#include "geriradm.h"
#include "ui_geriradm.h"

gerirAdm::gerirAdm(QWidget *parent,  QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::gerirAdm)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
}

gerirAdm::~gerirAdm()
{
    delete ui;
}

void gerirAdm::on_pushButton_4_clicked()
{

    janelaParent->show();
    this->close();
    delete this;
}


void gerirAdm::on_pushButton_clicked()
{
    this->hide();
    janelaCadAdm = new CadAdm(this, bancoDeDados);
    janelaCadAdm->show();
}


void gerirAdm::on_pushButton_2_clicked()
{
    this->hide();
    janelaEditAdm = new EditAdm(this, bancoDeDados);
    janelaEditAdm->show();
}


void gerirAdm::on_pushButton_3_clicked()
{
    this->hide();
    janelaExcluAdm = new ExcluAdm(this, bancoDeDados);
    janelaExcluAdm->show();
}

