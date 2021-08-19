/********************************************************************************
** Form generated from reading UI file 'editproduto.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPRODUTO_H
#define UI_EDITPRODUTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditProduto
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QComboBox *prodComboBox;
    QLabel *label;
    QLineEdit *lineNome;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpinBox *quantidadeSpin;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *linePreco;
    QVBoxLayout *verticalLayout_5;
    QPushButton *bt_confirmar;
    QPushButton *pushButton_2;
    QLabel *resultLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EditProduto)
    {
        if (EditProduto->objectName().isEmpty())
            EditProduto->setObjectName(QString::fromUtf8("EditProduto"));
        EditProduto->resize(800, 600);
        centralwidget = new QWidget(EditProduto);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 50, 631, 421));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setPointSize(12);
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        prodComboBox = new QComboBox(layoutWidget);
        prodComboBox->setObjectName(QString::fromUtf8("prodComboBox"));

        verticalLayout->addWidget(prodComboBox);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
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

        quantidadeSpin = new QSpinBox(layoutWidget);
        quantidadeSpin->setObjectName(QString::fromUtf8("quantidadeSpin"));

        verticalLayout_2->addWidget(quantidadeSpin);


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
        bt_confirmar = new QPushButton(layoutWidget);
        bt_confirmar->setObjectName(QString::fromUtf8("bt_confirmar"));
        QFont font1;
        font1.setPointSize(14);
        bt_confirmar->setFont(font1);

        verticalLayout_5->addWidget(bt_confirmar);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);

        verticalLayout_5->addWidget(pushButton_2);


        gridLayout->addLayout(verticalLayout_5, 1, 0, 1, 1);

        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(50, 30, 641, 19));
        EditProduto->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EditProduto);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        EditProduto->setMenuBar(menubar);
        statusbar = new QStatusBar(EditProduto);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EditProduto->setStatusBar(statusbar);

        retranslateUi(EditProduto);

        QMetaObject::connectSlotsByName(EditProduto);
    } // setupUi

    void retranslateUi(QMainWindow *EditProduto)
    {
        EditProduto->setWindowTitle(QCoreApplication::translate("EditProduto", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("EditProduto", "Produto \303\240 ser editado", nullptr));
        label->setText(QCoreApplication::translate("EditProduto", "Nome do produto", nullptr));
        label_2->setText(QCoreApplication::translate("EditProduto", "Quantidade", nullptr));
        label_3->setText(QCoreApplication::translate("EditProduto", "Preco", nullptr));
        bt_confirmar->setText(QCoreApplication::translate("EditProduto", "Confirmar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("EditProduto", "Voltar", nullptr));
        resultLabel->setText(QCoreApplication::translate("EditProduto", "Result Label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditProduto: public Ui_EditProduto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPRODUTO_H
