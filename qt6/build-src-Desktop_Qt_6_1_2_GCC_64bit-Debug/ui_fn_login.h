/********************************************************************************
** Form generated from reading UI file 'fn_login.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FN_LOGIN_H
#define UI_FN_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_fn_login
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *textUSer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *textPass;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btn_login;
    QPushButton *btn_limpar;
    QLabel *label;

    void setupUi(QDialog *fn_login)
    {
        if (fn_login->objectName().isEmpty())
            fn_login->setObjectName(QString::fromUtf8("fn_login"));
        fn_login->resize(400, 300);
        gridLayout = new QGridLayout(fn_login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(fn_login);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(35);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(fn_login);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        textUSer = new QLineEdit(fn_login);
        textUSer->setObjectName(QString::fromUtf8("textUSer"));

        verticalLayout->addWidget(textUSer);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(fn_login);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        textPass = new QLineEdit(fn_login);
        textPass->setObjectName(QString::fromUtf8("textPass"));
        textPass->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(textPass);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        btn_login = new QPushButton(fn_login);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));

        verticalLayout_3->addWidget(btn_login);

        btn_limpar = new QPushButton(fn_login);
        btn_limpar->setObjectName(QString::fromUtf8("btn_limpar"));

        verticalLayout_3->addWidget(btn_limpar);


        verticalLayout_4->addLayout(verticalLayout_3);


        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 1);

        label = new QLabel(fn_login);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);


        retranslateUi(fn_login);

        QMetaObject::connectSlotsByName(fn_login);
    } // setupUi

    void retranslateUi(QDialog *fn_login)
    {
        fn_login->setWindowTitle(QCoreApplication::translate("fn_login", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("fn_login", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("fn_login", "Nome do usu\303\241rio:", nullptr));
        label_3->setText(QCoreApplication::translate("fn_login", "Senha:", nullptr));
        btn_login->setText(QCoreApplication::translate("fn_login", "Entrar", nullptr));
        btn_limpar->setText(QCoreApplication::translate("fn_login", "Limpar", nullptr));
        label->setText(QCoreApplication::translate("fn_login", "[+] Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fn_login: public Ui_fn_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FN_LOGIN_H
