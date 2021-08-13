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

private:
    Ui::janelaInicial *ui;
};

#endif // JANELAINICIAL_H
