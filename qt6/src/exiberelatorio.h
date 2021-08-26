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
    explicit exiberelatorio(QWidget *parent = nullptr, QSqlDatabase *bd = nullptr, QString *type= nullptr, QString *transacaoInicio= nullptr, QString *transacaoFim= nullptr );
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
    QString *tInicio;
    QString *tFim;
};

#endif // EXIBERELATORIO_H
