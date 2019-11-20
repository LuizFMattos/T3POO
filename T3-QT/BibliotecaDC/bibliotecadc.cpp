#include "bibliotecadc.h"
#include "ui_bibliotecadc.h"

BibliotecaDC::BibliotecaDC(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BibliotecaDC)
{
    ui->setupUi(this);
}

BibliotecaDC::~BibliotecaDC()
{
    delete ui;
}

