/********************************************************************************
** Form generated from reading UI file 'cadtransacao.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADTRANSACAO_H
#define UI_CADTRANSACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadtransacao
{
public:
    QWidget *centralwidget;
    QComboBox *prodComboBox;
    QPushButton *voltar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cadtransacao)
    {
        if (cadtransacao->objectName().isEmpty())
            cadtransacao->setObjectName(QString::fromUtf8("cadtransacao"));
        cadtransacao->resize(800, 600);
        centralwidget = new QWidget(cadtransacao);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        prodComboBox = new QComboBox(centralwidget);
        prodComboBox->setObjectName(QString::fromUtf8("prodComboBox"));
        prodComboBox->setGeometry(QRect(100, 80, 629, 27));
        voltar = new QPushButton(centralwidget);
        voltar->setObjectName(QString::fromUtf8("voltar"));
        voltar->setGeometry(QRect(340, 250, 89, 25));
        cadtransacao->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cadtransacao);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        cadtransacao->setMenuBar(menubar);
        statusbar = new QStatusBar(cadtransacao);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        cadtransacao->setStatusBar(statusbar);

        retranslateUi(cadtransacao);

        QMetaObject::connectSlotsByName(cadtransacao);
    } // setupUi

    void retranslateUi(QMainWindow *cadtransacao)
    {
        cadtransacao->setWindowTitle(QCoreApplication::translate("cadtransacao", "MainWindow", nullptr));
        voltar->setText(QCoreApplication::translate("cadtransacao", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadtransacao: public Ui_cadtransacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADTRANSACAO_H
