#include "exiberelatorio.h"
#include "ui_exiberelatorio.h"

exiberelatorio::exiberelatorio(QWidget *parent, QSqlDatabase *bd, QString *type, int *transacaoInicio, int *transacaoFim) :
    QMainWindow(parent),
    ui(new Ui::exiberelatorio)
{
    ui->setupUi(this);

    janelaParent = parent;
    bancoDeDados = bd;
    tipo= type;
    tInicio= transacaoInicio;
    tFim = transacaoFim;
    ui->relatorio->setText(*tipo);
}

exiberelatorio::~exiberelatorio()
{
    delete ui;

}

void exiberelatorio::on_bt_voltar_clicked()
{
    janelaParent->show();
    this->close();
    delete this;
}

