/********************************************************************************
** Form generated from reading UI file 'gerirrelatorio.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GERIRRELATORIO_H
#define UI_GERIRRELATORIO_H

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

class Ui_gerirrelatorio
{
public:
    QWidget *centralwidget;
    QPushButton *bt_voltar;
    QComboBox *tiporelatorio;
    QLabel *resultLabel;
    QComboBox *relatorioinicial;
    QComboBox *relatoriofinal;
    QPushButton *confirmar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gerirrelatorio)
    {
        if (gerirrelatorio->objectName().isEmpty())
            gerirrelatorio->setObjectName(QString::fromUtf8("gerirrelatorio"));
        gerirrelatorio->resize(690, 439);
        centralwidget = new QWidget(gerirrelatorio);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        bt_voltar = new QPushButton(centralwidget);
        bt_voltar->setObjectName(QString::fromUtf8("bt_voltar"));
        bt_voltar->setGeometry(QRect(180, 320, 319, 25));
        tiporelatorio = new QComboBox(centralwidget);
        tiporelatorio->setObjectName(QString::fromUtf8("tiporelatorio"));
        tiporelatorio->setGeometry(QRect(20, 100, 629, 27));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(30, 40, 621, 19));
        relatorioinicial = new QComboBox(centralwidget);
        relatorioinicial->setObjectName(QString::fromUtf8("relatorioinicial"));
        relatorioinicial->setGeometry(QRect(20, 150, 629, 27));
        relatoriofinal = new QComboBox(centralwidget);
        relatoriofinal->setObjectName(QString::fromUtf8("relatoriofinal"));
        relatoriofinal->setGeometry(QRect(20, 210, 629, 27));
        confirmar = new QPushButton(centralwidget);
        confirmar->setObjectName(QString::fromUtf8("confirmar"));
        confirmar->setGeometry(QRect(180, 280, 319, 25));
        gerirrelatorio->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gerirrelatorio);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 690, 22));
        gerirrelatorio->setMenuBar(menubar);
        statusbar = new QStatusBar(gerirrelatorio);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        gerirrelatorio->setStatusBar(statusbar);

        retranslateUi(gerirrelatorio);

        QMetaObject::connectSlotsByName(gerirrelatorio);
    } // setupUi

    void retranslateUi(QMainWindow *gerirrelatorio)
    {
        gerirrelatorio->setWindowTitle(QCoreApplication::translate("gerirrelatorio", "MainWindow", nullptr));
        bt_voltar->setText(QCoreApplication::translate("gerirrelatorio", "Voltar", nullptr));
        resultLabel->setText(QCoreApplication::translate("gerirrelatorio", "Resultado", nullptr));
        confirmar->setText(QCoreApplication::translate("gerirrelatorio", "Confirmar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gerirrelatorio: public Ui_gerirrelatorio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERIRRELATORIO_H
