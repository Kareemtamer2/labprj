#include "registring.h"
#include "ui_registring.h"

registring::registring(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registring)
{
    ui->setupUi(this);
}

registring::~registring()
{
    delete ui;
}
