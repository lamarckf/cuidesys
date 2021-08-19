#ifndef CADADM_H
#define CADADM_H

#include <QMainWindow>
#include <QtSql>

/*
classe responsavel pela interface do cadastro dos adms
*/

namespace Ui {
class CadAdm;
}

class CadAdm : public QMainWindow
{
    Q_OBJECT

public:
    explicit CadAdm(QWidget *parent = nullptr, QSqlDatabase *bd = nullptr); //  construtor
    ~CadAdm(); // destrtutor

private slots: // Metodos de eventos(Botões)

    void on_bt_voltar_clicked();

    void on_bt_confirmar_clicked();

private: // Atributos
    Ui::CadAdm *ui;

    /*
    * Referencia para conexao com o banco de dados
    */
    QSqlDatabase *bancoDeDados;

   /*
    * Referencia para janela criadora
    */
    QWidget *janelaParent;
};

#endif // CADADM_H
