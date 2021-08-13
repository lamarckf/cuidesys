#include "janelalogin.h"
#include "ui_janelalogin.h"

JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);
    bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");
    //bancoDeDados.setDatabaseName("/home/letrus/Documents/cuidesys/qt6/src/data");
    //QFileInfo checkFile("/home/letrus/Documents/cuidesys/qt6/src/data");
    bancoDeDados.setDatabaseName("/home/vinicius/Documentos/UFOP/ENG 1/cuidesys/qt6/src/data");
    QFileInfo checkFile("/home/vinicius/Documentos/UFOP/ENG 1/cuidesys/qt6/src/data");

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
    QSqlQuery qry;
    bool teste =qry.exec("SELECT userName, password FROM tb_adm WHERE userName==\'" + username + "\' AND password==\'" + password +"\'" );
    qDebug()<<qry.boundValues();
    qDebug()<<teste;
    if(teste)
    {
        ui->label->setText("[+] passou2");
        if(qry.next())
        {
            ui->label->setText("[+] Status");
            ui->textUSer->setText("");
            ui->textPass->setText("");
            this->hide();
            janela=new janelaInicial(this, &bancoDeDados);
            janela->show();

        }
        else
        {
            ui->label->setText("[-] Wrong Username or Password");
        }
    }
}

