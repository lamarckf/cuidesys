#ifndef FN_PRINCIPAL_H
#define FN_PRINCIPAL_H
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>
#include "fn_login.h"

namespace Ui {
class fn_principal;
}

class fn_principal : public QDialog
{
    Q_OBJECT

public:
    explicit fn_principal(QWidget *parent = nullptr);
    ~fn_principal();

private slots:
    void on_bn_logout_clicked();

private:
    Ui::fn_principal *ui;
};

#endif // FN_PRINCIPAL_H
