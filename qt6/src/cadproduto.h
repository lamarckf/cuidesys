#ifndef CADPRODUTO_H
#define CADPRODUTO_H

#include <QMainWindow>
#include <QtSql>

namespace Ui {
class CadProduto;
}

class CadProduto : public QMainWindow
{
    Q_OBJECT

public:
    explicit CadProduto(QWidget *parent = nullptr, QSqlDatabase *bd = nullptr);
    ~CadProduto();

private slots:
    /*
     * Define o comportamento da classe ao se clicar no botão de confirmar
     */
    void on_pushButton_clicked();

    /*
     * Define o comportamento da classe ao se clicar no botão de voltar
     */
    void on_pushButton_2_clicked();

private:
    /*
     * Referencia para os componentes da interface grafica
     */
    Ui::CadProduto *ui;

    /*
    * Referencia para conexao com o banco de dados
    */
    QSqlDatabase *bancoDeDados;

   /*
    * Referencia para janela criadora
    */
    QWidget *janelaParent;
};

#endif // CADPRODUTO_H
