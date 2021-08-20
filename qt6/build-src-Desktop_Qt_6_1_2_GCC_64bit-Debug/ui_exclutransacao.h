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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *exclutransacao)
    {
        if (exclutransacao->objectName().isEmpty())
            exclutransacao->setObjectName(QString::fromUtf8("exclutransacao"));
        exclutransacao->resize(800, 600);
        centralwidget = new QWidget(exclutransacao);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        voltar = new QPushButton(centralwidget);
        voltar->setObjectName(QString::fromUtf8("voltar"));
        voltar->setGeometry(QRect(330, 280, 89, 25));
        exclutransacao->setCentralWidget(centralwidget);
        menubar = new QMenuBar(exclutransacao);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
    } // retranslateUi

};

namespace Ui {
    class exclutransacao: public Ui_exclutransacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCLUTRANSACAO_H
