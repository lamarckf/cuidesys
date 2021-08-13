#include "editadm.h"
#include "ui_editadm.h"

EditAdm::EditAdm(QWidget *parent,  QSqlDatabase *bd) :
    QMainWindow(parent),
    ui(new Ui::EditAdm)
{
    ui->setupUi(this);
    janelaParent = parent;
    bancoDeDados = bd;
}

EditAdm::~EditAdm()
{
    delete ui;
}

void EditAdm::on_pushButton_2_clicked()
{
    janelaParent->show();
    this->close();
    delete this;
}

