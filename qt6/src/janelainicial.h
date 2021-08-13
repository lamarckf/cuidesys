#ifndef JANELAINICIAL_H
#define JANELAINICIAL_H

#include <QMainWindow>

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

private:
    Ui::janelaInicial *ui;
    QWidget *janela;
};

#endif // JANELAINICIAL_H
