/********************************************************************************
** Form generated from reading UI file 'janelainicial.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELAINICIAL_H
#define UI_JANELAINICIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_janelaInicial
{
public:
    QWidget *centralwidget;
    QPushButton *bt_logout;
    QLabel *label;
    QLabel *label_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *bt_admin;
    QPushButton *bt_transacoes;
    QPushButton *bt_estoque;
    QPushButton *bt_relatorio;
    QPushButton *bt_sair;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *janelaInicial)
    {
        if (janelaInicial->objectName().isEmpty())
            janelaInicial->setObjectName(QString::fromUtf8("janelaInicial"));
        janelaInicial->resize(800, 600);
        centralwidget = new QWidget(janelaInicial);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        bt_logout = new QPushButton(centralwidget);
        bt_logout->setObjectName(QString::fromUtf8("bt_logout"));
        bt_logout->setGeometry(QRect(670, 10, 89, 25));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 60, 67, 19));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 10, 541, 141));
        QFont font;
        font.setPointSize(35);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(220, 130, 341, 271));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        bt_admin = new QPushButton(widget);
        bt_admin->setObjectName(QString::fromUtf8("bt_admin"));

        verticalLayout->addWidget(bt_admin);

        bt_transacoes = new QPushButton(widget);
        bt_transacoes->setObjectName(QString::fromUtf8("bt_transacoes"));

        verticalLayout->addWidget(bt_transacoes);

        bt_estoque = new QPushButton(widget);
        bt_estoque->setObjectName(QString::fromUtf8("bt_estoque"));

        verticalLayout->addWidget(bt_estoque);

        bt_relatorio = new QPushButton(widget);
        bt_relatorio->setObjectName(QString::fromUtf8("bt_relatorio"));

        verticalLayout->addWidget(bt_relatorio);

        bt_sair = new QPushButton(widget);
        bt_sair->setObjectName(QString::fromUtf8("bt_sair"));

        verticalLayout->addWidget(bt_sair);

        janelaInicial->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(janelaInicial);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        janelaInicial->setStatusBar(statusbar);

        retranslateUi(janelaInicial);

        QMetaObject::connectSlotsByName(janelaInicial);
    } // setupUi

    void retranslateUi(QMainWindow *janelaInicial)
    {
        janelaInicial->setWindowTitle(QCoreApplication::translate("janelaInicial", "MainWindow", nullptr));
        bt_logout->setText(QCoreApplication::translate("janelaInicial", "Logout", nullptr));
        label->setText(QString());
        label_4->setText(QCoreApplication::translate("janelaInicial", "CuideSys", nullptr));
        bt_admin->setText(QCoreApplication::translate("janelaInicial", "Gerir Administradores", nullptr));
        bt_transacoes->setText(QCoreApplication::translate("janelaInicial", "Gerir Transa\303\247\303\265es", nullptr));
        bt_estoque->setText(QCoreApplication::translate("janelaInicial", "Gerir Estoque", nullptr));
        bt_relatorio->setText(QCoreApplication::translate("janelaInicial", "Gerar Relatorio", nullptr));
        bt_sair->setText(QCoreApplication::translate("janelaInicial", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class janelaInicial: public Ui_janelaInicial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAINICIAL_H
