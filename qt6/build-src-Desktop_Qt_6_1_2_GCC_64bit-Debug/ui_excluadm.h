/********************************************************************************
** Form generated from reading UI file 'excluadm.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCLUADM_H
#define UI_EXCLUADM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExcluAdm
{
public:
    QWidget *centralwidget;
    QLabel *resultLabel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QComboBox *admComboBox;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ExcluAdm)
    {
        if (ExcluAdm->objectName().isEmpty())
            ExcluAdm->setObjectName(QString::fromUtf8("ExcluAdm"));
        ExcluAdm->resize(800, 600);
        centralwidget = new QWidget(ExcluAdm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(70, 40, 641, 19));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 140, 631, 141));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);

        verticalLayout_5->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        verticalLayout_5->addWidget(pushButton_2);

        admComboBox = new QComboBox(centralwidget);
        admComboBox->setObjectName(QString::fromUtf8("admComboBox"));
        admComboBox->setGeometry(QRect(70, 100, 629, 27));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 68, 629, 26));
        QFont font1;
        font1.setPointSize(12);
        label_5->setFont(font1);
        ExcluAdm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ExcluAdm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        ExcluAdm->setMenuBar(menubar);
        statusbar = new QStatusBar(ExcluAdm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ExcluAdm->setStatusBar(statusbar);

        retranslateUi(ExcluAdm);

        QMetaObject::connectSlotsByName(ExcluAdm);
    } // setupUi

    void retranslateUi(QMainWindow *ExcluAdm)
    {
        ExcluAdm->setWindowTitle(QCoreApplication::translate("ExcluAdm", "MainWindow", nullptr));
        resultLabel->setText(QCoreApplication::translate("ExcluAdm", "Result Label", nullptr));
        pushButton->setText(QCoreApplication::translate("ExcluAdm", "Confirmar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ExcluAdm", "Voltar", nullptr));
        label_5->setText(QCoreApplication::translate("ExcluAdm", "Administrador \303\240 ser excluido", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExcluAdm: public Ui_ExcluAdm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCLUADM_H
