/********************************************************************************
** Form generated from reading UI file 'exiberelatorio.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXIBERELATORIO_H
#define UI_EXIBERELATORIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exiberelatorio
{
public:
    QWidget *centralwidget;
    QPushButton *bt_voltar;
    QLabel *relatorio;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *exiberelatorio)
    {
        if (exiberelatorio->objectName().isEmpty())
            exiberelatorio->setObjectName(QString::fromUtf8("exiberelatorio"));
        exiberelatorio->resize(800, 600);
        centralwidget = new QWidget(exiberelatorio);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        bt_voltar = new QPushButton(centralwidget);
        bt_voltar->setObjectName(QString::fromUtf8("bt_voltar"));
        bt_voltar->setGeometry(QRect(220, 290, 319, 25));
        relatorio = new QLabel(centralwidget);
        relatorio->setObjectName(QString::fromUtf8("relatorio"));
        relatorio->setGeometry(QRect(100, 0, 541, 141));
        QFont font;
        font.setPointSize(35);
        relatorio->setFont(font);
        relatorio->setAlignment(Qt::AlignCenter);
        exiberelatorio->setCentralWidget(centralwidget);
        menubar = new QMenuBar(exiberelatorio);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        exiberelatorio->setMenuBar(menubar);
        statusbar = new QStatusBar(exiberelatorio);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        exiberelatorio->setStatusBar(statusbar);

        retranslateUi(exiberelatorio);

        QMetaObject::connectSlotsByName(exiberelatorio);
    } // setupUi

    void retranslateUi(QMainWindow *exiberelatorio)
    {
        exiberelatorio->setWindowTitle(QCoreApplication::translate("exiberelatorio", "MainWindow", nullptr));
        bt_voltar->setText(QCoreApplication::translate("exiberelatorio", "Voltar", nullptr));
        relatorio->setText(QCoreApplication::translate("exiberelatorio", "Relatorio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exiberelatorio: public Ui_exiberelatorio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXIBERELATORIO_H