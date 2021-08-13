#ifndef GERIRADM_H
#define GERIRADM_H

#include <QMainWindow>

namespace Ui {
class gerirAdm;
}

class gerirAdm : public QMainWindow
{
    Q_OBJECT

public:
    explicit gerirAdm(QWidget *parent = nullptr);
    ~gerirAdm();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::gerirAdm *ui;
    QWidget *janela;
};

#endif // GERIRADM_H
