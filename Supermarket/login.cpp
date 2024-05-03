#include "login.h"
#include "ui_login.h"
#include "marketmain.h"
Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    QPixmap logo(":/pics/logo2.png");
    ui->MarketLogo->setPixmap(logo.scaled(70,70));
    QPixmap pic1(":/pics/background4.jpg");
    QPixmap promo(":/pics/promo1.png");
    ui->Background->setPixmap(pic1.scaled(width()+10,height()+10));
    ui->Promo1->setPixmap(promo.scaled(230,230));
    this->setFixedSize(this->size().width(),this->size().height());
    storetheme->setVolume(10);
    storesound->setAudioOutput(storetheme);
    storesound->setSource(QUrl("qrc:/pics/jazz-bossa-nova-163669.mp3"));
    storesound->play();
}

Login::~Login()
{
    delete ui;
}

void Login::on_LoginPush_clicked()
{
    marketmain *store=new marketmain();
    store->show();
    this->hide();
    storesound->stop();
}


void Login::on_RegisterButton_clicked()
{

}

