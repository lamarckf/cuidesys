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
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private: // Atributos
    Ui::CadAdm *ui;

    QSqlDatabase *bancoDeDados;

    QWidget * janelaParent;
};

#endif // CADADM_H
