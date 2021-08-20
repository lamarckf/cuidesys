#ifndef EDITTRANSACAO_H
#define EDITTRANSACAO_H

#include <QMainWindow>
#include <QtSql>

namespace Ui {
class edittransacao;
}

class edittransacao : public QMainWindow
{
    Q_OBJECT

public:
    explicit edittransacao(QWidget *parent = nullptr, QSqlDatabase *bd = nullptr);
    ~edittransacao();

private slots:
    void on_voltar_clicked();

private:
    Ui::edittransacao *ui;
    /*
    * Referencia para conexao com o banco de dados
    */
    QSqlDatabase *bancoDeDados;

   /*
    * Referencia para janela criadora
    */
    QWidget *janelaParent;
};

#endif // EDITTRANSACAO_H
