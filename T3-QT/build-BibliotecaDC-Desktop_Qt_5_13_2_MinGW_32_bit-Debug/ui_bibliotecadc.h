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
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *lineEdit_5;
    QGroupBox *groupBox_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLineEdit *lineEdit_6;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLineEdit *lineEdit_7;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QDateEdit *dateEdit_2;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_13;
    QLineEdit *lineEdit_9;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLineEdit *lineEdit_8;
    QGroupBox *groupBox_6;
    QGroupBox *groupBox_5;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *Devolucao;
    QWidget *usuarios;
    QGroupBox *groupBox;
    QWidget *layoutWidget2;
    QHBoxLayout *Nome;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QWidget *layoutWidget3;
    QHBoxLayout *CPF;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget4;
    QHBoxLayout *Telefone;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QComboBox *comboBox;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget7;
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
        label->setGeometry(QRect(80, 20, 471, 101));
        QFont font;
        font.setPointSize(48);
        label->setFont(font);
        Menu = new QTabWidget(centralwidget);
        Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->setGeometry(QRect(0, 140, 801, 431));
        Menu->setLayoutDirection(Qt::LeftToRight);
        Menu->setAutoFillBackground(false);
        Emprestimo = new QWidget();
        Emprestimo->setObjectName(QString::fromUtf8("Emprestimo"));
        groupBox_3 = new QGroupBox(Emprestimo);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(100, 20, 431, 71));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 177, 27));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);

        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(200, 30, 192, 27));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        lineEdit_5 = new QLineEdit(layoutWidget1);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_5->addWidget(lineEdit_5);

        groupBox_4 = new QGroupBox(Emprestimo);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(100, 100, 431, 131));
        widget = new QWidget(groupBox_4);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 129, 24));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_6->addWidget(label_9);

        lineEdit_6 = new QLineEdit(widget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy);
        lineEdit_6->setMaximumSize(QSize(16777205, 16777215));

        horizontalLayout_6->addWidget(lineEdit_6);

        widget1 = new QWidget(groupBox_4);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 60, 178, 24));
        horizontalLayout_7 = new QHBoxLayout(widget1);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_7->addWidget(label_10);

        lineEdit_7 = new QLineEdit(widget1);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        horizontalLayout_7->addWidget(lineEdit_7);

        widget2 = new QWidget(groupBox_4);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(150, 30, 216, 24));
        horizontalLayout_8 = new QHBoxLayout(widget2);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_8->addWidget(label_11);

        dateEdit_2 = new QDateEdit(widget2);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));

        horizontalLayout_8->addWidget(dateEdit_2);

        widget3 = new QWidget(groupBox_4);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(230, 80, 131, 24));
        horizontalLayout_9 = new QHBoxLayout(widget3);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(widget3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_9->addWidget(label_13);

        lineEdit_9 = new QLineEdit(widget3);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        horizontalLayout_9->addWidget(lineEdit_9);

        widget4 = new QWidget(groupBox_4);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(10, 90, 141, 24));
        horizontalLayout_10 = new QHBoxLayout(widget4);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(widget4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_10->addWidget(label_12);

        lineEdit_8 = new QLineEdit(widget4);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        horizontalLayout_10->addWidget(lineEdit_8);

        groupBox_6 = new QGroupBox(Emprestimo);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(100, 240, 431, 91));
        groupBox_5 = new QGroupBox(Emprestimo);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(180, 330, 231, 61));
        widget5 = new QWidget(groupBox_5);
        widget5->setObjectName(QString::fromUtf8("widget5"));
        widget5->setGeometry(QRect(11, 21, 195, 30));
        horizontalLayout_11 = new QHBoxLayout(widget5);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(widget5);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_11->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget5);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_11->addWidget(pushButton_6);

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
        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 30, 221, 27));
        Nome = new QHBoxLayout(layoutWidget2);
        Nome->setObjectName(QString::fromUtf8("Nome"));
        Nome->setSizeConstraint(QLayout::SetNoConstraint);
        Nome->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        Nome->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        Nome->addWidget(lineEdit);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(250, 30, 177, 27));
        CPF = new QHBoxLayout(layoutWidget3);
        CPF->setObjectName(QString::fromUtf8("CPF"));
        CPF->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        CPF->addWidget(label_4);

        lineEdit_2 = new QLineEdit(layoutWidget3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        CPF->addWidget(lineEdit_2);

        layoutWidget4 = new QWidget(groupBox);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 60, 221, 27));
        Telefone = new QHBoxLayout(layoutWidget4);
        Telefone->setObjectName(QString::fromUtf8("Telefone"));
        Telefone->setSizeConstraint(QLayout::SetNoConstraint);
        Telefone->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        Telefone->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget4);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        Telefone->addWidget(lineEdit_3);

        layoutWidget5 = new QWidget(groupBox);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(0, 100, 258, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        dateEdit = new QDateEdit(layoutWidget5);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setDateTime(QDateTime(QDate(2019, 1, 1), QTime(6, 0, 0)));
        dateEdit->setCalendarPopup(true);
        dateEdit->setTimeSpec(Qt::UTC);
        dateEdit->setDate(QDate(2019, 1, 1));

        horizontalLayout->addWidget(dateEdit);

        layoutWidget6 = new QWidget(groupBox);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(250, 70, 105, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        comboBox = new QComboBox(layoutWidget6);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        groupBox_2 = new QGroupBox(usuarios);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(110, 180, 441, 121));
        layoutWidget7 = new QWidget(usuarios);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(110, 330, 441, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget7);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_4 = new QPushButton(layoutWidget7);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(layoutWidget7);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(layoutWidget7);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        Menu->addTab(usuarios, QString());
        acervo = new QWidget();
        acervo->setObjectName(QString::fromUtf8("acervo"));
        Menu->addTab(acervo, QString());
        BibliotecaDC->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BibliotecaDC);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 666, 26));
        BibliotecaDC->setMenuBar(menubar);
        statusbar = new QStatusBar(BibliotecaDC);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BibliotecaDC->setStatusBar(statusbar);

        retranslateUi(BibliotecaDC);

        Menu->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BibliotecaDC);
    } // setupUi

    void retranslateUi(QMainWindow *BibliotecaDC)
    {
        BibliotecaDC->setWindowTitle(QCoreApplication::translate("BibliotecaDC", "BibliotecaDC", nullptr));
        label->setText(QCoreApplication::translate("BibliotecaDC", "Bibliotaca DC", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("BibliotecaDC", "Nome", nullptr));
        label_7->setText(QCoreApplication::translate("BibliotecaDC", "CPF", nullptr));
        label_8->setText(QCoreApplication::translate("BibliotecaDC", "Nome", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("BibliotecaDC", "Livro", nullptr));
        label_9->setText(QCoreApplication::translate("BibliotecaDC", "Cod. Livro", nullptr));
        label_10->setText(QCoreApplication::translate("BibliotecaDC", "T\303\255tulo", nullptr));
        label_11->setText(QCoreApplication::translate("BibliotecaDC", "Data do Emprestimo", nullptr));
        label_13->setText(QCoreApplication::translate("BibliotecaDC", "Editora", nullptr));
        label_12->setText(QCoreApplication::translate("BibliotecaDC", "Edi\303\247\303\243o", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("BibliotecaDC", "Filtos de Livros", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("BibliotecaDC", "Comandos", nullptr));
        pushButton_5->setText(QCoreApplication::translate("BibliotecaDC", "Emprestar", nullptr));
        pushButton_6->setText(QCoreApplication::translate("BibliotecaDC", "Emprestados", nullptr));
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
