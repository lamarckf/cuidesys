#include "fn_principal.h"
#include "ui_fn_principal.h"

fn_principal::fn_principal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fn_principal)
{
    ui->setupUi(this);
}

fn_principal::~fn_principal()
{
    delete ui;
}

void fn_principal::on_bn_logout_clicked()
{

    this->close();
    fn_login fn_login;
    fn_login.setModal(true);
    fn_login.exec();


}

