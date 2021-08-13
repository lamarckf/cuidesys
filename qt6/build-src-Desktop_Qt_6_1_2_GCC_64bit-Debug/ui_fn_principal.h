/********************************************************************************
** Form generated from reading UI file 'fn_principal.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FN_PRINCIPAL_H
#define UI_FN_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_fn_principal
{
public:
    QPushButton *bn_logout;

    void setupUi(QDialog *fn_principal)
    {
        if (fn_principal->objectName().isEmpty())
            fn_principal->setObjectName(QString::fromUtf8("fn_principal"));
        fn_principal->resize(400, 300);
        bn_logout = new QPushButton(fn_principal);
        bn_logout->setObjectName(QString::fromUtf8("bn_logout"));
        bn_logout->setGeometry(QRect(310, 0, 89, 25));

        retranslateUi(fn_principal);

        QMetaObject::connectSlotsByName(fn_principal);
    } // setupUi

    void retranslateUi(QDialog *fn_principal)
    {
        fn_principal->setWindowTitle(QCoreApplication::translate("fn_principal", "Dialog", nullptr));
        bn_logout->setText(QCoreApplication::translate("fn_principal", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fn_principal: public Ui_fn_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FN_PRINCIPAL_H
