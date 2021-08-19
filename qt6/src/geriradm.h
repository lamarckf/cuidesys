#ifndef GERIRADM_H
#define GERIRADM_H

#include <QMainWindow>
#include <QtSql>
#include "cadadm.h"
#include "editadm.h"
#include "excluadm.h"


/*
    Classe responsavel pela gerencia de usuarios
*/


namespace Ui {
class gerirAdm;
}

class gerirAdm : public QMainWindow
{
    Q_OBJECT

public:
    explicit gerirAdm(QWidget *parent = nullptr,  QSqlDatabase *bd = nullptr); // construtor
    ~gerirAdm(); // destrutor

private slots: // Metodos de eventos
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private: // Atributos

   /*
    * Referencia para os componentes da interface grafica
    */
    Ui::gerirAdm *ui;

    /*
     * Referencia para conexao com o banco de dados
     */
    QSqlDatabase *bancoDeDados;

    /*
     * Referencia para janela criadora
     */
    QWidget *janelaParent;

    CadAdm *janelaCadAdm;

    EditAdm *janelaEditAdm;

    ExcluAdm *janelaExcluAdm;
};

#endif // GERIRADM_H
