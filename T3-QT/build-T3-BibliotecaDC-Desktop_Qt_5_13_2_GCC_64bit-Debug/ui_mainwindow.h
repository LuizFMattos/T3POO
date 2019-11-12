/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *titulo;
    QWidget *widget;
    QGridLayout *gridLayout_Buttons;
    QPushButton *pushButton_Emprestimo;
    QPushButton *pushButton_Acervo;
    QPushButton *pushButton_Usuarios;
    QPushButton *pushButton_Devolucao;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(565, 508);
        MainWindow->setWindowOpacity(4.000000000000000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        titulo = new QLabel(centralwidget);
        titulo->setObjectName(QString::fromUtf8("titulo"));
        titulo->setGeometry(QRect(230, 40, 101, 41));
        titulo->setScaledContents(true);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 170, 331, 211));
        gridLayout_Buttons = new QGridLayout(widget);
        gridLayout_Buttons->setObjectName(QString::fromUtf8("gridLayout_Buttons"));
        gridLayout_Buttons->setContentsMargins(0, 0, 0, 0);
        pushButton_Emprestimo = new QPushButton(widget);
        pushButton_Emprestimo->setObjectName(QString::fromUtf8("pushButton_Emprestimo"));

        gridLayout_Buttons->addWidget(pushButton_Emprestimo, 0, 0, 1, 1);

        pushButton_Acervo = new QPushButton(widget);
        pushButton_Acervo->setObjectName(QString::fromUtf8("pushButton_Acervo"));

        gridLayout_Buttons->addWidget(pushButton_Acervo, 1, 0, 1, 1);

        pushButton_Usuarios = new QPushButton(widget);
        pushButton_Usuarios->setObjectName(QString::fromUtf8("pushButton_Usuarios"));

        gridLayout_Buttons->addWidget(pushButton_Usuarios, 1, 1, 1, 1);

        pushButton_Devolucao = new QPushButton(widget);
        pushButton_Devolucao->setObjectName(QString::fromUtf8("pushButton_Devolucao"));

        gridLayout_Buttons->addWidget(pushButton_Devolucao, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 565, 22));
        menubar->setNativeMenuBar(false);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setSizeGripEnabled(false);
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Biblioteca DC", nullptr));
#if QT_CONFIG(accessibility)
        MainWindow->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        titulo->setText(QCoreApplication::translate("MainWindow", "Biblioteca DC", nullptr));
        pushButton_Emprestimo->setText(QCoreApplication::translate("MainWindow", "Emprestimo", nullptr));
        pushButton_Acervo->setText(QCoreApplication::translate("MainWindow", "Acervo", nullptr));
        pushButton_Usuarios->setText(QCoreApplication::translate("MainWindow", "Usu\303\241rios", nullptr));
        pushButton_Devolucao->setText(QCoreApplication::translate("MainWindow", "Devolu\303\247\303\243o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
