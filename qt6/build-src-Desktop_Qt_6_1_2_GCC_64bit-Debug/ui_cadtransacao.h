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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateEdit *dateEdit;
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
        voltar->setGeometry(QRect(340, 280, 89, 25));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 250, 89, 25));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 110, 226, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(100, 140, 238, 28));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        dateEdit = new QDateEdit(widget1);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_2->addWidget(dateEdit);

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
        pushButton->setText(QCoreApplication::translate("cadtransacao", "Confirmar", nullptr));
        label->setText(QCoreApplication::translate("cadtransacao", "Vendendor", nullptr));
        label_2->setText(QCoreApplication::translate("cadtransacao", "Data da transa\303\247\303\243o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadtransacao: public Ui_cadtransacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADTRANSACAO_H
