#ifndef CADTRANSACAO_H
#define CADTRANSACAO_H

#include <QMainWindow>
#include <QtSql>

namespace Ui {
class cadtransacao;
}

class cadtransacao : public QMainWindow
{
    Q_OBJECT

public:
    explicit cadtransacao(QWidget *parent = nullptr, QSqlDatabase *bd = nullptr);
    ~cadtransacao();

private slots:

    void on_voltar_clicked();

private:
    Ui::cadtransacao *ui;
    /*
    * Referencia para conexao com o banco de dados
    */
    QSqlDatabase *bancoDeDados;

   /*
    * Referencia para janela criadora
    */
    QWidget *janelaParent;
};

#endif // CADTRANSACAO_H
