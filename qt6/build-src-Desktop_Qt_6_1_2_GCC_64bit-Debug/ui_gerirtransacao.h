/********************************************************************************
** Form generated from reading UI file 'gerirtransacao.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GERIRTRANSACAO_H
#define UI_GERIRTRANSACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gerirtransacao
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gerirtransacao)
    {
        if (gerirtransacao->objectName().isEmpty())
            gerirtransacao->setObjectName(QString::fromUtf8("gerirtransacao"));
        gerirtransacao->resize(271, 257);
        centralwidget = new QWidget(gerirtransacao);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        gerirtransacao->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gerirtransacao);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 271, 22));
        gerirtransacao->setMenuBar(menubar);
        statusbar = new QStatusBar(gerirtransacao);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        gerirtransacao->setStatusBar(statusbar);

        retranslateUi(gerirtransacao);

        QMetaObject::connectSlotsByName(gerirtransacao);
    } // setupUi

    void retranslateUi(QMainWindow *gerirtransacao)
    {
        gerirtransacao->setWindowTitle(QCoreApplication::translate("gerirtransacao", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("gerirtransacao", "Cadastrar transa\303\247\303\243o", nullptr));
        pushButton_2->setText(QCoreApplication::translate("gerirtransacao", "Editar transa\303\247\303\243o", nullptr));
        pushButton_3->setText(QCoreApplication::translate("gerirtransacao", "Excluir transa\303\247\303\243o", nullptr));
        pushButton_4->setText(QCoreApplication::translate("gerirtransacao", "Voltar ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gerirtransacao: public Ui_gerirtransacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERIRTRANSACAO_H
