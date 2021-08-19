#ifndef EDITADM_H
#define EDITADM_H

#include <QMainWindow>
#include <QtSql>

/*
    Classe responsavel pela atualizaçao de dados do admin
*/

namespace Ui {
class EditAdm;
}

class EditAdm : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditAdm(QWidget *parent = nullptr,  QSqlDatabase *bd = nullptr);  // construtor
    ~EditAdm(); // destrutor

private slots:  //Metodos de eventos (clique)
    void on_pushButton_2_clicked();
    void refreshComboBox();

    void on_pushButton_clicked();

private: // Atributos


    Ui::EditAdm *ui;

    /*
    * Referencia para conexao com o banco de dados
    */
    QSqlDatabase *bancoDeDados;

   /*
    * Referencia para janela criadora
    */
    QWidget *janelaParent;
};

#endif // EDITADM_H
