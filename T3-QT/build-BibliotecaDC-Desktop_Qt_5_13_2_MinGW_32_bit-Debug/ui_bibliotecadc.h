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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
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
    QLineEdit *txtEmprestimoCpf;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *txtEmprestimoNome;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_15;
    QWidget *layoutWidget_16;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_31;
    QLineEdit *txtAcervoIdLivro_2;
    QWidget *layoutWidget_17;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_32;
    QLineEdit *txtAcervoTitulo_2;
    QWidget *layoutWidget_18;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_33;
    QLineEdit *txtAcervoEdicao_2;
    QWidget *layoutWidget_19;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_34;
    QLineEdit *txtAcervoAutor_2;
    QWidget *layoutWidget_20;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_35;
    QDateEdit *dtAcervoDataAquiscao_2;
    QWidget *layoutWidget_21;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_36;
    QLineEdit *txtAcervoEditora_2;
    QPushButton *pushButton_6;
    QGroupBox *groupBox_16;
    QTableWidget *tblEmprestimoEmprestimo;
    QWidget *Devolucao;
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
    QWidget *usuarios;
    QGroupBox *groupBox;
    QWidget *layoutWidget3;
    QHBoxLayout *Nome;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QWidget *layoutWidget4;
    QHBoxLayout *CPF;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget5;
    QHBoxLayout *Telefone;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QComboBox *comboBox;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QWidget *acervo;
    QGroupBox *groupBox_12;
    QTableWidget *tblAcervoLivros;
    QGroupBox *groupBox_13;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_26;
    QPushButton *btnAcervoCadastrar;
    QPushButton *btnAcervoEditar;
    QPushButton *btnAcervoExcluir;
    QPushButton *btnAcervoLimpar;
    QPushButton *btnAcervoPesquisar;
    QGroupBox *groupBox_14;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_25;
    QLineEdit *txtAcervoIdLivro;
    QWidget *layoutWidget_11;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_26;
    QLineEdit *txtAcervoTitulo;
    QWidget *layoutWidget_14;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_29;
    QLineEdit *txtAcervoEdicao;
    QWidget *layoutWidget_12;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_27;
    QLineEdit *txtAcervoAutor;
    QWidget *layoutWidget_15;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_30;
    QDateEdit *dtAcervoDataAquiscao;
    QWidget *layoutWidget_13;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_28;
    QLineEdit *txtAcervoEditora;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BibliotecaDC)
    {
        if (BibliotecaDC->objectName().isEmpty())
            BibliotecaDC->setObjectName(QString::fromUtf8("BibliotecaDC"));
        BibliotecaDC->resize(882, 845);
        centralwidget = new QWidget(BibliotecaDC);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 20, 741, 101));
        QFont font;
        font.setPointSize(48);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        Menu = new QTabWidget(centralwidget);
        Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->setGeometry(QRect(20, 130, 841, 681));
        Menu->setLayoutDirection(Qt::LeftToRight);
        Menu->setAutoFillBackground(false);
        Emprestimo = new QWidget();
        Emprestimo->setObjectName(QString::fromUtf8("Emprestimo"));
        groupBox_3 = new QGroupBox(Emprestimo);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 20, 791, 71));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 161, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        txtEmprestimoCpf = new QLineEdit(layoutWidget);
        txtEmprestimoCpf->setObjectName(QString::fromUtf8("txtEmprestimoCpf"));

        horizontalLayout_4->addWidget(txtEmprestimoCpf);

        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(250, 30, 192, 27));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        txtEmprestimoNome = new QLineEdit(layoutWidget1);
        txtEmprestimoNome->setObjectName(QString::fromUtf8("txtEmprestimoNome"));
        txtEmprestimoNome->setEnabled(false);
        txtEmprestimoNome->setReadOnly(true);

        horizontalLayout_5->addWidget(txtEmprestimoNome);

        groupBox_5 = new QGroupBox(Emprestimo);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 230, 791, 61));
        layoutWidget2 = new QWidget(groupBox_5);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(11, 21, 151, 30));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(layoutWidget2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_11->addWidget(pushButton_5);

        groupBox_15 = new QGroupBox(Emprestimo);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        groupBox_15->setGeometry(QRect(20, 100, 791, 121));
        layoutWidget_16 = new QWidget(groupBox_15);
        layoutWidget_16->setObjectName(QString::fromUtf8("layoutWidget_16"));
        layoutWidget_16->setGeometry(QRect(20, 30, 129, 24));
        horizontalLayout_27 = new QHBoxLayout(layoutWidget_16);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        horizontalLayout_27->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_27->setContentsMargins(0, 0, 0, 0);
        label_31 = new QLabel(layoutWidget_16);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_27->addWidget(label_31);

        txtAcervoIdLivro_2 = new QLineEdit(layoutWidget_16);
        txtAcervoIdLivro_2->setObjectName(QString::fromUtf8("txtAcervoIdLivro_2"));
        txtAcervoIdLivro_2->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txtAcervoIdLivro_2->sizePolicy().hasHeightForWidth());
        txtAcervoIdLivro_2->setSizePolicy(sizePolicy);
        txtAcervoIdLivro_2->setMaximumSize(QSize(16777205, 16777215));

        horizontalLayout_27->addWidget(txtAcervoIdLivro_2);

        layoutWidget_17 = new QWidget(groupBox_15);
        layoutWidget_17->setObjectName(QString::fromUtf8("layoutWidget_17"));
        layoutWidget_17->setGeometry(QRect(190, 30, 291, 24));
        horizontalLayout_28 = new QHBoxLayout(layoutWidget_17);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        horizontalLayout_28->setContentsMargins(0, 0, 0, 0);
        label_32 = new QLabel(layoutWidget_17);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_28->addWidget(label_32);

        txtAcervoTitulo_2 = new QLineEdit(layoutWidget_17);
        txtAcervoTitulo_2->setObjectName(QString::fromUtf8("txtAcervoTitulo_2"));
        txtAcervoTitulo_2->setEnabled(false);
        txtAcervoTitulo_2->setReadOnly(false);

        horizontalLayout_28->addWidget(txtAcervoTitulo_2);

        layoutWidget_18 = new QWidget(groupBox_15);
        layoutWidget_18->setObjectName(QString::fromUtf8("layoutWidget_18"));
        layoutWidget_18->setGeometry(QRect(400, 80, 131, 24));
        horizontalLayout_29 = new QHBoxLayout(layoutWidget_18);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        horizontalLayout_29->setContentsMargins(0, 0, 0, 0);
        label_33 = new QLabel(layoutWidget_18);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_29->addWidget(label_33);

        txtAcervoEdicao_2 = new QLineEdit(layoutWidget_18);
        txtAcervoEdicao_2->setObjectName(QString::fromUtf8("txtAcervoEdicao_2"));
        txtAcervoEdicao_2->setEnabled(false);

        horizontalLayout_29->addWidget(txtAcervoEdicao_2);

        layoutWidget_19 = new QWidget(groupBox_15);
        layoutWidget_19->setObjectName(QString::fromUtf8("layoutWidget_19"));
        layoutWidget_19->setGeometry(QRect(520, 30, 251, 24));
        horizontalLayout_30 = new QHBoxLayout(layoutWidget_19);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        horizontalLayout_30->setContentsMargins(0, 0, 0, 0);
        label_34 = new QLabel(layoutWidget_19);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_30->addWidget(label_34);

        txtAcervoAutor_2 = new QLineEdit(layoutWidget_19);
        txtAcervoAutor_2->setObjectName(QString::fromUtf8("txtAcervoAutor_2"));
        txtAcervoAutor_2->setEnabled(false);
        txtAcervoAutor_2->setReadOnly(false);

        horizontalLayout_30->addWidget(txtAcervoAutor_2);

        layoutWidget_20 = new QWidget(groupBox_15);
        layoutWidget_20->setObjectName(QString::fromUtf8("layoutWidget_20"));
        layoutWidget_20->setGeometry(QRect(570, 80, 201, 24));
        horizontalLayout_31 = new QHBoxLayout(layoutWidget_20);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        horizontalLayout_31->setContentsMargins(0, 0, 0, 0);
        label_35 = new QLabel(layoutWidget_20);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_31->addWidget(label_35);

        dtAcervoDataAquiscao_2 = new QDateEdit(layoutWidget_20);
        dtAcervoDataAquiscao_2->setObjectName(QString::fromUtf8("dtAcervoDataAquiscao_2"));
        dtAcervoDataAquiscao_2->setEnabled(false);
        dtAcervoDataAquiscao_2->setLayoutDirection(Qt::LeftToRight);
        dtAcervoDataAquiscao_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dtAcervoDataAquiscao_2->setMinimumDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        dtAcervoDataAquiscao_2->setMinimumDate(QDate(2000, 1, 1));
        dtAcervoDataAquiscao_2->setCalendarPopup(true);

        horizontalLayout_31->addWidget(dtAcervoDataAquiscao_2);

        layoutWidget_21 = new QWidget(groupBox_15);
        layoutWidget_21->setObjectName(QString::fromUtf8("layoutWidget_21"));
        layoutWidget_21->setGeometry(QRect(20, 80, 341, 24));
        horizontalLayout_32 = new QHBoxLayout(layoutWidget_21);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        horizontalLayout_32->setContentsMargins(0, 0, 0, 0);
        label_36 = new QLabel(layoutWidget_21);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        horizontalLayout_32->addWidget(label_36);

        txtAcervoEditora_2 = new QLineEdit(layoutWidget_21);
        txtAcervoEditora_2->setObjectName(QString::fromUtf8("txtAcervoEditora_2"));
        txtAcervoEditora_2->setEnabled(false);

        horizontalLayout_32->addWidget(txtAcervoEditora_2);

        pushButton_6 = new QPushButton(groupBox_15);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(160, 30, 22, 22));
        QIcon icon;
        icon.addFile(QString::fromUtf8("lupa.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8("lupa.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_6->setIcon(icon);
        groupBox_16 = new QGroupBox(Emprestimo);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        groupBox_16->setGeometry(QRect(20, 300, 781, 341));
        tblEmprestimoEmprestimo = new QTableWidget(groupBox_16);
        tblEmprestimoEmprestimo->setObjectName(QString::fromUtf8("tblEmprestimoEmprestimo"));
        tblEmprestimoEmprestimo->setGeometry(QRect(20, 30, 741, 291));
        tblEmprestimoEmprestimo->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblEmprestimoEmprestimo->horizontalHeader()->setCascadingSectionResizes(true);
        Menu->addTab(Emprestimo, QString());
        Devolucao = new QWidget();
        Devolucao->setObjectName(QString::fromUtf8("Devolucao"));
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

        Menu->addTab(Devolucao, QString());
        usuarios = new QWidget();
        usuarios->setObjectName(QString::fromUtf8("usuarios"));
        groupBox = new QGroupBox(usuarios);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(110, 20, 441, 141));
        groupBox->setAutoFillBackground(false);
        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 30, 221, 27));
        Nome = new QHBoxLayout(layoutWidget3);
        Nome->setObjectName(QString::fromUtf8("Nome"));
        Nome->setSizeConstraint(QLayout::SetNoConstraint);
        Nome->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        Nome->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        Nome->addWidget(lineEdit);

        layoutWidget4 = new QWidget(groupBox);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(250, 30, 177, 27));
        CPF = new QHBoxLayout(layoutWidget4);
        CPF->setObjectName(QString::fromUtf8("CPF"));
        CPF->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        CPF->addWidget(label_4);

        lineEdit_2 = new QLineEdit(layoutWidget4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        CPF->addWidget(lineEdit_2);

        layoutWidget5 = new QWidget(groupBox);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(0, 60, 221, 27));
        Telefone = new QHBoxLayout(layoutWidget5);
        Telefone->setObjectName(QString::fromUtf8("Telefone"));
        Telefone->setSizeConstraint(QLayout::SetNoConstraint);
        Telefone->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        Telefone->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget5);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        Telefone->addWidget(lineEdit_3);

        layoutWidget6 = new QWidget(groupBox);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(0, 100, 258, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        dateEdit = new QDateEdit(layoutWidget6);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setDateTime(QDateTime(QDate(2019, 1, 1), QTime(18, 0, 0)));
        dateEdit->setCalendarPopup(true);
        dateEdit->setTimeSpec(Qt::UTC);
        dateEdit->setDate(QDate(2019, 1, 1));

        horizontalLayout->addWidget(dateEdit);

        layoutWidget7 = new QWidget(groupBox);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(250, 70, 105, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget7);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        comboBox = new QComboBox(layoutWidget7);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        groupBox_2 = new QGroupBox(usuarios);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(110, 180, 441, 121));
        layoutWidget8 = new QWidget(usuarios);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(110, 330, 441, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget8);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_4 = new QPushButton(layoutWidget8);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(layoutWidget8);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(layoutWidget8);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        Menu->addTab(usuarios, QString());
        acervo = new QWidget();
        acervo->setObjectName(QString::fromUtf8("acervo"));
        groupBox_12 = new QGroupBox(acervo);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setGeometry(QRect(20, 240, 781, 401));
        tblAcervoLivros = new QTableWidget(groupBox_12);
        tblAcervoLivros->setObjectName(QString::fromUtf8("tblAcervoLivros"));
        tblAcervoLivros->setGeometry(QRect(20, 30, 741, 351));
        tblAcervoLivros->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblAcervoLivros->horizontalHeader()->setCascadingSectionResizes(true);
        groupBox_13 = new QGroupBox(acervo);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setGeometry(QRect(20, 140, 791, 91));
        horizontalLayoutWidget = new QWidget(groupBox_13);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 30, 751, 41));
        horizontalLayout_26 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        btnAcervoCadastrar = new QPushButton(horizontalLayoutWidget);
        btnAcervoCadastrar->setObjectName(QString::fromUtf8("btnAcervoCadastrar"));
        btnAcervoCadastrar->setMinimumSize(QSize(140, 0));

        horizontalLayout_26->addWidget(btnAcervoCadastrar);

        btnAcervoEditar = new QPushButton(horizontalLayoutWidget);
        btnAcervoEditar->setObjectName(QString::fromUtf8("btnAcervoEditar"));

        horizontalLayout_26->addWidget(btnAcervoEditar);

        btnAcervoExcluir = new QPushButton(horizontalLayoutWidget);
        btnAcervoExcluir->setObjectName(QString::fromUtf8("btnAcervoExcluir"));

        horizontalLayout_26->addWidget(btnAcervoExcluir);

        btnAcervoLimpar = new QPushButton(horizontalLayoutWidget);
        btnAcervoLimpar->setObjectName(QString::fromUtf8("btnAcervoLimpar"));

        horizontalLayout_26->addWidget(btnAcervoLimpar);

        btnAcervoPesquisar = new QPushButton(horizontalLayoutWidget);
        btnAcervoPesquisar->setObjectName(QString::fromUtf8("btnAcervoPesquisar"));

        horizontalLayout_26->addWidget(btnAcervoPesquisar);

        groupBox_14 = new QGroupBox(acervo);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setGeometry(QRect(20, 10, 791, 121));
        layoutWidget_10 = new QWidget(groupBox_14);
        layoutWidget_10->setObjectName(QString::fromUtf8("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(20, 30, 129, 24));
        horizontalLayout_20 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(layoutWidget_10);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_20->addWidget(label_25);

        txtAcervoIdLivro = new QLineEdit(layoutWidget_10);
        txtAcervoIdLivro->setObjectName(QString::fromUtf8("txtAcervoIdLivro"));
        txtAcervoIdLivro->setEnabled(true);
        sizePolicy.setHeightForWidth(txtAcervoIdLivro->sizePolicy().hasHeightForWidth());
        txtAcervoIdLivro->setSizePolicy(sizePolicy);
        txtAcervoIdLivro->setMaximumSize(QSize(16777205, 16777215));

        horizontalLayout_20->addWidget(txtAcervoIdLivro);

        layoutWidget_11 = new QWidget(groupBox_14);
        layoutWidget_11->setObjectName(QString::fromUtf8("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(190, 30, 291, 24));
        horizontalLayout_21 = new QHBoxLayout(layoutWidget_11);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(layoutWidget_11);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_21->addWidget(label_26);

        txtAcervoTitulo = new QLineEdit(layoutWidget_11);
        txtAcervoTitulo->setObjectName(QString::fromUtf8("txtAcervoTitulo"));
        txtAcervoTitulo->setReadOnly(false);

        horizontalLayout_21->addWidget(txtAcervoTitulo);

        layoutWidget_14 = new QWidget(groupBox_14);
        layoutWidget_14->setObjectName(QString::fromUtf8("layoutWidget_14"));
        layoutWidget_14->setGeometry(QRect(400, 80, 131, 24));
        horizontalLayout_24 = new QHBoxLayout(layoutWidget_14);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(layoutWidget_14);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_24->addWidget(label_29);

        txtAcervoEdicao = new QLineEdit(layoutWidget_14);
        txtAcervoEdicao->setObjectName(QString::fromUtf8("txtAcervoEdicao"));

        horizontalLayout_24->addWidget(txtAcervoEdicao);

        layoutWidget_12 = new QWidget(groupBox_14);
        layoutWidget_12->setObjectName(QString::fromUtf8("layoutWidget_12"));
        layoutWidget_12->setGeometry(QRect(520, 30, 251, 24));
        horizontalLayout_22 = new QHBoxLayout(layoutWidget_12);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        label_27 = new QLabel(layoutWidget_12);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_22->addWidget(label_27);

        txtAcervoAutor = new QLineEdit(layoutWidget_12);
        txtAcervoAutor->setObjectName(QString::fromUtf8("txtAcervoAutor"));
        txtAcervoAutor->setReadOnly(false);

        horizontalLayout_22->addWidget(txtAcervoAutor);

        layoutWidget_15 = new QWidget(groupBox_14);
        layoutWidget_15->setObjectName(QString::fromUtf8("layoutWidget_15"));
        layoutWidget_15->setGeometry(QRect(570, 80, 201, 24));
        horizontalLayout_25 = new QHBoxLayout(layoutWidget_15);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(layoutWidget_15);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_25->addWidget(label_30);

        dtAcervoDataAquiscao = new QDateEdit(layoutWidget_15);
        dtAcervoDataAquiscao->setObjectName(QString::fromUtf8("dtAcervoDataAquiscao"));
        dtAcervoDataAquiscao->setLayoutDirection(Qt::LeftToRight);
        dtAcervoDataAquiscao->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dtAcervoDataAquiscao->setMinimumDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        dtAcervoDataAquiscao->setMinimumDate(QDate(2000, 1, 1));
        dtAcervoDataAquiscao->setCalendarPopup(true);

        horizontalLayout_25->addWidget(dtAcervoDataAquiscao);

        layoutWidget_13 = new QWidget(groupBox_14);
        layoutWidget_13->setObjectName(QString::fromUtf8("layoutWidget_13"));
        layoutWidget_13->setGeometry(QRect(20, 80, 341, 24));
        horizontalLayout_23 = new QHBoxLayout(layoutWidget_13);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(layoutWidget_13);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        horizontalLayout_23->addWidget(label_28);

        txtAcervoEditora = new QLineEdit(layoutWidget_13);
        txtAcervoEditora->setObjectName(QString::fromUtf8("txtAcervoEditora"));

        horizontalLayout_23->addWidget(txtAcervoEditora);

        Menu->addTab(acervo, QString());
        BibliotecaDC->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BibliotecaDC);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 882, 26));
        BibliotecaDC->setMenuBar(menubar);
        statusbar = new QStatusBar(BibliotecaDC);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BibliotecaDC->setStatusBar(statusbar);
        QWidget::setTabOrder(Menu, txtEmprestimoCpf);
        QWidget::setTabOrder(txtEmprestimoCpf, txtEmprestimoNome);
        QWidget::setTabOrder(txtEmprestimoNome, pushButton_5);
        QWidget::setTabOrder(pushButton_5, lineEdit_10);
        QWidget::setTabOrder(lineEdit_10, lineEdit_11);
        QWidget::setTabOrder(lineEdit_11, lineEdit_12);
        QWidget::setTabOrder(lineEdit_12, dateEdit_3);
        QWidget::setTabOrder(dateEdit_3, lineEdit_13);
        QWidget::setTabOrder(lineEdit_13, lineEdit_14);
        QWidget::setTabOrder(lineEdit_14, lineEdit_15);
        QWidget::setTabOrder(lineEdit_15, pushButton_7);
        QWidget::setTabOrder(pushButton_7, pushButton_8);
        QWidget::setTabOrder(pushButton_8, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, comboBox);
        QWidget::setTabOrder(comboBox, dateEdit);
        QWidget::setTabOrder(dateEdit, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton_2);
        QWidget::setTabOrder(pushButton_2, txtAcervoIdLivro);
        QWidget::setTabOrder(txtAcervoIdLivro, txtAcervoTitulo);
        QWidget::setTabOrder(txtAcervoTitulo, txtAcervoAutor);
        QWidget::setTabOrder(txtAcervoAutor, txtAcervoEditora);
        QWidget::setTabOrder(txtAcervoEditora, txtAcervoEdicao);
        QWidget::setTabOrder(txtAcervoEdicao, dtAcervoDataAquiscao);
        QWidget::setTabOrder(dtAcervoDataAquiscao, btnAcervoCadastrar);
        QWidget::setTabOrder(btnAcervoCadastrar, btnAcervoEditar);
        QWidget::setTabOrder(btnAcervoEditar, btnAcervoExcluir);
        QWidget::setTabOrder(btnAcervoExcluir, btnAcervoLimpar);
        QWidget::setTabOrder(btnAcervoLimpar, tblAcervoLivros);
        QWidget::setTabOrder(tblAcervoLivros, btnAcervoPesquisar);

        retranslateUi(BibliotecaDC);

        Menu->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BibliotecaDC);
    } // setupUi

    void retranslateUi(QMainWindow *BibliotecaDC)
    {
        BibliotecaDC->setWindowTitle(QCoreApplication::translate("BibliotecaDC", "BibliotecaDC", nullptr));
        label->setText(QCoreApplication::translate("BibliotecaDC", "Biblioteca DC", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("BibliotecaDC", "Usu\303\241rio", nullptr));
        label_7->setText(QCoreApplication::translate("BibliotecaDC", "CPF", nullptr));
        label_8->setText(QCoreApplication::translate("BibliotecaDC", "Nome", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("BibliotecaDC", "Opera\303\247\303\265es", nullptr));
        pushButton_5->setText(QCoreApplication::translate("BibliotecaDC", "Emprestar", nullptr));
        groupBox_15->setTitle(QCoreApplication::translate("BibliotecaDC", "Livro", nullptr));
        label_31->setText(QCoreApplication::translate("BibliotecaDC", "Cod. Livro", nullptr));
        label_32->setText(QCoreApplication::translate("BibliotecaDC", "T\303\255tulo", nullptr));
        label_33->setText(QCoreApplication::translate("BibliotecaDC", "Edi\303\247\303\243o", nullptr));
        label_34->setText(QCoreApplication::translate("BibliotecaDC", "Autor", nullptr));
        label_35->setText(QCoreApplication::translate("BibliotecaDC", "Data Aquisi\303\247\303\243o", nullptr));
        label_36->setText(QCoreApplication::translate("BibliotecaDC", "Editora", nullptr));
        pushButton_6->setText(QString());
        groupBox_16->setTitle(QCoreApplication::translate("BibliotecaDC", "Empr\303\251stimos", nullptr));
        Menu->setTabText(Menu->indexOf(Emprestimo), QCoreApplication::translate("BibliotecaDC", "Emprestimo", nullptr));
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
        groupBox_12->setTitle(QCoreApplication::translate("BibliotecaDC", "Acervo", nullptr));
        groupBox_13->setTitle(QCoreApplication::translate("BibliotecaDC", "Opera\303\247\303\265es", nullptr));
        btnAcervoCadastrar->setText(QCoreApplication::translate("BibliotecaDC", "Cadastrar", nullptr));
        btnAcervoEditar->setText(QCoreApplication::translate("BibliotecaDC", "Editar", nullptr));
        btnAcervoExcluir->setText(QCoreApplication::translate("BibliotecaDC", "Excluir", nullptr));
        btnAcervoLimpar->setText(QCoreApplication::translate("BibliotecaDC", "Limpar", nullptr));
        btnAcervoPesquisar->setText(QCoreApplication::translate("BibliotecaDC", "Pesquisar", nullptr));
        groupBox_14->setTitle(QCoreApplication::translate("BibliotecaDC", "Livro", nullptr));
        label_25->setText(QCoreApplication::translate("BibliotecaDC", "Cod. Livro", nullptr));
        label_26->setText(QCoreApplication::translate("BibliotecaDC", "T\303\255tulo", nullptr));
        label_29->setText(QCoreApplication::translate("BibliotecaDC", "Edi\303\247\303\243o", nullptr));
        label_27->setText(QCoreApplication::translate("BibliotecaDC", "Autor", nullptr));
        label_30->setText(QCoreApplication::translate("BibliotecaDC", "Data Aquisi\303\247\303\243o", nullptr));
        label_28->setText(QCoreApplication::translate("BibliotecaDC", "Editora", nullptr));
        Menu->setTabText(Menu->indexOf(acervo), QCoreApplication::translate("BibliotecaDC", "Acervo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BibliotecaDC: public Ui_BibliotecaDC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIBLIOTECADC_H
