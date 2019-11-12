#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "emprestimo.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Emprestimo_clicked()
{
    Emprestimo emprestimo;
    emprestimo.exec();
}
