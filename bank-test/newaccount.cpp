#include "newaccount.h"
#include "ui_newaccount.h"

newaccount::newaccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newaccount)
{
    ui->setupUi(this);
}

newaccount::~newaccount()
{
    delete ui;
}
