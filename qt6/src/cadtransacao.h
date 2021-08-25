#ifndef CADTRANSACAO_H
#define CADTRANSACAO_H

#include <QMainWindow>
#include <QtSql>
#include <vector>


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
    /*
     * Atualiza o combobox com os produtos presentes no banco de dados
     */
    void refreshProds();

    /*
     * Atualiza a tabela com os produtos adicionados a transação
     */
    void refreshTable();


    /*
     * Define ação quando o botão de voltar é clickado
     */
    void on_voltar_clicked();

    /*
     * Define ação quando o botão de cadastrar produto é clickado
     */
    void on_CadastrarPushButton_clicked();


    /*
     * Define ação quando o botão de deletar produto é clickado
     */
    void on_DeletarPushButton_clicked();

    /*
     * Define ação quando o botão de confimar transação é clickado
     */
    void on_confirmarPushButton_clicked();


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

    /*
     *  Armezena campos necessário para um linha da tabela
     */
    struct linha{
        QString nomeProduto;
        QString quantidade;
        QString preco;
        QString precoTotal;
    };

    /*
     *  Todas as linhas da tabela
     */
    std::vector<linha> linhas;

};

#endif // CADTRANSACAO_H
