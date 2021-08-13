#include "janelalogin.h"
#include "ui_janelalogin.h"

JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);
    this->close();
    fn_login fn_login;
    fn_login.setModal(true);
    fn_login.exec();
}

JanelaLogin::~JanelaLogin()
{
    delete ui;
}

