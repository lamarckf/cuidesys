#ifndef GERIRRELATORIO_H
#define GERIRRELATORIO_H

#include <QMainWindow>
#include <QtSql>
#include <string.h>
#include <stdlib.h>
#include "exiberelatorio.h"
using namespace std;

namespace Ui {
class gerirrelatorio;
}

class gerirrelatorio : public QMainWindow
{
    Q_OBJECT

public:
    explicit gerirrelatorio(QWidget *parent = nullptr, QSqlDatabase *bd = nullptr);
    ~gerirrelatorio();

private slots:
    void on_bt_voltar_clicked();

    void on_confirmar_clicked();

private:
    Ui::gerirrelatorio *ui;
    /*
    * Referencia para conexao com o banco de dados
    */
    QSqlDatabase *bancoDeDados;

   /*
    * Referencia para janela criadora
    */
    QWidget *janelaParent;

    void refreshRelatorio();
    void refreshTransacaoInicial();
    void refreshTransacaoFinal();

    exiberelatorio *JanelaExibeRelatorio;
};
#endif // GERIRRELATORIO_H
