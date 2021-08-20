#ifndef GERIRTRANSACAO_H
#define GERIRTRANSACAO_H

#include <QMainWindow>
#include <QtSql>
#include "cadtransacao.h"

namespace Ui {
class gerirtransacao;
}

class gerirtransacao : public QMainWindow
{
    Q_OBJECT

public:
     explicit gerirtransacao(QWidget *parent = nullptr, QSqlDatabase *bd = nullptr);
    ~gerirtransacao();

private slots:
    void on_pushButton_4_clicked();

    void on_cadastrar_clicked();

    void on_editar_clicked();

    void on_excluir_clicked();

private:
    Ui::gerirtransacao *ui;
    /*
    * Referencia para conexao com o banco de dados
    */
    QSqlDatabase *bancoDeDados;

   /*
    * Referencia para janela criadora
    */
    QWidget *janelaParent;

    cadtransacao *janelaCadTransacao;
};

#endif // GERIRTRANSACAO_H
