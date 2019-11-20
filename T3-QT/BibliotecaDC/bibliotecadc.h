#ifndef BIBLIOTECADC_H
#define BIBLIOTECADC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class BibliotecaDC; }
QT_END_NAMESPACE

class BibliotecaDC : public QMainWindow
{
    Q_OBJECT

public:
    BibliotecaDC(QWidget *parent = nullptr);
    ~BibliotecaDC();

private:
    Ui::BibliotecaDC *ui;
};
#endif // BIBLIOTECADC_H
