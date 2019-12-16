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
    QPushButton *btnEmprestimoPesquisarUsuario;
    QPushButton *btnEmprestimoPesquisarUsuario_2;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *btnEmprestimoEmprestar;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *btnEmprestimoDevolver;
    QPushButton *btnEmprestimoLimpar;
    QGroupBox *groupBox_15;
    QWidget *layoutWidget_16;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_31;
    QLineEdit *txtEmprestimoIdLivro;
    QWidget *layoutWidget_17;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_32;
    QLineEdit *txtEmprestimoTitulo;
    QWidget *layoutWidget_18;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_33;
    QLineEdit *txtEmprestimoEdicao;
    QWidget *layoutWidget_19;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_34;
    QLineEdit *txtEmprestimoAutor;
    QWidget *layoutWidget_20;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_35;
    QDateEdit *dtEmprestimoDataAq;
    QWidget *layoutWidget_21;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_36;
    QLineEdit *txtEmprestimoEditora;
    QPushButton *btnEmprestimoPesquisarLivro;
    QGroupBox *groupBox_16;
    QTableWidget *tblEmprestimoEmprestimo;
    QWidget *usuarios;
    QGroupBox *groupBox;
    QLineEdit *txtUsuarioCPF;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *txtUsuarioNome;
    QLabel *label_9;
    QLineEdit *txtUsuarioEmail;
    QLabel *label_6;
    QComboBox *cmbUsuarioPerfil;
    QLabel *label_5;
    QLineEdit *txtUsuarioCurso;
    QLabel *label_11;
    QLineEdit *txtUsuarioIngresso;
    QLabel *label_3;
    QLineEdit *txtUsuarioRa;
    QLineEdit *txtUsuarioPenalidade;
    QLabel *label_10;
    QLineEdit *txtUsuarioLivrosEmprestados;
    QLabel *label_12;
    QGroupBox *groupBox_17;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_34;
    QPushButton *btnUsuarioCadastrar;
    QPushButton *btnUsuarioEditar;
    QPushButton *btnUsuarioExcluir;
    QPushButton *btnUsuarioLimpar;
    QGroupBox *groupBox_18;
    QTableWidget *tblUsuarioUsuario;
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
        label->setGeometry(QRect(0, 20, 881, 101));
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

        btnEmprestimoPesquisarUsuario = new QPushButton(groupBox_3);
        btnEmprestimoPesquisarUsuario->setObjectName(QString::fromUtf8("btnEmprestimoPesquisarUsuario"));
        btnEmprestimoPesquisarUsuario->setGeometry(QRect(190, 33, 22, 22));
        btnEmprestimoPesquisarUsuario_2 = new QPushButton(groupBox_3);
        btnEmprestimoPesquisarUsuario_2->setObjectName(QString::fromUtf8("btnEmprestimoPesquisarUsuario_2"));
        btnEmprestimoPesquisarUsuario_2->setGeometry(QRect(230, 70, 22, 22));
        groupBox_5 = new QGroupBox(Emprestimo);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(160, 230, 501, 61));
        layoutWidget2 = new QWidget(groupBox_5);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 20, 151, 30));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        btnEmprestimoEmprestar = new QPushButton(layoutWidget2);
        btnEmprestimoEmprestar->setObjectName(QString::fromUtf8("btnEmprestimoEmprestar"));

        horizontalLayout_11->addWidget(btnEmprestimoEmprestar);

        layoutWidget_2 = new QWidget(groupBox_5);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(180, 20, 151, 30));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        btnEmprestimoDevolver = new QPushButton(layoutWidget_2);
        btnEmprestimoDevolver->setObjectName(QString::fromUtf8("btnEmprestimoDevolver"));

        horizontalLayout_12->addWidget(btnEmprestimoDevolver);

        btnEmprestimoLimpar = new QPushButton(groupBox_5);
        btnEmprestimoLimpar->setObjectName(QString::fromUtf8("btnEmprestimoLimpar"));
        btnEmprestimoLimpar->setGeometry(QRect(340, 20, 149, 28));
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

        txtEmprestimoIdLivro = new QLineEdit(layoutWidget_16);
        txtEmprestimoIdLivro->setObjectName(QString::fromUtf8("txtEmprestimoIdLivro"));
        txtEmprestimoIdLivro->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txtEmprestimoIdLivro->sizePolicy().hasHeightForWidth());
        txtEmprestimoIdLivro->setSizePolicy(sizePolicy);
        txtEmprestimoIdLivro->setMaximumSize(QSize(16777205, 16777215));

        horizontalLayout_27->addWidget(txtEmprestimoIdLivro);

        layoutWidget_17 = new QWidget(groupBox_15);
        layoutWidget_17->setObjectName(QString::fromUtf8("layoutWidget_17"));
        layoutWidget_17->setGeometry(QRect(190, 30, 291, 24));
        horizontalLayout_28 = new QHBoxLayout(layoutWidget_17);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        horizontalLayout_28->setContentsMargins(0, 0, 0, 0);
        label_32 = new QLabel(layoutWidget_17);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_28->addWidget(label_32);

        txtEmprestimoTitulo = new QLineEdit(layoutWidget_17);
        txtEmprestimoTitulo->setObjectName(QString::fromUtf8("txtEmprestimoTitulo"));
        txtEmprestimoTitulo->setEnabled(false);
        txtEmprestimoTitulo->setReadOnly(false);

        horizontalLayout_28->addWidget(txtEmprestimoTitulo);

        layoutWidget_18 = new QWidget(groupBox_15);
        layoutWidget_18->setObjectName(QString::fromUtf8("layoutWidget_18"));
        layoutWidget_18->setGeometry(QRect(400, 80, 131, 24));
        horizontalLayout_29 = new QHBoxLayout(layoutWidget_18);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        horizontalLayout_29->setContentsMargins(0, 0, 0, 0);
        label_33 = new QLabel(layoutWidget_18);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_29->addWidget(label_33);

        txtEmprestimoEdicao = new QLineEdit(layoutWidget_18);
        txtEmprestimoEdicao->setObjectName(QString::fromUtf8("txtEmprestimoEdicao"));
        txtEmprestimoEdicao->setEnabled(false);

        horizontalLayout_29->addWidget(txtEmprestimoEdicao);

        layoutWidget_19 = new QWidget(groupBox_15);
        layoutWidget_19->setObjectName(QString::fromUtf8("layoutWidget_19"));
        layoutWidget_19->setGeometry(QRect(520, 30, 251, 24));
        horizontalLayout_30 = new QHBoxLayout(layoutWidget_19);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        horizontalLayout_30->setContentsMargins(0, 0, 0, 0);
        label_34 = new QLabel(layoutWidget_19);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_30->addWidget(label_34);

        txtEmprestimoAutor = new QLineEdit(layoutWidget_19);
        txtEmprestimoAutor->setObjectName(QString::fromUtf8("txtEmprestimoAutor"));
        txtEmprestimoAutor->setEnabled(false);
        txtEmprestimoAutor->setReadOnly(false);

        horizontalLayout_30->addWidget(txtEmprestimoAutor);

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

        dtEmprestimoDataAq = new QDateEdit(layoutWidget_20);
        dtEmprestimoDataAq->setObjectName(QString::fromUtf8("dtEmprestimoDataAq"));
        dtEmprestimoDataAq->setEnabled(false);
        dtEmprestimoDataAq->setLayoutDirection(Qt::LeftToRight);
        dtEmprestimoDataAq->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dtEmprestimoDataAq->setMinimumDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        dtEmprestimoDataAq->setMinimumDate(QDate(2000, 1, 1));
        dtEmprestimoDataAq->setCalendarPopup(true);

        horizontalLayout_31->addWidget(dtEmprestimoDataAq);

        layoutWidget_21 = new QWidget(groupBox_15);
        layoutWidget_21->setObjectName(QString::fromUtf8("layoutWidget_21"));
        layoutWidget_21->setGeometry(QRect(20, 80, 341, 24));
        horizontalLayout_32 = new QHBoxLayout(layoutWidget_21);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        horizontalLayout_32->setContentsMargins(0, 0, 0, 0);
        label_36 = new QLabel(layoutWidget_21);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        horizontalLayout_32->addWidget(label_36);

        txtEmprestimoEditora = new QLineEdit(layoutWidget_21);
        txtEmprestimoEditora->setObjectName(QString::fromUtf8("txtEmprestimoEditora"));
        txtEmprestimoEditora->setEnabled(false);

        horizontalLayout_32->addWidget(txtEmprestimoEditora);

        btnEmprestimoPesquisarLivro = new QPushButton(groupBox_15);
        btnEmprestimoPesquisarLivro->setObjectName(QString::fromUtf8("btnEmprestimoPesquisarLivro"));
        btnEmprestimoPesquisarLivro->setGeometry(QRect(160, 30, 22, 22));
        groupBox_16 = new QGroupBox(Emprestimo);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        groupBox_16->setGeometry(QRect(20, 300, 781, 341));
        tblEmprestimoEmprestimo = new QTableWidget(groupBox_16);
        tblEmprestimoEmprestimo->setObjectName(QString::fromUtf8("tblEmprestimoEmprestimo"));
        tblEmprestimoEmprestimo->setGeometry(QRect(20, 30, 741, 291));
        tblEmprestimoEmprestimo->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblEmprestimoEmprestimo->horizontalHeader()->setCascadingSectionResizes(true);
        Menu->addTab(Emprestimo, QString());
        usuarios = new QWidget();
        usuarios->setObjectName(QString::fromUtf8("usuarios"));
        groupBox = new QGroupBox(usuarios);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 791, 151));
        groupBox->setAutoFillBackground(false);
        txtUsuarioCPF = new QLineEdit(groupBox);
        txtUsuarioCPF->setObjectName(QString::fromUtf8("txtUsuarioCPF"));
        txtUsuarioCPF->setGeometry(QRect(70, 30, 131, 22));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 30, 41, 22));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 33, 22));
        txtUsuarioNome = new QLineEdit(groupBox);
        txtUsuarioNome->setObjectName(QString::fromUtf8("txtUsuarioNome"));
        txtUsuarioNome->setGeometry(QRect(70, 70, 395, 22));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 110, 36, 22));
        txtUsuarioEmail = new QLineEdit(groupBox);
        txtUsuarioEmail->setObjectName(QString::fromUtf8("txtUsuarioEmail"));
        txtUsuarioEmail->setGeometry(QRect(70, 110, 395, 22));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(640, 70, 84, 22));
        cmbUsuarioPerfil = new QComboBox(groupBox);
        cmbUsuarioPerfil->setObjectName(QString::fromUtf8("cmbUsuarioPerfil"));
        cmbUsuarioPerfil->setGeometry(QRect(690, 70, 81, 22));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(350, 30, 33, 22));
        txtUsuarioCurso = new QLineEdit(groupBox);
        txtUsuarioCurso->setObjectName(QString::fromUtf8("txtUsuarioCurso"));
        txtUsuarioCurso->setGeometry(QRect(400, 30, 201, 22));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(630, 30, 92, 22));
        txtUsuarioIngresso = new QLineEdit(groupBox);
        txtUsuarioIngresso->setObjectName(QString::fromUtf8("txtUsuarioIngresso"));
        txtUsuarioIngresso->setGeometry(QRect(725, 30, 51, 22));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 30, 16, 22));
        txtUsuarioRa = new QLineEdit(groupBox);
        txtUsuarioRa->setObjectName(QString::fromUtf8("txtUsuarioRa"));
        txtUsuarioRa->setGeometry(QRect(260, 30, 51, 22));
        txtUsuarioPenalidade = new QLineEdit(groupBox);
        txtUsuarioPenalidade->setObjectName(QString::fromUtf8("txtUsuarioPenalidade"));
        txtUsuarioPenalidade->setEnabled(false);
        txtUsuarioPenalidade->setGeometry(QRect(722, 110, 51, 22));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(660, 110, 84, 22));
        txtUsuarioLivrosEmprestados = new QLineEdit(groupBox);
        txtUsuarioLivrosEmprestados->setObjectName(QString::fromUtf8("txtUsuarioLivrosEmprestados"));
        txtUsuarioLivrosEmprestados->setEnabled(false);
        txtUsuarioLivrosEmprestados->setGeometry(QRect(600, 110, 51, 22));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(480, 110, 111, 22));
        groupBox_17 = new QGroupBox(usuarios);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        groupBox_17->setGeometry(QRect(20, 180, 791, 91));
        horizontalLayoutWidget_3 = new QWidget(groupBox_17);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 30, 751, 41));
        horizontalLayout_34 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        horizontalLayout_34->setContentsMargins(0, 0, 0, 0);
        btnUsuarioCadastrar = new QPushButton(horizontalLayoutWidget_3);
        btnUsuarioCadastrar->setObjectName(QString::fromUtf8("btnUsuarioCadastrar"));
        btnUsuarioCadastrar->setMinimumSize(QSize(140, 0));

        horizontalLayout_34->addWidget(btnUsuarioCadastrar);

        btnUsuarioEditar = new QPushButton(horizontalLayoutWidget_3);
        btnUsuarioEditar->setObjectName(QString::fromUtf8("btnUsuarioEditar"));

        horizontalLayout_34->addWidget(btnUsuarioEditar);

        btnUsuarioExcluir = new QPushButton(horizontalLayoutWidget_3);
        btnUsuarioExcluir->setObjectName(QString::fromUtf8("btnUsuarioExcluir"));

        horizontalLayout_34->addWidget(btnUsuarioExcluir);

        btnUsuarioLimpar = new QPushButton(horizontalLayoutWidget_3);
        btnUsuarioLimpar->setObjectName(QString::fromUtf8("btnUsuarioLimpar"));

        horizontalLayout_34->addWidget(btnUsuarioLimpar);

        groupBox_18 = new QGroupBox(usuarios);
        groupBox_18->setObjectName(QString::fromUtf8("groupBox_18"));
        groupBox_18->setGeometry(QRect(20, 280, 781, 371));
        tblUsuarioUsuario = new QTableWidget(groupBox_18);
        tblUsuarioUsuario->setObjectName(QString::fromUtf8("tblUsuarioUsuario"));
        tblUsuarioUsuario->setGeometry(QRect(20, 30, 741, 331));
        tblUsuarioUsuario->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblUsuarioUsuario->horizontalHeader()->setCascadingSectionResizes(true);
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
        QWidget::setTabOrder(txtEmprestimoNome, txtEmprestimoIdLivro);
        QWidget::setTabOrder(txtEmprestimoIdLivro, txtEmprestimoTitulo);
        QWidget::setTabOrder(txtEmprestimoTitulo, txtEmprestimoAutor);
        QWidget::setTabOrder(txtEmprestimoAutor, txtEmprestimoEditora);
        QWidget::setTabOrder(txtEmprestimoEditora, txtEmprestimoEdicao);
        QWidget::setTabOrder(txtEmprestimoEdicao, dtEmprestimoDataAq);
        QWidget::setTabOrder(dtEmprestimoDataAq, btnEmprestimoEmprestar);
        QWidget::setTabOrder(btnEmprestimoEmprestar, tblEmprestimoEmprestimo);
        QWidget::setTabOrder(tblEmprestimoEmprestimo, txtUsuarioCPF);
        QWidget::setTabOrder(txtUsuarioCPF, txtUsuarioRa);
        QWidget::setTabOrder(txtUsuarioRa, txtUsuarioNome);
        QWidget::setTabOrder(txtUsuarioNome, txtUsuarioEmail);
        QWidget::setTabOrder(txtUsuarioEmail, txtUsuarioCurso);
        QWidget::setTabOrder(txtUsuarioCurso, cmbUsuarioPerfil);
        QWidget::setTabOrder(cmbUsuarioPerfil, txtUsuarioIngresso);
        QWidget::setTabOrder(txtUsuarioIngresso, btnUsuarioCadastrar);
        QWidget::setTabOrder(btnUsuarioCadastrar, btnUsuarioEditar);
        QWidget::setTabOrder(btnUsuarioEditar, btnUsuarioExcluir);
        QWidget::setTabOrder(btnUsuarioExcluir, btnUsuarioLimpar);
        QWidget::setTabOrder(btnUsuarioLimpar, tblUsuarioUsuario);
        QWidget::setTabOrder(tblUsuarioUsuario, txtAcervoIdLivro);
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

        retranslateUi(BibliotecaDC);

        Menu->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(BibliotecaDC);
    } // setupUi

    void retranslateUi(QMainWindow *BibliotecaDC)
    {
        BibliotecaDC->setWindowTitle(QCoreApplication::translate("BibliotecaDC", "BibliotecaDC", nullptr));
        label->setText(QCoreApplication::translate("BibliotecaDC", "Biblioteca DC", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("BibliotecaDC", "Usu\303\241rio", nullptr));
        label_7->setText(QCoreApplication::translate("BibliotecaDC", "CPF", nullptr));
        txtEmprestimoCpf->setInputMask(QString());
        label_8->setText(QCoreApplication::translate("BibliotecaDC", "Nome", nullptr));
        btnEmprestimoPesquisarUsuario->setText(QString());
        btnEmprestimoPesquisarUsuario_2->setText(QString());
        groupBox_5->setTitle(QCoreApplication::translate("BibliotecaDC", "Opera\303\247\303\265es", nullptr));
        btnEmprestimoEmprestar->setText(QCoreApplication::translate("BibliotecaDC", "Emprestar", nullptr));
        btnEmprestimoDevolver->setText(QCoreApplication::translate("BibliotecaDC", "Devolver", nullptr));
        btnEmprestimoLimpar->setText(QCoreApplication::translate("BibliotecaDC", "Limpar", nullptr));
        groupBox_15->setTitle(QCoreApplication::translate("BibliotecaDC", "Livro", nullptr));
        label_31->setText(QCoreApplication::translate("BibliotecaDC", "Cod. Livro", nullptr));
        label_32->setText(QCoreApplication::translate("BibliotecaDC", "T\303\255tulo", nullptr));
        label_33->setText(QCoreApplication::translate("BibliotecaDC", "Edi\303\247\303\243o", nullptr));
        label_34->setText(QCoreApplication::translate("BibliotecaDC", "Autor", nullptr));
        label_35->setText(QCoreApplication::translate("BibliotecaDC", "Data Aquisi\303\247\303\243o", nullptr));
        label_36->setText(QCoreApplication::translate("BibliotecaDC", "Editora", nullptr));
        btnEmprestimoPesquisarLivro->setText(QString());
        groupBox_16->setTitle(QCoreApplication::translate("BibliotecaDC", "Empr\303\251stimos", nullptr));
        Menu->setTabText(Menu->indexOf(Emprestimo), QCoreApplication::translate("BibliotecaDC", "Emprestimo", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BibliotecaDC", "Dados Pessoais", nullptr));
        txtUsuarioCPF->setInputMask(QString());
        label_4->setText(QCoreApplication::translate("BibliotecaDC", "CPF", nullptr));
        label_2->setText(QCoreApplication::translate("BibliotecaDC", "Nome", nullptr));
        label_9->setText(QCoreApplication::translate("BibliotecaDC", "e-mail", nullptr));
        label_6->setText(QCoreApplication::translate("BibliotecaDC", "Perfil", nullptr));
        label_5->setText(QCoreApplication::translate("BibliotecaDC", "Curso", nullptr));
        label_11->setText(QCoreApplication::translate("BibliotecaDC", "Ano de ingresso", nullptr));
        txtUsuarioIngresso->setInputMask(QString());
        label_3->setText(QCoreApplication::translate("BibliotecaDC", "RA", nullptr));
        txtUsuarioRa->setInputMask(QString());
        label_10->setText(QCoreApplication::translate("BibliotecaDC", "Penalidade", nullptr));
        label_12->setText(QCoreApplication::translate("BibliotecaDC", "Livros emprestados", nullptr));
        groupBox_17->setTitle(QCoreApplication::translate("BibliotecaDC", "Opera\303\247\303\265es", nullptr));
        btnUsuarioCadastrar->setText(QCoreApplication::translate("BibliotecaDC", "Cadastrar", nullptr));
        btnUsuarioEditar->setText(QCoreApplication::translate("BibliotecaDC", "Editar", nullptr));
        btnUsuarioExcluir->setText(QCoreApplication::translate("BibliotecaDC", "Excluir", nullptr));
        btnUsuarioLimpar->setText(QCoreApplication::translate("BibliotecaDC", "Limpar", nullptr));
        groupBox_18->setTitle(QCoreApplication::translate("BibliotecaDC", "Usu\303\241rios", nullptr));
        Menu->setTabText(Menu->indexOf(usuarios), QCoreApplication::translate("BibliotecaDC", "Usu\303\241rio", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("BibliotecaDC", "Acervo", nullptr));
        groupBox_13->setTitle(QCoreApplication::translate("BibliotecaDC", "Opera\303\247\303\265es", nullptr));
        btnAcervoCadastrar->setText(QCoreApplication::translate("BibliotecaDC", "Cadastrar", nullptr));
        btnAcervoEditar->setText(QCoreApplication::translate("BibliotecaDC", "Editar", nullptr));
        btnAcervoExcluir->setText(QCoreApplication::translate("BibliotecaDC", "Excluir", nullptr));
        btnAcervoLimpar->setText(QCoreApplication::translate("BibliotecaDC", "Limpar", nullptr));
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
