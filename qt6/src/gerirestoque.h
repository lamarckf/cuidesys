#ifndef GERIRESTOQUE_H
#define GERIRESTOQUE_H

#include <QMainWindow>
#include <QtSql>

#include "cadproduto.h"
#include "editproduto.h"
#include "excluproduto.h"

/*
*    Classe responsavel pelo gerenciamento de estoque
*/

namespace Ui {
class GerirEstoque;
}

class GerirEstoque : public QMainWindow
{
    Q_OBJECT

public:
    explicit GerirEstoque(QWidget *parent = nullptr, QSqlDatabase *bd = nullptr);
    ~GerirEstoque();

private slots:

    /*
     * Define o comportamento da classe ao se clicar no botão de voltar
     */
    void on_bt_voltar_clicked();

    void on_bt_cad_produto_clicked();

    void on_bt_edit_produto_clicked();

    void on_bt_excl_produto_clicked();

private:

   /*
    * Referencia para os componentes da interface grafica
    */
    Ui::GerirEstoque *ui;

    /*
    * Referencia para conexao com o banco de dados
    */
    QSqlDatabase *bancoDeDados;

   /*
    * Referencia para janela criadora
    */
    QWidget *janelaParent;

    /*
     * Referencia para janela para Cadastrar um Produto
     */
    CadProduto* janelaCadProduto;

    /*
     * Referencia para janela para Editar um Produto
     */
    EditProduto* janelaEditProduto;

    /*
     * Referencia para janela para Excluir um Produto
     */
    ExcluProduto* janelaExcluProduto;
};

#endif // GERIRESTOQUE_H
