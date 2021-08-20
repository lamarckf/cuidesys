/********************************************************************************
** Form generated from reading UI file 'edittransacao.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTRANSACAO_H
#define UI_EDITTRANSACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edittransacao
{
public:
    QWidget *centralwidget;
    QPushButton *voltar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *edittransacao)
    {
        if (edittransacao->objectName().isEmpty())
            edittransacao->setObjectName(QString::fromUtf8("edittransacao"));
        edittransacao->resize(800, 600);
        centralwidget = new QWidget(edittransacao);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        voltar = new QPushButton(centralwidget);
        voltar->setObjectName(QString::fromUtf8("voltar"));
        voltar->setGeometry(QRect(330, 260, 89, 25));
        edittransacao->setCentralWidget(centralwidget);
        menubar = new QMenuBar(edittransacao);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        edittransacao->setMenuBar(menubar);
        statusbar = new QStatusBar(edittransacao);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        edittransacao->setStatusBar(statusbar);

        retranslateUi(edittransacao);

        QMetaObject::connectSlotsByName(edittransacao);
    } // setupUi

    void retranslateUi(QMainWindow *edittransacao)
    {
        edittransacao->setWindowTitle(QCoreApplication::translate("edittransacao", "MainWindow", nullptr));
        voltar->setText(QCoreApplication::translate("edittransacao", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edittransacao: public Ui_edittransacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTRANSACAO_H
