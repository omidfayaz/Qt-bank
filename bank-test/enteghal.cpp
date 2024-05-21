#include "enteghal.h"
#include "ui_enteghal.h"

enteghal::enteghal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::enteghal)
{
    ui->setupUi(this);
}

enteghal::~enteghal()
{
    delete ui;
}
