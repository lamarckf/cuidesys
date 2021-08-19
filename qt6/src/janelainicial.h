#ifndef JANELAINICIAL_H
#define JANELAINICIAL_H

#include <QMainWindow>
#include <QtSql>
#include <QFileInfo>

#include "geriradm.h"
#include "gerirestoque.h"


/*
    Classe resposavel pela interface do ambiente do usuario logado
*/

namespace Ui {
class janelaInicial;
}

class janelaInicial : public QMainWindow
{
    Q_OBJECT

public:
    explicit janelaInicial(QWidget *parent = nullptr, QSqlDatabase *bd = nullptr);// Construtor da classe
    ~janelaInicial();  // Destrutor da classe

private slots:  // Metodos

    void on_bt_logout_clicked();

    void on_bt_admin_clicked();

    void on_bt_estoque_clicked();

private: // Atributos

    /*
     * Referencia para os componentes da interface grafica
     */
    Ui::janelaInicial *ui;

    /*
     * Referencia para conexao com o banco de dados
     */
    QSqlDatabase *bancoDeDados;

    /*
     * Referencia para janela criadora de janelaInicial
     */
    QWidget* janelaParent;

    /*
     * Referencia para janela de Gestão de Administradores
     */
    gerirAdm* janelaGerirAdm;

    /*
     * Referencias para janela de Gestão de Estoques
     */
    GerirEstoque* janelaGerirEstoque;

};

#endif // JANELAINICIAL_H
