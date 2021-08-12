#include "janelalogin.h"
#include "ui_janelalogin.h"

JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);
}

JanelaLogin::~JanelaLogin()
{
    delete ui;
}

