/********************************************************************************
** Form generated from reading UI file 'gerirestoque.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GERIRESTOQUE_H
#define UI_GERIRESTOQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GerirEstoque
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *bt_cad_produto;
    QPushButton *bt_edit_produto;
    QPushButton *bt_excl_produto;
    QPushButton *bt_voltar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GerirEstoque)
    {
        if (GerirEstoque->objectName().isEmpty())
            GerirEstoque->setObjectName(QString::fromUtf8("GerirEstoque"));
        GerirEstoque->resize(368, 297);
        centralwidget = new QWidget(GerirEstoque);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 321, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        bt_cad_produto = new QPushButton(layoutWidget);
        bt_cad_produto->setObjectName(QString::fromUtf8("bt_cad_produto"));

        verticalLayout->addWidget(bt_cad_produto);

        bt_edit_produto = new QPushButton(layoutWidget);
        bt_edit_produto->setObjectName(QString::fromUtf8("bt_edit_produto"));

        verticalLayout->addWidget(bt_edit_produto);

        bt_excl_produto = new QPushButton(layoutWidget);
        bt_excl_produto->setObjectName(QString::fromUtf8("bt_excl_produto"));

        verticalLayout->addWidget(bt_excl_produto);

        bt_voltar = new QPushButton(layoutWidget);
        bt_voltar->setObjectName(QString::fromUtf8("bt_voltar"));

        verticalLayout->addWidget(bt_voltar);

        GerirEstoque->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(GerirEstoque);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GerirEstoque->setStatusBar(statusbar);

        retranslateUi(GerirEstoque);

        QMetaObject::connectSlotsByName(GerirEstoque);
    } // setupUi

    void retranslateUi(QMainWindow *GerirEstoque)
    {
        GerirEstoque->setWindowTitle(QCoreApplication::translate("GerirEstoque", "MainWindow", nullptr));
        bt_cad_produto->setText(QCoreApplication::translate("GerirEstoque", "Cadastrar produto", nullptr));
        bt_edit_produto->setText(QCoreApplication::translate("GerirEstoque", "Editar produto", nullptr));
        bt_excl_produto->setText(QCoreApplication::translate("GerirEstoque", "Excluir produto", nullptr));
        bt_voltar->setText(QCoreApplication::translate("GerirEstoque", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GerirEstoque: public Ui_GerirEstoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERIRESTOQUE_H
