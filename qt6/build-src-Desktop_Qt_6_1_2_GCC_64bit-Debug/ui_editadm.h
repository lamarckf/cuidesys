/********************************************************************************
** Form generated from reading UI file 'editadm.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITADM_H
#define UI_EDITADM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditAdm
{
public:
    QWidget *centralwidget;
    QLabel *resultLabel;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QComboBox *admComboBox;
    QLabel *label;
    QLineEdit *lineNome;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineSenha;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEnd;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EditAdm)
    {
        if (EditAdm->objectName().isEmpty())
            EditAdm->setObjectName(QString::fromUtf8("EditAdm"));
        EditAdm->resize(800, 600);
        centralwidget = new QWidget(EditAdm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(90, 60, 641, 19));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 80, 631, 421));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setPointSize(12);
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        admComboBox = new QComboBox(layoutWidget);
        admComboBox->setObjectName(QString::fromUtf8("admComboBox"));

        verticalLayout->addWidget(admComboBox);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        lineNome = new QLineEdit(layoutWidget);
        lineNome->setObjectName(QString::fromUtf8("lineNome"));

        verticalLayout->addWidget(lineNome);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        lineSenha = new QLineEdit(layoutWidget);
        lineSenha->setObjectName(QString::fromUtf8("lineSenha"));
        lineSenha->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(lineSenha);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        lineEnd = new QLineEdit(layoutWidget);
        lineEnd->setObjectName(QString::fromUtf8("lineEnd"));

        verticalLayout_3->addWidget(lineEnd);


        verticalLayout_4->addLayout(verticalLayout_3);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setPointSize(14);
        pushButton->setFont(font1);

        verticalLayout_5->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);

        verticalLayout_5->addWidget(pushButton_2);


        gridLayout->addLayout(verticalLayout_5, 1, 0, 1, 1);

        EditAdm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EditAdm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        EditAdm->setMenuBar(menubar);
        statusbar = new QStatusBar(EditAdm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EditAdm->setStatusBar(statusbar);

        retranslateUi(EditAdm);

        QMetaObject::connectSlotsByName(EditAdm);
    } // setupUi

    void retranslateUi(QMainWindow *EditAdm)
    {
        EditAdm->setWindowTitle(QCoreApplication::translate("EditAdm", "MainWindow", nullptr));
        resultLabel->setText(QCoreApplication::translate("EditAdm", "Result Label", nullptr));
        label_5->setText(QCoreApplication::translate("EditAdm", "Administrador \303\240 ser editado", nullptr));
        label->setText(QCoreApplication::translate("EditAdm", "Nome de usu\303\241rio", nullptr));
        label_2->setText(QCoreApplication::translate("EditAdm", "Senha", nullptr));
        label_3->setText(QCoreApplication::translate("EditAdm", "Endere\303\247o da loja", nullptr));
        pushButton->setText(QCoreApplication::translate("EditAdm", "Confirmar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("EditAdm", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditAdm: public Ui_EditAdm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITADM_H
