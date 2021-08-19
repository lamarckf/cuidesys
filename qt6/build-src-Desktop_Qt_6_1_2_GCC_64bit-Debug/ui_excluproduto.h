/********************************************************************************
** Form generated from reading UI file 'excluproduto.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCLUPRODUTO_H
#define UI_EXCLUPRODUTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExcluProduto
{
public:
    QWidget *centralwidget;
    QComboBox *prodComboBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QPushButton *bt_confirmar;
    QPushButton *bt_voltar;
    QLabel *label_5;
    QLabel *resultLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ExcluProduto)
    {
        if (ExcluProduto->objectName().isEmpty())
            ExcluProduto->setObjectName(QString::fromUtf8("ExcluProduto"));
        ExcluProduto->resize(714, 376);
        centralwidget = new QWidget(ExcluProduto);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        prodComboBox = new QComboBox(centralwidget);
        prodComboBox->setObjectName(QString::fromUtf8("prodComboBox"));
        prodComboBox->setGeometry(QRect(40, 90, 629, 27));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 130, 631, 141));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        bt_confirmar = new QPushButton(layoutWidget);
        bt_confirmar->setObjectName(QString::fromUtf8("bt_confirmar"));
        QFont font;
        font.setPointSize(14);
        bt_confirmar->setFont(font);

        verticalLayout_5->addWidget(bt_confirmar);

        bt_voltar = new QPushButton(layoutWidget);
        bt_voltar->setObjectName(QString::fromUtf8("bt_voltar"));
        bt_voltar->setFont(font);

        verticalLayout_5->addWidget(bt_voltar);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 58, 629, 26));
        QFont font1;
        font1.setPointSize(12);
        label_5->setFont(font1);
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(40, 30, 641, 19));
        ExcluProduto->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ExcluProduto);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 714, 24));
        ExcluProduto->setMenuBar(menubar);
        statusbar = new QStatusBar(ExcluProduto);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ExcluProduto->setStatusBar(statusbar);

        retranslateUi(ExcluProduto);

        QMetaObject::connectSlotsByName(ExcluProduto);
    } // setupUi

    void retranslateUi(QMainWindow *ExcluProduto)
    {
        ExcluProduto->setWindowTitle(QCoreApplication::translate("ExcluProduto", "MainWindow", nullptr));
        bt_confirmar->setText(QCoreApplication::translate("ExcluProduto", "Confirmar", nullptr));
        bt_voltar->setText(QCoreApplication::translate("ExcluProduto", "Voltar", nullptr));
        label_5->setText(QCoreApplication::translate("ExcluProduto", "Produto \303\240 ser excluido", nullptr));
        resultLabel->setText(QCoreApplication::translate("ExcluProduto", "Result Label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExcluProduto: public Ui_ExcluProduto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCLUPRODUTO_H
