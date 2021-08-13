#include "fn_login.h"
#include "ui_fn_login.h"

fn_login::fn_login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fn_login)
{
    ui->setupUi(this);
    bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");
    bancoDeDados.setDatabaseName("/home/letrus/Documents/cuidesys/qt6/src/data");
    QFileInfo checkFile("/home/letrus/Documents/cuidesys/qt6/src/data");

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

fn_login::~fn_login()
{
    delete ui;
    qDebug()<<"Closing the connection to Database file on exit";
    bancoDeDados.close();
}

void fn_login::on_btn_login_clicked()
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
    if(qry.exec("SELECT user, password FROM tb_user WHERE user==\'" + username + "\' AND password==\'" + password +"\'" ))
    {
        ui->label->setText("[+] passou2");
        if(qry.next())
        {
            ui->label->setText("[+] Valid Username ans Password");
            ui->textUSer->setText("");
            ui->textPass->setText("");
            this->close();
            fn_principal fn_principal;
            fn_principal.setModal(true);
            fn_principal.exec();
        }
        else
        {
            ui->label->setText("[-] Wrong USername or Password");
        }
    }
}


void fn_login::on_btn_limpar_clicked()
{
    ui->textUSer->setText("");
    ui->textPass->setText("");
}

