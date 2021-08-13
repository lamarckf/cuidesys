#ifndef CADADM_H
#define CADADM_H

#include <QMainWindow>
#include <QtSql>

namespace Ui {
class CadAdm;
}

class CadAdm : public QMainWindow
{
    Q_OBJECT

public:
    explicit CadAdm(QWidget *parent = nullptr, QSqlDatabase *bd = nullptr);
    ~CadAdm();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::CadAdm *ui;

    QSqlDatabase *bancoDeDados;

    QWidget * janelaParent;
};

#endif // CADADM_H
