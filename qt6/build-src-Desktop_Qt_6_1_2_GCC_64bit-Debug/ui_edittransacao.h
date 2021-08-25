/********************************************************************************
** Form generated from reading UI file 'edittransacao.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTRANSACAO_H
#define UI_EDITTRANSACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
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

class Ui_edittransacao
{
public:
    QWidget *centralwidget;
    QLabel *resultLabel;
    QPushButton *DeletarPushButton;
    QSpinBox *prodSpinBox;
    QComboBox *prodComboBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *vendedorLineEdit;
    QComboBox *prodComboBoxDel;
    QFrame *frame;
    QLabel *label_3;
    QTableWidget *tableWidget;
    QPushButton *CadastrarPushButton;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QSpinBox *prodSpinBoxDel;
    QPushButton *aplicarPushButton;
    QComboBox *transacaoComboBox;
    QFrame *frame_2;
    QPushButton *voltarPushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *edittransacao)
    {
        if (edittransacao->objectName().isEmpty())
            edittransacao->setObjectName(QString::fromUtf8("edittransacao"));
        edittransacao->resize(800, 619);
        centralwidget = new QWidget(edittransacao);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(50, 30, 631, 19));
        DeletarPushButton = new QPushButton(centralwidget);
        DeletarPushButton->setObjectName(QString::fromUtf8("DeletarPushButton"));
        DeletarPushButton->setGeometry(QRect(575, 250, 112, 28));
        prodSpinBox = new QSpinBox(centralwidget);
        prodSpinBox->setObjectName(QString::fromUtf8("prodSpinBox"));
        prodSpinBox->setGeometry(QRect(481, 210, 91, 28));
        prodComboBox = new QComboBox(centralwidget);
        prodComboBox->setObjectName(QString::fromUtf8("prodComboBox"));
        prodComboBox->setGeometry(QRect(67, 210, 410, 28));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 110, 291, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        vendedorLineEdit = new QLineEdit(layoutWidget);
        vendedorLineEdit->setObjectName(QString::fromUtf8("vendedorLineEdit"));

        horizontalLayout->addWidget(vendedorLineEdit);

        prodComboBoxDel = new QComboBox(centralwidget);
        prodComboBoxDel->setObjectName(QString::fromUtf8("prodComboBoxDel"));
        prodComboBoxDel->setGeometry(QRect(66, 250, 410, 28));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(57, 200, 641, 291));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(67, 180, 67, 19));
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
        tableWidget->setGeometry(QRect(67, 290, 621, 192));
        CadastrarPushButton = new QPushButton(centralwidget);
        CadastrarPushButton->setObjectName(QString::fromUtf8("CadastrarPushButton"));
        CadastrarPushButton->setGeometry(QRect(576, 210, 112, 28));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(60, 140, 238, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        dateEdit = new QDateEdit(layoutWidget_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_2->addWidget(dateEdit);

        prodSpinBoxDel = new QSpinBox(centralwidget);
        prodSpinBoxDel->setObjectName(QString::fromUtf8("prodSpinBoxDel"));
        prodSpinBoxDel->setGeometry(QRect(480, 250, 91, 28));
        aplicarPushButton = new QPushButton(centralwidget);
        aplicarPushButton->setObjectName(QString::fromUtf8("aplicarPushButton"));
        aplicarPushButton->setGeometry(QRect(330, 500, 80, 27));
        transacaoComboBox = new QComboBox(centralwidget);
        transacaoComboBox->setObjectName(QString::fromUtf8("transacaoComboBox"));
        transacaoComboBox->setGeometry(QRect(60, 60, 629, 27));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(50, 100, 651, 81));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        voltarPushButton = new QPushButton(centralwidget);
        voltarPushButton->setObjectName(QString::fromUtf8("voltarPushButton"));
        voltarPushButton->setGeometry(QRect(330, 530, 80, 27));
        edittransacao->setCentralWidget(centralwidget);
        frame->raise();
        frame_2->raise();
        resultLabel->raise();
        DeletarPushButton->raise();
        prodSpinBox->raise();
        prodComboBox->raise();
        layoutWidget->raise();
        prodComboBoxDel->raise();
        label_3->raise();
        tableWidget->raise();
        CadastrarPushButton->raise();
        layoutWidget_2->raise();
        prodSpinBoxDel->raise();
        aplicarPushButton->raise();
        transacaoComboBox->raise();
        voltarPushButton->raise();
        menubar = new QMenuBar(edittransacao);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        edittransacao->setMenuBar(menubar);
        statusbar = new QStatusBar(edittransacao);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        edittransacao->setStatusBar(statusbar);

        retranslateUi(edittransacao);

        QMetaObject::connectSlotsByName(edittransacao);
    } // setupUi

    void retranslateUi(QMainWindow *edittransacao)
    {
        edittransacao->setWindowTitle(QCoreApplication::translate("edittransacao", "MainWindow", nullptr));
        resultLabel->setText(QCoreApplication::translate("edittransacao", "Resultado", nullptr));
        DeletarPushButton->setText(QCoreApplication::translate("edittransacao", "Del", nullptr));
        label->setText(QCoreApplication::translate("edittransacao", "Vendendor", nullptr));
        label_3->setText(QCoreApplication::translate("edittransacao", "Carrinho", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("edittransacao", "Produto", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("edittransacao", "Pre\303\247o Un.", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("edittransacao", "Unidades", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("edittransacao", "Pre\303\247o Total", nullptr));
        CadastrarPushButton->setText(QCoreApplication::translate("edittransacao", "Add", nullptr));
        label_2->setText(QCoreApplication::translate("edittransacao", "Data da transa\303\247\303\243o", nullptr));
        aplicarPushButton->setText(QCoreApplication::translate("edittransacao", "Aplicar", nullptr));
        voltarPushButton->setText(QCoreApplication::translate("edittransacao", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edittransacao: public Ui_edittransacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTRANSACAO_H
