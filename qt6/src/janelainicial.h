#ifndef JANELAINICIAL_H
#define JANELAINICIAL_H

#include <QMainWindow>
#include "geriradm.h"
namespace Ui {
class janelaInicial;
}

class janelaInicial : public QMainWindow
{
    Q_OBJECT

public:
    explicit janelaInicial(QWidget *parent = nullptr);
    ~janelaInicial();

private slots:
    void on_bt_logout_clicked();

    void on_bt_Cadasto_clicked();

    void on_bt_admin_clicked();

private:
    Ui::janelaInicial *ui;
    QWidget *janela;
    gerirAdm *janelaGerir;
};

#endif // JANELAINICIAL_H
