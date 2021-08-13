#include "janelalogin.h"
#include "ui_janelalogin.h"

JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);
    bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");
    bancoDeDados.setDatabaseName("./data");
    QFileInfo checkFile("./data");

    if(checkFile.isFile())
    {
        if(bancoDeDados.open())
        {
            ui->label->setText("{+} Connect  to DataBase");
        }
    }
    else
    {
        ui->label->setText("{!} DataBase file doesnot exist");
    }

}

JanelaLogin::~JanelaLogin()
{
    delete ui;
    qDebug()<<"Closing the connection to Database file on exit";
    bancoDeDados.close();
}


void JanelaLogin::on_btn_limpar_clicked()
{
    ui->textUSer->setText("");
    ui->textPass->setText("");
}


void JanelaLogin::on_btn_login_clicked()
{
    QString username, password;
    username = ui->textUSer->text();
    password = ui->textPass->text();
    if(!bancoDeDados.isOpen())
    {
        qDebug()<<"No conection to DataBase";
        return;
    }
    ui->label->setText("[+] passou1");
    QSqlQuery qry;
    bool teste = qry.exec("SELECT user, password FROM tb_user WHERE user=\'" + username + "\' AND password=\'" + password +"\'" );
    qDebug()<<teste;
    if(teste)
    {
        ui->label->setText("[+] passou2");
        if(qry.next())
        {
            ui->label->setText("[+] Valid Username ans Password");

        }
        else
        {
            ui->label->setText("[-] Wrong USername or Password");
        }
    }
}

