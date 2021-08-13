#ifndef EDITADM_H
#define EDITADM_H

#include <QMainWindow>
#include <QtSql>

namespace Ui {
class EditAdm;
}

class EditAdm : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditAdm(QWidget *parent = nullptr,  QSqlDatabase *bd = nullptr);
    ~EditAdm();

private slots:
    void on_pushButton_2_clicked();
    void refreshComboBox();

    void on_pushButton_clicked();

private:
    Ui::EditAdm *ui;

    QSqlDatabase *bancoDeDados;

    QWidget * janelaParent;
};

#endif // EDITADM_H
