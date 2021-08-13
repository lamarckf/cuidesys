/********************************************************************************
** Form generated from reading UI file 'janelalogin.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELALOGIN_H
#define UI_JANELALOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaLogin
{
public:
    QWidget *centralwidget;
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
    QStatusBar *statusbar;

    void setupUi(QMainWindow *JanelaLogin)
    {
        if (JanelaLogin->objectName().isEmpty())
            JanelaLogin->setObjectName(QString::fromUtf8("JanelaLogin"));
        JanelaLogin->resize(800, 600);
        JanelaLogin->setMinimumSize(QSize(0, 600));
        centralwidget = new QWidget(JanelaLogin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(centralwidget);
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        textUSer = new QLineEdit(centralwidget);
        textUSer->setObjectName(QString::fromUtf8("textUSer"));

        verticalLayout->addWidget(textUSer);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        textPass = new QLineEdit(centralwidget);
        textPass->setObjectName(QString::fromUtf8("textPass"));
        textPass->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(textPass);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        btn_login = new QPushButton(centralwidget);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));

        verticalLayout_3->addWidget(btn_login);

        btn_limpar = new QPushButton(centralwidget);
        btn_limpar->setObjectName(QString::fromUtf8("btn_limpar"));

        verticalLayout_3->addWidget(btn_limpar);


        verticalLayout_4->addLayout(verticalLayout_3);


        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        JanelaLogin->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(JanelaLogin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        JanelaLogin->setStatusBar(statusbar);

        retranslateUi(JanelaLogin);

        QMetaObject::connectSlotsByName(JanelaLogin);
    } // setupUi

    void retranslateUi(QMainWindow *JanelaLogin)
    {
        JanelaLogin->setWindowTitle(QCoreApplication::translate("JanelaLogin", "JanelaLogin", nullptr));
        label_4->setText(QCoreApplication::translate("JanelaLogin", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("JanelaLogin", "Nome do usu\303\241rio:", nullptr));
        label_3->setText(QCoreApplication::translate("JanelaLogin", "Senha:", nullptr));
        btn_login->setText(QCoreApplication::translate("JanelaLogin", "Entrar", nullptr));
        btn_limpar->setText(QCoreApplication::translate("JanelaLogin", "Limpar", nullptr));
        label->setText(QCoreApplication::translate("JanelaLogin", "[+] Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaLogin: public Ui_JanelaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELALOGIN_H
