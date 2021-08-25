/********************************************************************************
** Form generated from reading UI file 'exclutransacao.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCLUTRANSACAO_H
#define UI_EXCLUTRANSACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exclutransacao
{
public:
    QWidget *centralwidget;
    QPushButton *voltar;
    QComboBox *transacaoComboBox;
    QLabel *resultLabel;
    QPushButton *confirmarPushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *exclutransacao)
    {
        if (exclutransacao->objectName().isEmpty())
            exclutransacao->setObjectName(QString::fromUtf8("exclutransacao"));
        exclutransacao->resize(793, 256);
        centralwidget = new QWidget(exclutransacao);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        voltar = new QPushButton(centralwidget);
        voltar->setObjectName(QString::fromUtf8("voltar"));
        voltar->setGeometry(QRect(320, 150, 89, 25));
        transacaoComboBox = new QComboBox(centralwidget);
        transacaoComboBox->setObjectName(QString::fromUtf8("transacaoComboBox"));
        transacaoComboBox->setGeometry(QRect(80, 80, 629, 27));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(80, 50, 631, 19));
        confirmarPushButton = new QPushButton(centralwidget);
        confirmarPushButton->setObjectName(QString::fromUtf8("confirmarPushButton"));
        confirmarPushButton->setGeometry(QRect(320, 120, 89, 25));
        exclutransacao->setCentralWidget(centralwidget);
        menubar = new QMenuBar(exclutransacao);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 793, 24));
        exclutransacao->setMenuBar(menubar);
        statusbar = new QStatusBar(exclutransacao);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        exclutransacao->setStatusBar(statusbar);

        retranslateUi(exclutransacao);

        QMetaObject::connectSlotsByName(exclutransacao);
    } // setupUi

    void retranslateUi(QMainWindow *exclutransacao)
    {
        exclutransacao->setWindowTitle(QCoreApplication::translate("exclutransacao", "MainWindow", nullptr));
        voltar->setText(QCoreApplication::translate("exclutransacao", "Voltar", nullptr));
        resultLabel->setText(QCoreApplication::translate("exclutransacao", "Resultado", nullptr));
        confirmarPushButton->setText(QCoreApplication::translate("exclutransacao", "Confirmar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exclutransacao: public Ui_exclutransacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCLUTRANSACAO_H
