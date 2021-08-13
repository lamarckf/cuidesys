#ifndef FN_LOGIN_H
#define FN_LOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>
#include "fn_principal.h"

namespace Ui {
class fn_login;
}

class fn_login : public QDialog
{
    Q_OBJECT

public:
    explicit fn_login(QWidget *parent = nullptr);
    ~fn_login();

private slots:
    void on_btn_login_clicked();

    void on_btn_limpar_clicked();

private:
    Ui::fn_login *ui;
    QSqlDatabase bancoDeDados;
};

#endif // FN_LOGIN_H
