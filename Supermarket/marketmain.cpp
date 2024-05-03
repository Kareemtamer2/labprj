#include "marketmain.h"
#include "ui_marketmain.h"

marketmain::marketmain(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::marketmain)
{
    ui->setupUi(this);
}

marketmain::~marketmain()
{
    delete ui;
}
