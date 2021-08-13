#ifndef EXCLUADM_H
#define EXCLUADM_H

#include <QMainWindow>
#include <QtSql>

namespace Ui {
class ExcluAdm;
}

class ExcluAdm : public QMainWindow
{
    Q_OBJECT

public:
    explicit ExcluAdm(QWidget *parent = nullptr,  QSqlDatabase *bd = nullptr);
    ~ExcluAdm();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::ExcluAdm *ui;

    QSqlDatabase *bancoDeDados;

    QWidget *janelaParent;
};

#endif // EXCLUADM_H
