#include "janelalogin.h"
#include "ui_janelalogin.h"

/*
 * Classe Responsavel pela interface da tela de login
 *
 *
 */

JanelaLogin::JanelaLogin(QWidget *parent) //construtor
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);
    bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");   // Conexao com banco de dado
    //bancoDeDados.setDatabaseName("/home/letrus/Documents/cuidesys/qt6/src/data");
    //QFileInfo checkFile("/home/letrus/Documents/cuidesys/qt6/src/data");
    //bancoDeDados.setDatabaseName("C:/Users/johns/Downloads/Nova pasta/cuidesys/qt6/src/data");
    //QFileInfo checkFile("C:/Users/johns/Downloads/Nova pasta/cuidesys/qt6/src/data");
    bancoDeDados.setDatabaseName("/home/vinicius/Documentos/UFOP/ENG 1/cuidesys/qt6/src/data");
    QFileInfo checkFile("/home/vinicius/Documentos/UFOP/ENG 1/cuidesys/qt6/src/data");



    if(checkFile.isFile())    // checkagem da conexao de banco de dados
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

JanelaLogin::~JanelaLogin() // fechando a conexao com banco de dados
{
    delete ui;
    qDebug()<<"Closing the connection to Database file on exit";
    bancoDeDados.close();
}


void JanelaLogin::on_btn_limpar_clicked()  // Botao que limpa os dados de input
{
    ui->textUSer->setText("");
    ui->textPass->setText("");
}


void JanelaLogin::on_btn_login_clicked() //Autenticação de dados de login
{
    QString username, password;
    username = ui->textUSer->text();
    password = ui->textPass->text();
    if(!bancoDeDados.isOpen()) //Verificação de conexao com banco de dados
    {
        qDebug()<<"No conection to DataBase";
        return;
    }
    QSqlQuery qry;
    bool teste =qry.exec("SELECT userName, password FROM tb_adm WHERE userName==\'" + username + "\' AND password==\'" + password +"\'" );
    //qDebug()<<qry.boundValues();
    //qDebug()<<teste;
    if(teste)
    {
        //ui->label->setText("[+] passou2");
        if(qry.next())
        {
            ui->label->setText("[+] Status");
            ui->textUSer->setText("");
            ui->textPass->setText("");
            this->hide();
            janela=new janelaInicial(this, &bancoDeDados);  // Instanciação de execução da tela do ambiente de usuaro
            janela->show();

        }
        else
        {
            ui->label->setText("[-] Wrong Username or Password");
        }
    }
}

