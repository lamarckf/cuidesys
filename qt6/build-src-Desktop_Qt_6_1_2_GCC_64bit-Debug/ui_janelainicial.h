/********************************************************************************
** Form generated from reading UI file 'janelainicial.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELAINICIAL_H
#define UI_JANELAINICIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_janelaInicial
{
public:
    QWidget *centralwidget;
    QPushButton *bt_admin;
    QPushButton *bt_logout;
    QLabel *label;
    QLabel *label_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *janelaInicial)
    {
        if (janelaInicial->objectName().isEmpty())
            janelaInicial->setObjectName(QString::fromUtf8("janelaInicial"));
        janelaInicial->resize(800, 600);
        centralwidget = new QWidget(janelaInicial);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        bt_admin = new QPushButton(centralwidget);
        bt_admin->setObjectName(QString::fromUtf8("bt_admin"));
        bt_admin->setGeometry(QRect(250, 140, 291, 25));
        bt_logout = new QPushButton(centralwidget);
        bt_logout->setObjectName(QString::fromUtf8("bt_logout"));
        bt_logout->setGeometry(QRect(670, 10, 89, 25));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 60, 67, 19));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 10, 541, 141));
        QFont font;
        font.setPointSize(35);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        janelaInicial->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(janelaInicial);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        janelaInicial->setStatusBar(statusbar);

        retranslateUi(janelaInicial);

        QMetaObject::connectSlotsByName(janelaInicial);
    } // setupUi

    void retranslateUi(QMainWindow *janelaInicial)
    {
        janelaInicial->setWindowTitle(QCoreApplication::translate("janelaInicial", "MainWindow", nullptr));
        bt_admin->setText(QCoreApplication::translate("janelaInicial", "Gerir Administradores", nullptr));
        bt_logout->setText(QCoreApplication::translate("janelaInicial", "Logout", nullptr));
        label->setText(QString());
        label_4->setText(QCoreApplication::translate("janelaInicial", "CuideSys", nullptr));
    } // retranslateUi

};

namespace Ui {
    class janelaInicial: public Ui_janelaInicial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAINICIAL_H
