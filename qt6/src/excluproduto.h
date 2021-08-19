#ifndef EXCLUPRODUTO_H
#define EXCLUPRODUTO_H

#include <QMainWindow>
#include <QtSql>

namespace Ui {
class ExcluProduto;
}

class ExcluProduto : public QMainWindow
{
    Q_OBJECT

public:
    explicit ExcluProduto(QWidget *parent = nullptr,  QSqlDatabase *bd = nullptr);
    ~ExcluProduto();

private slots:

    /*
     * Define o comportamento da classe ao se clicar no botão de voltar
     */
    void on_bt_voltar_clicked();

    /*
     * Define o comportamento da classe ao se clicar no botão de confirmar
     */
    void on_bt_confirmar_clicked();

private:

    /*
     * Referencia para os componentes da interface grafica
     */
    Ui::ExcluProduto *ui;

    /*
    * Referencia para conexao com o banco de dados
    */
    QSqlDatabase *bancoDeDados;

   /*
    * Referencia para janela criadora
    */
    QWidget *janelaParent;
};

#endif // EXCLUPRODUTO_H
