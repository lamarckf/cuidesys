/********************************************************************************
** Form generated from reading UI file 'cadadm.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADADM_H
#define UI_CADADM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CadAdm
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
    QLineEdit *lineSenha;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEnd;
    QVBoxLayout *verticalLayout_5;
    QPushButton *bt_confirmar;
    QPushButton *bt_voltar;
    QLabel *resultLabel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CadAdm)
    {
        if (CadAdm->objectName().isEmpty())
            CadAdm->setObjectName(QString::fromUtf8("CadAdm"));
        CadAdm->resize(800, 600);
        centralwidget = new QWidget(CadAdm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 50, 631, 421));
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

        lineSenha = new QLineEdit(layoutWidget);
        lineSenha->setObjectName(QString::fromUtf8("lineSenha"));
        lineSenha->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(lineSenha);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        lineEnd = new QLineEdit(layoutWidget);
        lineEnd->setObjectName(QString::fromUtf8("lineEnd"));

        verticalLayout_3->addWidget(lineEnd);


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

        bt_voltar = new QPushButton(layoutWidget);
        bt_voltar->setObjectName(QString::fromUtf8("bt_voltar"));
        bt_voltar->setFont(font1);

        verticalLayout_5->addWidget(bt_voltar);


        gridLayout->addLayout(verticalLayout_5, 1, 0, 1, 1);

        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(80, 20, 641, 19));
        CadAdm->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(CadAdm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CadAdm->setStatusBar(statusbar);

        retranslateUi(CadAdm);

        QMetaObject::connectSlotsByName(CadAdm);
    } // setupUi

    void retranslateUi(QMainWindow *CadAdm)
    {
        CadAdm->setWindowTitle(QCoreApplication::translate("CadAdm", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("CadAdm", "Nome de usu\303\241rio", nullptr));
        label_2->setText(QCoreApplication::translate("CadAdm", "Senha", nullptr));
        label_3->setText(QCoreApplication::translate("CadAdm", "Endere\303\247o da loja", nullptr));
        bt_confirmar->setText(QCoreApplication::translate("CadAdm", "Confirmar", nullptr));
        bt_voltar->setText(QCoreApplication::translate("CadAdm", "Voltar", nullptr));
        resultLabel->setText(QCoreApplication::translate("CadAdm", "Result Label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CadAdm: public Ui_CadAdm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADADM_H
