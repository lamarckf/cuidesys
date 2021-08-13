#include "geriradm.h"
#include "ui_geriradm.h"

gerirAdm::gerirAdm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gerirAdm)
{
    ui->setupUi(this);
    janela = parent;
}

gerirAdm::~gerirAdm()
{
    delete ui;
}

void gerirAdm::on_pushButton_4_clicked()
{

    janela->show();
    this->close();
}

