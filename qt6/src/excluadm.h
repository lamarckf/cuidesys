#ifndef EXCLUADM_H
#define EXCLUADM_H

#include <QMainWindow>
#include <QtSql>

/*
    Exclui Admin
    Classe responsavel pelas interfaces de exclusão dos usuaros
    A classe está herdando da classe QMainWindow
*/


namespace Ui {
class ExcluAdm;
}

class ExcluAdm : public QMainWindow
{
    Q_OBJECT

public:
    explicit ExcluAdm(QWidget *parent = nullptr,  QSqlDatabase *bd = nullptr); // Construtor
    ~ExcluAdm();

private slots: // Metodos de eventos
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void refreshComboBox();

private: // Atributos
    Ui::ExcluAdm *ui;

    QSqlDatabase *bancoDeDados;

    QWidget *janelaParent;
};

#endif // EXCLUADM_H
