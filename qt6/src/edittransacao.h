#ifndef EDITTRANSACAO_H
#define EDITTRANSACAO_H

#include <QMainWindow>
#include <QtSql>
#include <vector>

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

    /*
     * Define ação quando o botão de voltar é clickado
     */
    void on_voltarPushButton_clicked();

    /*
     * Define ação quando o botão para aplicar alterações
     */
    void on_aplicarPushButton_clicked();

    /*
     * Define ação o item selecionado no combobox é alterado
     */
    void on_transacaoComboBox_currentIndexChanged(int);

    /*
     * Define ação quando o botão de cadastrar produto é clickado
     */
    void on_CadastrarPushButton_clicked();

    /*
     * Define ação quando o botão de deletar produto é clickado
     */
    void on_DeletarPushButton_clicked();


    /*
     * Atualiza o combobox com os produtos presentes no banco de dados
     */
    void refreshProds();

    /*
     * Atualiza o combobox com as transacoes presentes no banco de dados
     */
    void refreshTransacoes();

    /*
     * Atualiza os campos com os dados trasação selecionada no momento
     */
    void refreshCamposTransacao();

    /*
     * Atualiza a tabela com os produtos adicionados a transação
     */
    void refreshTable();




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

#endif // EDITTRANSACAO_H
