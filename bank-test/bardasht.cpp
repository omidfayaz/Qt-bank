#include "bardasht.h"
#include "ui_bardasht.h"

bardasht::bardasht(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bardasht)
{
    ui->setupUi(this);
}

bardasht::~bardasht()
{
    delete ui;
}
