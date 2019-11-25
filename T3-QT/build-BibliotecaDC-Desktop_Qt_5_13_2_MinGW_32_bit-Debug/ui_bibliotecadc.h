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
<<<<<<< HEAD
#include <QtWidgets/QGridLayout>
=======
>>>>>>> master
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
<<<<<<< HEAD
    QGroupBox *groupBox_7;
    QGroupBox *groupBox_8;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QGroupBox *groupBox_9;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_14;
    QLineEdit *lineEdit_10;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_15;
    QLineEdit *lineEdit_11;
    QGroupBox *groupBox_10;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_16;
    QLineEdit *lineEdit_12;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_17;
    QLineEdit *lineEdit_13;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_18;
    QDateEdit *dateEdit_3;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_19;
    QLineEdit *lineEdit_14;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_20;
    QLineEdit *lineEdit_15;
=======
>>>>>>> master
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
<<<<<<< HEAD
    QGroupBox *groupBox_12;
    QGroupBox *groupBox_13;
    QWidget *widget6;
    QGridLayout *gridLayout;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QGroupBox *groupBox_14;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_25;
    QLineEdit *lineEdit_16;
    QWidget *layoutWidget_11;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_26;
    QLineEdit *lineEdit_17;
    QWidget *layoutWidget_13;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_28;
    QLineEdit *lineEdit_18;
    QWidget *layoutWidget_14;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_29;
    QLineEdit *lineEdit_19;
=======
>>>>>>> master
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
<<<<<<< HEAD
        groupBox_7 = new QGroupBox(Devolucao);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(100, 240, 431, 91));
        groupBox_8 = new QGroupBox(Devolucao);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(180, 330, 231, 61));
        layoutWidget_2 = new QWidget(groupBox_8);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(11, 21, 195, 30));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(layoutWidget_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout_12->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        horizontalLayout_12->addWidget(pushButton_8);

        groupBox_9 = new QGroupBox(Devolucao);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(100, 20, 431, 71));
        layoutWidget_3 = new QWidget(groupBox_9);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 30, 177, 27));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_13->addWidget(label_14);

        lineEdit_10 = new QLineEdit(layoutWidget_3);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));

        horizontalLayout_13->addWidget(lineEdit_10);

        layoutWidget_4 = new QWidget(groupBox_9);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(200, 30, 192, 27));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_14->addWidget(label_15);

        lineEdit_11 = new QLineEdit(layoutWidget_4);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));

        horizontalLayout_14->addWidget(lineEdit_11);

        groupBox_10 = new QGroupBox(Devolucao);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(100, 100, 431, 131));
        layoutWidget_5 = new QWidget(groupBox_10);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 30, 129, 24));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_15->addWidget(label_16);

        lineEdit_12 = new QLineEdit(layoutWidget_5);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEdit_12->sizePolicy().hasHeightForWidth());
        lineEdit_12->setSizePolicy(sizePolicy);
        lineEdit_12->setMaximumSize(QSize(16777205, 16777215));

        horizontalLayout_15->addWidget(lineEdit_12);

        layoutWidget_6 = new QWidget(groupBox_10);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(10, 60, 178, 24));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget_6);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_16->addWidget(label_17);

        lineEdit_13 = new QLineEdit(layoutWidget_6);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));

        horizontalLayout_16->addWidget(lineEdit_13);

        layoutWidget_7 = new QWidget(groupBox_10);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(150, 30, 219, 24));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget_7);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_17->addWidget(label_18);

        dateEdit_3 = new QDateEdit(layoutWidget_7);
        dateEdit_3->setObjectName(QString::fromUtf8("dateEdit_3"));

        horizontalLayout_17->addWidget(dateEdit_3);

        layoutWidget_8 = new QWidget(groupBox_10);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(230, 80, 131, 24));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget_8);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_18->addWidget(label_19);

        lineEdit_14 = new QLineEdit(layoutWidget_8);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));

        horizontalLayout_18->addWidget(lineEdit_14);

        layoutWidget_9 = new QWidget(groupBox_10);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(10, 90, 141, 24));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget_9);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_19->addWidget(label_20);

        lineEdit_15 = new QLineEdit(layoutWidget_9);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));

        horizontalLayout_19->addWidget(lineEdit_15);

=======
>>>>>>> master
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
<<<<<<< HEAD
        groupBox_12 = new QGroupBox(acervo);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setGeometry(QRect(50, 250, 411, 80));
        groupBox_13 = new QGroupBox(acervo);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setGeometry(QRect(419, 79, 211, 141));
        widget6 = new QWidget(groupBox_13);
        widget6->setObjectName(QString::fromUtf8("widget6"));
        widget6->setGeometry(QRect(10, 30, 195, 101));
        gridLayout = new QGridLayout(widget6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_9 = new QPushButton(widget6);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 0, 0, 1, 1);

        pushButton_10 = new QPushButton(widget6);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout->addWidget(pushButton_10, 0, 1, 1, 1);

        pushButton_11 = new QPushButton(widget6);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout->addWidget(pushButton_11, 1, 0, 1, 1);

        pushButton_12 = new QPushButton(widget6);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout->addWidget(pushButton_12, 1, 1, 1, 1);

        groupBox_14 = new QGroupBox(acervo);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setGeometry(QRect(20, 30, 391, 141));
        layoutWidget_10 = new QWidget(groupBox_14);
        layoutWidget_10->setObjectName(QString::fromUtf8("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(10, 30, 129, 24));
        horizontalLayout_20 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(layoutWidget_10);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_20->addWidget(label_25);

        lineEdit_16 = new QLineEdit(layoutWidget_10);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEdit_16->sizePolicy().hasHeightForWidth());
        lineEdit_16->setSizePolicy(sizePolicy);
        lineEdit_16->setMaximumSize(QSize(16777205, 16777215));

        horizontalLayout_20->addWidget(lineEdit_16);

        layoutWidget_11 = new QWidget(groupBox_14);
        layoutWidget_11->setObjectName(QString::fromUtf8("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(160, 30, 178, 24));
        horizontalLayout_21 = new QHBoxLayout(layoutWidget_11);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(layoutWidget_11);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_21->addWidget(label_26);

        lineEdit_17 = new QLineEdit(layoutWidget_11);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));

        horizontalLayout_21->addWidget(lineEdit_17);

        layoutWidget_13 = new QWidget(groupBox_14);
        layoutWidget_13->setObjectName(QString::fromUtf8("layoutWidget_13"));
        layoutWidget_13->setGeometry(QRect(180, 80, 131, 24));
        horizontalLayout_23 = new QHBoxLayout(layoutWidget_13);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(layoutWidget_13);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        horizontalLayout_23->addWidget(label_28);

        lineEdit_18 = new QLineEdit(layoutWidget_13);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));

        horizontalLayout_23->addWidget(lineEdit_18);

        layoutWidget_14 = new QWidget(groupBox_14);
        layoutWidget_14->setObjectName(QString::fromUtf8("layoutWidget_14"));
        layoutWidget_14->setGeometry(QRect(10, 80, 141, 24));
        horizontalLayout_24 = new QHBoxLayout(layoutWidget_14);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(layoutWidget_14);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_24->addWidget(label_29);

        lineEdit_19 = new QLineEdit(layoutWidget_14);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));

        horizontalLayout_24->addWidget(lineEdit_19);

=======
>>>>>>> master
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

<<<<<<< HEAD
        Menu->setCurrentIndex(3);
=======
        Menu->setCurrentIndex(0);
>>>>>>> master


        QMetaObject::connectSlotsByName(BibliotecaDC);
    } // setupUi

    void retranslateUi(QMainWindow *BibliotecaDC)
    {
        BibliotecaDC->setWindowTitle(QCoreApplication::translate("BibliotecaDC", "BibliotecaDC", nullptr));
<<<<<<< HEAD
        label->setText(QCoreApplication::translate("BibliotecaDC", "Biblioteca DC", nullptr));
=======
        label->setText(QCoreApplication::translate("BibliotecaDC", "Bibliotaca DC", nullptr));
>>>>>>> master
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
<<<<<<< HEAD
        groupBox_7->setTitle(QCoreApplication::translate("BibliotecaDC", "Filtos de Reservas", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("BibliotecaDC", "Comandos", nullptr));
        pushButton_7->setText(QCoreApplication::translate("BibliotecaDC", "Devolver", nullptr));
        pushButton_8->setText(QCoreApplication::translate("BibliotecaDC", "Devolvidos", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("BibliotecaDC", "Nome", nullptr));
        label_14->setText(QCoreApplication::translate("BibliotecaDC", "CPF", nullptr));
        label_15->setText(QCoreApplication::translate("BibliotecaDC", "Nome", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("BibliotecaDC", "Livro", nullptr));
        label_16->setText(QCoreApplication::translate("BibliotecaDC", "Cod. Livro", nullptr));
        label_17->setText(QCoreApplication::translate("BibliotecaDC", "T\303\255tulo", nullptr));
        label_18->setText(QCoreApplication::translate("BibliotecaDC", "Data da Devolu\303\247\303\243o", nullptr));
        label_19->setText(QCoreApplication::translate("BibliotecaDC", "Editora", nullptr));
        label_20->setText(QCoreApplication::translate("BibliotecaDC", "Edi\303\247\303\243o", nullptr));
=======
>>>>>>> master
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
<<<<<<< HEAD
        groupBox_12->setTitle(QCoreApplication::translate("BibliotecaDC", "Pesquisa de Livros", nullptr));
        groupBox_13->setTitle(QCoreApplication::translate("BibliotecaDC", "Comandos", nullptr));
        pushButton_9->setText(QCoreApplication::translate("BibliotecaDC", "Cadastrar", nullptr));
        pushButton_10->setText(QCoreApplication::translate("BibliotecaDC", "Pesquisar", nullptr));
        pushButton_11->setText(QCoreApplication::translate("BibliotecaDC", "Editar", nullptr));
        pushButton_12->setText(QCoreApplication::translate("BibliotecaDC", "Apagar", nullptr));
        groupBox_14->setTitle(QCoreApplication::translate("BibliotecaDC", "Livro", nullptr));
        label_25->setText(QCoreApplication::translate("BibliotecaDC", "Cod. Livro", nullptr));
        label_26->setText(QCoreApplication::translate("BibliotecaDC", "T\303\255tulo", nullptr));
        label_28->setText(QCoreApplication::translate("BibliotecaDC", "Editora", nullptr));
        label_29->setText(QCoreApplication::translate("BibliotecaDC", "Edi\303\247\303\243o", nullptr));
=======
>>>>>>> master
        Menu->setTabText(Menu->indexOf(acervo), QCoreApplication::translate("BibliotecaDC", "Acervo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BibliotecaDC: public Ui_BibliotecaDC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIBLIOTECADC_H
