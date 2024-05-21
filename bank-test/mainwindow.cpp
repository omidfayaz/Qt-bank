#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newaccount.h"
#include "bardasht.h"
#include "variz.h"
#include "enteghal.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_newaccount_clicked()
{
    //hide();
    newaccount x;
    x.setModal(true);
    x.exec();
}


void MainWindow::on_bardashtbutton_clicked()
{
    bardasht y;
    y.setModal(true);
    y.exec();
}


void MainWindow::on_varizbutton_clicked()
{
    variz y;
    y.setModal(true);
    y.exec();
}


void MainWindow::on_enteghalbutton_clicked()
{
    enteghal a;
    a.setModal(true);
    a.exec();
}

