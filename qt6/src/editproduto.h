#ifndef EDITPRODUTO_H
#define EDITPRODUTO_H

#include <QMainWindow>
#include <QtSql>

namespace Ui {
class EditProduto;
}

class EditProduto : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditProduto(QWidget *parent = nullptr,  QSqlDatabase *bd = nullptr);
    ~EditProduto();

private slots:

    /*
     * Define o comportamento da classe ao se clicar no botão de voltar
     */
    void on_pushButton_2_clicked();

    /*
     * Define o comportamento da classe ao se clicar no botão de confirmar
     */
    void on_bt_confirmar_clicked();

private:

    /*
     * Referencia para os componentes da interface grafica
     */
    Ui::EditProduto *ui;

    /*
    * Referencia para conexao com o banco de dados
    */
    QSqlDatabase *bancoDeDados;

   /*
    * Referencia para janela criadora
    */
    QWidget *janelaParent;
};

#endif // EDITPRODUTO_H
