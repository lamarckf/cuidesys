/********************************************************************************
** Form generated from reading UI file 'cadproduto.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADPRODUTO_H
#define UI_CADPRODUTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CadProduto
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineNome;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpinBox *spinQuantidade;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *linePreco;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *resultLabel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CadProduto)
    {
        if (CadProduto->objectName().isEmpty())
            CadProduto->setObjectName(QString::fromUtf8("CadProduto"));
        CadProduto->resize(752, 546);
        centralwidget = new QWidget(CadProduto);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 60, 631, 421));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout->addWidget(label);

        lineNome = new QLineEdit(layoutWidget);
        lineNome->setObjectName(QString::fromUtf8("lineNome"));

        verticalLayout->addWidget(lineNome);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        spinQuantidade = new QSpinBox(layoutWidget);
        spinQuantidade->setObjectName(QString::fromUtf8("spinQuantidade"));

        verticalLayout_2->addWidget(spinQuantidade);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        linePreco = new QLineEdit(layoutWidget);
        linePreco->setObjectName(QString::fromUtf8("linePreco"));

        verticalLayout_3->addWidget(linePreco);


        verticalLayout_4->addLayout(verticalLayout_3);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setPointSize(14);
        pushButton->setFont(font1);

        verticalLayout_5->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);

        verticalLayout_5->addWidget(pushButton_2);


        gridLayout->addLayout(verticalLayout_5, 1, 0, 1, 1);

        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(60, 30, 641, 19));
        CadProduto->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(CadProduto);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CadProduto->setStatusBar(statusbar);

        retranslateUi(CadProduto);

        QMetaObject::connectSlotsByName(CadProduto);
    } // setupUi

    void retranslateUi(QMainWindow *CadProduto)
    {
        CadProduto->setWindowTitle(QCoreApplication::translate("CadProduto", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("CadProduto", "Nome do produto", nullptr));
        label_2->setText(QCoreApplication::translate("CadProduto", "Quantidade", nullptr));
        label_3->setText(QCoreApplication::translate("CadProduto", "Pre\303\247o", nullptr));
        pushButton->setText(QCoreApplication::translate("CadProduto", "Confirmar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CadProduto", "Voltar", nullptr));
        resultLabel->setText(QCoreApplication::translate("CadProduto", "Result Label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CadProduto: public Ui_CadProduto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADPRODUTO_H
