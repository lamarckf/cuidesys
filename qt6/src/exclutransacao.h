#ifndef EXCLUTRANSACAO_H
#define EXCLUTRANSACAO_H

#include <QMainWindow>
#include <QtSql>

namespace Ui {
class exclutransacao;
}

class exclutransacao : public QMainWindow
{
    Q_OBJECT

public:
    explicit exclutransacao(QWidget *parent = nullptr, QSqlDatabase *bd = nullptr);
    ~exclutransacao();

private slots:
    void on_voltar_clicked();

private:
    Ui::exclutransacao *ui;
    /*
    * Referencia para conexao com o banco de dados
    */
    QSqlDatabase *bancoDeDados;

   /*
    * Referencia para janela criadora
    */
    QWidget *janelaParent;
};

#endif // EXCLUTRANSACAO_H
