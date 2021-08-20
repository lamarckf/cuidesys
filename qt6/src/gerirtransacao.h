#ifndef GERIRTRANSACAO_H
#define GERIRTRANSACAO_H

#include <QMainWindow>
#include <QtSql>

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
};

#endif // GERIRTRANSACAO_H
