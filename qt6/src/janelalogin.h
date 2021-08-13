#ifndef JANELALOGIN_H
#define JANELALOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>
#include "janelainicial.h"

/*
 * Classe Responsavel pela interface da tela de login
 *
 *
 */

QT_BEGIN_NAMESPACE
namespace Ui { class JanelaLogin; }
QT_END_NAMESPACE

class JanelaLogin : public QMainWindow
{
    Q_OBJECT

public:
    JanelaLogin(QWidget *parent = nullptr); // construtor da classe
    ~JanelaLogin(); // destrutor

private slots: //Metdos de eventos
    void on_btn_limpar_clicked();

    void on_btn_login_clicked();

private: //Atributos
    Ui::JanelaLogin *ui;
    QSqlDatabase bancoDeDados;
    janelaInicial *janela;
};
#endif // JANELALOGIN_H
