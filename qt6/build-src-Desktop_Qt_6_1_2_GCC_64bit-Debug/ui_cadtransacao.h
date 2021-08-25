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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadtransacao
{
public:
    QWidget *centralwidget;
    QPushButton *voltar;
    QPushButton *confirmarPushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *vendedorLineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QTableWidget *tableWidget;
    QLabel *resultLabel;
    QComboBox *tipoComboBox;
    QSpinBox *prodSpinBoxDel;
    QPushButton *DeletarPushButton;
    QComboBox *prodComboBoxDel;
    QSpinBox *prodSpinBox;
    QPushButton *CadastrarPushButton;
    QComboBox *prodComboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cadtransacao)
    {
        if (cadtransacao->objectName().isEmpty())
            cadtransacao->setObjectName(QString::fromUtf8("cadtransacao"));
        cadtransacao->resize(800, 600);
        centralwidget = new QWidget(cadtransacao);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        voltar = new QPushButton(centralwidget);
        voltar->setObjectName(QString::fromUtf8("voltar"));
        voltar->setGeometry(QRect(350, 520, 89, 25));
        confirmarPushButton = new QPushButton(centralwidget);
        confirmarPushButton->setObjectName(QString::fromUtf8("confirmarPushButton"));
        confirmarPushButton->setGeometry(QRect(350, 490, 89, 25));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 110, 291, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        vendedorLineEdit = new QLineEdit(layoutWidget);
        vendedorLineEdit->setObjectName(QString::fromUtf8("vendedorLineEdit"));

        horizontalLayout->addWidget(vendedorLineEdit);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 140, 238, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        dateEdit = new QDateEdit(layoutWidget1);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_2->addWidget(dateEdit);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(100, 280, 621, 192));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(100, 20, 621, 19));
        tipoComboBox = new QComboBox(centralwidget);
        tipoComboBox->setObjectName(QString::fromUtf8("tipoComboBox"));
        tipoComboBox->setGeometry(QRect(100, 70, 629, 27));
        prodSpinBoxDel = new QSpinBox(centralwidget);
        prodSpinBoxDel->setObjectName(QString::fromUtf8("prodSpinBoxDel"));
        prodSpinBoxDel->setGeometry(QRect(514, 230, 91, 28));
        DeletarPushButton = new QPushButton(centralwidget);
        DeletarPushButton->setObjectName(QString::fromUtf8("DeletarPushButton"));
        DeletarPushButton->setGeometry(QRect(609, 230, 112, 28));
        prodComboBoxDel = new QComboBox(centralwidget);
        prodComboBoxDel->setObjectName(QString::fromUtf8("prodComboBoxDel"));
        prodComboBoxDel->setGeometry(QRect(100, 230, 410, 28));
        prodSpinBox = new QSpinBox(centralwidget);
        prodSpinBox->setObjectName(QString::fromUtf8("prodSpinBox"));
        prodSpinBox->setGeometry(QRect(515, 190, 91, 28));
        CadastrarPushButton = new QPushButton(centralwidget);
        CadastrarPushButton->setObjectName(QString::fromUtf8("CadastrarPushButton"));
        CadastrarPushButton->setGeometry(QRect(610, 190, 112, 28));
        prodComboBox = new QComboBox(centralwidget);
        prodComboBox->setObjectName(QString::fromUtf8("prodComboBox"));
        prodComboBox->setGeometry(QRect(101, 190, 410, 28));
        cadtransacao->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cadtransacao);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
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
        confirmarPushButton->setText(QCoreApplication::translate("cadtransacao", "Confirmar", nullptr));
        label->setText(QCoreApplication::translate("cadtransacao", "Vendendor", nullptr));
        label_2->setText(QCoreApplication::translate("cadtransacao", "Data da transa\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("cadtransacao", "Produto", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("cadtransacao", "Pre\303\247o Un.", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("cadtransacao", "Unidades", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("cadtransacao", "Pre\303\247o Total", nullptr));
        resultLabel->setText(QCoreApplication::translate("cadtransacao", "Resultado", nullptr));
        DeletarPushButton->setText(QCoreApplication::translate("cadtransacao", "Deletar", nullptr));
        CadastrarPushButton->setText(QCoreApplication::translate("cadtransacao", "Cadastrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadtransacao: public Ui_cadtransacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADTRANSACAO_H
