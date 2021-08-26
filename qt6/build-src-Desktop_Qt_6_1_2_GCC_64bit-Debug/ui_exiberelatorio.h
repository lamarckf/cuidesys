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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exiberelatorio
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *relatorio;
    QLabel *resultLabel;
    QTableWidget *tableWidget;
    QPushButton *bt_voltar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *exiberelatorio)
    {
        if (exiberelatorio->objectName().isEmpty())
            exiberelatorio->setObjectName(QString::fromUtf8("exiberelatorio"));
        exiberelatorio->resize(800, 600);
        centralwidget = new QWidget(exiberelatorio);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        relatorio = new QLabel(centralwidget);
        relatorio->setObjectName(QString::fromUtf8("relatorio"));
        QFont font;
        font.setPointSize(35);
        relatorio->setFont(font);
        relatorio->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(relatorio, 0, 0, 1, 1);

        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));

        gridLayout->addWidget(resultLabel, 1, 0, 1, 1);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 1);

        bt_voltar = new QPushButton(centralwidget);
        bt_voltar->setObjectName(QString::fromUtf8("bt_voltar"));

        gridLayout->addWidget(bt_voltar, 3, 0, 1, 1);

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
        relatorio->setText(QCoreApplication::translate("exiberelatorio", "Relatorio", nullptr));
        resultLabel->setText(QCoreApplication::translate("exiberelatorio", "Resultado", nullptr));
        bt_voltar->setText(QCoreApplication::translate("exiberelatorio", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exiberelatorio: public Ui_exiberelatorio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXIBERELATORIO_H
