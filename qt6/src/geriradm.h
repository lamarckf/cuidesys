#ifndef GERIRADM_H
#define GERIRADM_H

#include <QMainWindow>
#include <QtSql>
#include "cadadm.h"
#include "editadm.h"
#include "excluadm.h"


namespace Ui {
class gerirAdm;
}

class gerirAdm : public QMainWindow
{
    Q_OBJECT

public:
    explicit gerirAdm(QWidget *parent = nullptr,  QSqlDatabase *bd = nullptr);
    ~gerirAdm();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::gerirAdm *ui;

    QSqlDatabase *bancoDeDados;

    QWidget *janelaParent;
    CadAdm *janelaCadAdm;
    EditAdm *janelaEditAdm;
    ExcluAdm *janelaExcluAdm;
};

#endif // GERIRADM_H
