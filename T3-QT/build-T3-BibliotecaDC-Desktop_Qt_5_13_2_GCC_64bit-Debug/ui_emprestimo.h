/********************************************************************************
** Form generated from reading UI file 'emprestimo.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPRESTIMO_H
#define UI_EMPRESTIMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Emprestimo
{
public:
    QLabel *label;

    void setupUi(QDialog *Emprestimo)
    {
        if (Emprestimo->objectName().isEmpty())
            Emprestimo->setObjectName(QString::fromUtf8("Emprestimo"));
        Emprestimo->resize(590, 550);
        Emprestimo->setWindowOpacity(5.000000000000000);
        label = new QLabel(Emprestimo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 30, 148, 17));

        retranslateUi(Emprestimo);

        QMetaObject::connectSlotsByName(Emprestimo);
    } // setupUi

    void retranslateUi(QDialog *Emprestimo)
    {
        Emprestimo->setWindowTitle(QCoreApplication::translate("Emprestimo", "Emprestimo", nullptr));
        label->setText(QCoreApplication::translate("Emprestimo", "Emprestimo de Livros", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Emprestimo: public Ui_Emprestimo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPRESTIMO_H
