/********************************************************************************
** Form generated from reading UI file 'geriradm.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GERIRADM_H
#define UI_GERIRADM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gerirAdm
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gerirAdm)
    {
        if (gerirAdm->objectName().isEmpty())
            gerirAdm->setObjectName(QString::fromUtf8("gerirAdm"));
        gerirAdm->resize(368, 297);
        centralwidget = new QWidget(gerirAdm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        gerirAdm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gerirAdm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 368, 22));
        gerirAdm->setMenuBar(menubar);
        statusbar = new QStatusBar(gerirAdm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        gerirAdm->setStatusBar(statusbar);

        retranslateUi(gerirAdm);

        QMetaObject::connectSlotsByName(gerirAdm);
    } // setupUi

    void retranslateUi(QMainWindow *gerirAdm)
    {
        gerirAdm->setWindowTitle(QCoreApplication::translate("gerirAdm", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("gerirAdm", "Adcionar administrador", nullptr));
        pushButton_2->setText(QCoreApplication::translate("gerirAdm", "Editar administrador", nullptr));
        pushButton_3->setText(QCoreApplication::translate("gerirAdm", "Excluir administrador", nullptr));
        pushButton_4->setText(QCoreApplication::translate("gerirAdm", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gerirAdm: public Ui_gerirAdm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERIRADM_H
