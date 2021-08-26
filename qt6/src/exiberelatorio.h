#ifndef EXIBERELATORIO_H
#define EXIBERELATORIO_H

#include <QMainWindow>
#include <QtSql>

namespace Ui {
class exiberelatorio;
}

class exiberelatorio : public QMainWindow
{
    Q_OBJECT

public:
    explicit exiberelatorio(QWidget *parent = nullptr, QSqlDatabase *bd = nullptr, QString *type= nullptr, int *transacaoInicio= nullptr, int *transacaoFim= nullptr );
    ~exiberelatorio();

private slots:
    void on_bt_voltar_clicked();

private:
    Ui::exiberelatorio *ui;
    /*
    * Referencia para conexao com o banco de dados
    */
    QSqlDatabase *bancoDeDados;

   /*
    * Referencia para janela criadora
    */
    QWidget *janelaParent;
    QString *tipo;
    int *tInicio;
    int *tFim;
};

#endif // EXIBERELATORIO_H
