#ifndef JANELAINICIAL_H
#define JANELAINICIAL_H

#include <QMainWindow>
#include <QtSql>
#include <QFileInfo>

#include "geriradm.h"

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

private: // Atributos
    Ui::janelaInicial *ui;

    QSqlDatabase *bancoDeDados;

    QWidget *janelaParent;
    gerirAdm *janelaGerir;
};

#endif // JANELAINICIAL_H
