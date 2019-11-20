/********************************************************************************
** Form generated from reading UI file 'bibliotecadc.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIBLIOTECADC_H
#define UI_BIBLIOTECADC_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BibliotecaDC
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTabWidget *Menu;
    QWidget *Emprestimo;
    QWidget *Devolucao;
    QWidget *usuarios;
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *Nome;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QWidget *widget1;
    QHBoxLayout *CPF;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QWidget *widget2;
    QHBoxLayout *Telefone;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QComboBox *comboBox;
    QGroupBox *groupBox_2;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QWidget *acervo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BibliotecaDC)
    {
        if (BibliotecaDC->objectName().isEmpty())
            BibliotecaDC->setObjectName(QString::fromUtf8("BibliotecaDC"));
        BibliotecaDC->resize(666, 608);
        centralwidget = new QWidget(BibliotecaDC);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 10, 401, 101));
        QFont font;
        font.setPointSize(48);
        label->setFont(font);
        Menu = new QTabWidget(centralwidget);
        Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->setGeometry(QRect(0, 130, 801, 431));
        Menu->setLayoutDirection(Qt::LeftToRight);
        Menu->setAutoFillBackground(false);
        Emprestimo = new QWidget();
        Emprestimo->setObjectName(QString::fromUtf8("Emprestimo"));
        Menu->addTab(Emprestimo, QString());
        Devolucao = new QWidget();
        Devolucao->setObjectName(QString::fromUtf8("Devolucao"));
        Menu->addTab(Devolucao, QString());
        usuarios = new QWidget();
        usuarios->setObjectName(QString::fromUtf8("usuarios"));
        groupBox = new QGroupBox(usuarios);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(110, 20, 441, 141));
        groupBox->setAutoFillBackground(false);
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 30, 221, 27));
        Nome = new QHBoxLayout(widget);
        Nome->setObjectName(QString::fromUtf8("Nome"));
        Nome->setSizeConstraint(QLayout::SetNoConstraint);
        Nome->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        Nome->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        Nome->addWidget(lineEdit);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(250, 30, 177, 27));
        CPF = new QHBoxLayout(widget1);
        CPF->setObjectName(QString::fromUtf8("CPF"));
        CPF->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        CPF->addWidget(label_4);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        CPF->addWidget(lineEdit_2);

        widget2 = new QWidget(groupBox);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(0, 60, 221, 27));
        Telefone = new QHBoxLayout(widget2);
        Telefone->setObjectName(QString::fromUtf8("Telefone"));
        Telefone->setSizeConstraint(QLayout::SetNoConstraint);
        Telefone->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        Telefone->addWidget(label_3);

        lineEdit_3 = new QLineEdit(widget2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        Telefone->addWidget(lineEdit_3);

        widget3 = new QWidget(groupBox);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(0, 100, 258, 28));
        horizontalLayout = new QHBoxLayout(widget3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        dateEdit = new QDateEdit(widget3);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setDateTime(QDateTime(QDate(2019, 1, 1), QTime(0, 0, 0)));
        dateEdit->setCalendarPopup(true);
        dateEdit->setTimeSpec(Qt::UTC);
        dateEdit->setDate(QDate(2019, 1, 1));

        horizontalLayout->addWidget(dateEdit);

        widget4 = new QWidget(groupBox);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(250, 70, 105, 27));
        horizontalLayout_2 = new QHBoxLayout(widget4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        comboBox = new QComboBox(widget4);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        groupBox_2 = new QGroupBox(usuarios);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(110, 170, 451, 121));
        widget5 = new QWidget(usuarios);
        widget5->setObjectName(QString::fromUtf8("widget5"));
        widget5->setGeometry(QRect(120, 330, 431, 27));
        horizontalLayout_3 = new QHBoxLayout(widget5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_4 = new QPushButton(widget5);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(widget5);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(widget5);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        Menu->addTab(usuarios, QString());
        acervo = new QWidget();
        acervo->setObjectName(QString::fromUtf8("acervo"));
        Menu->addTab(acervo, QString());
        BibliotecaDC->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BibliotecaDC);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 666, 22));
        BibliotecaDC->setMenuBar(menubar);
        statusbar = new QStatusBar(BibliotecaDC);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BibliotecaDC->setStatusBar(statusbar);

        retranslateUi(BibliotecaDC);

        Menu->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(BibliotecaDC);
    } // setupUi

    void retranslateUi(QMainWindow *BibliotecaDC)
    {
        BibliotecaDC->setWindowTitle(QCoreApplication::translate("BibliotecaDC", "BibliotecaDC", nullptr));
        label->setText(QCoreApplication::translate("BibliotecaDC", "Bibliotaca DC", nullptr));
        Menu->setTabText(Menu->indexOf(Emprestimo), QCoreApplication::translate("BibliotecaDC", "Emprestimo", nullptr));
        Menu->setTabText(Menu->indexOf(Devolucao), QCoreApplication::translate("BibliotecaDC", "Devolu\303\247\303\243o", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BibliotecaDC", "Dados Pessoais", nullptr));
        label_2->setText(QCoreApplication::translate("BibliotecaDC", "Nome", nullptr));
        label_4->setText(QCoreApplication::translate("BibliotecaDC", "CPF", nullptr));
        label_3->setText(QCoreApplication::translate("BibliotecaDC", "Tel. Celular", nullptr));
        label_5->setText(QCoreApplication::translate("BibliotecaDC", "Data de Nascimento", nullptr));
        label_6->setText(QCoreApplication::translate("BibliotecaDC", "Curso", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QCoreApplication::translate("BibliotecaDC", "ENC", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("BibliotecaDC", "BCC", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("BibliotecaDC", "Filtro Nome", nullptr));
        pushButton->setText(QCoreApplication::translate("BibliotecaDC", "Cadastrar", nullptr));
        pushButton_4->setText(QCoreApplication::translate("BibliotecaDC", "Pesquisar", nullptr));
        pushButton_3->setText(QCoreApplication::translate("BibliotecaDC", "Editar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("BibliotecaDC", "Remover", nullptr));
        Menu->setTabText(Menu->indexOf(usuarios), QCoreApplication::translate("BibliotecaDC", "Usu\303\241rios", nullptr));
        Menu->setTabText(Menu->indexOf(acervo), QCoreApplication::translate("BibliotecaDC", "Acervo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BibliotecaDC: public Ui_BibliotecaDC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIBLIOTECADC_H
