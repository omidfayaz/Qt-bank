#include "variz.h"
#include "ui_variz.h"

variz::variz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::variz)
{
    ui->setupUi(this);
}

variz::~variz()
{
    delete ui;
}
