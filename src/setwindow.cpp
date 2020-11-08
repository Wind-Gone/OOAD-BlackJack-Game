#include "setwindow.h"
#include "ui_setwindow.h"
#include "playroom.h"

QString playerNumber = "1";
QString deckNumber = "1";
QString payment = "VX";
QString currency = "RMB";
int money ;

SetWindow::SetWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SetWindow)
{
    ui->setupUi(this);
    ui->playernumber_1->setChecked(true);
    ui->type1->setChecked(true);
    ui->card1->setChecked(true);
    ui->pay2->setChecked(true);
    ui->moneyText->setText("50");
}

void SetWindow::on_startButton_clicked()
{
    myplayroom = new playroom(this);
    myplayroom->show();
    this->hide();
}

SetWindow::~SetWindow()
{
    delete ui;
}

void SetWindow::on_playernumber_1_clicked()
{
    playerNumber="1";
}

void SetWindow::on_playernumber_2_clicked()
{
    playerNumber="2";
}

void SetWindow::on_playernumber_3_clicked()
{
    playerNumber="3";
}




void SetWindow::on_type1_clicked()
{
    currency="RMB";
}

void SetWindow::on_type2_clicked()
{
    currency="DOLLAR";
}

void SetWindow::on_type3_clicked()
{
    currency="EURO";
}

void SetWindow::on_type4_clicked()
{
    currency="POUND";
}

void SetWindow::on_pay1_clicked()
{
    payment="AliPay";
}

void SetWindow::on_pay2_clicked()
{
    payment="VX";
}

void SetWindow::on_pay3_clicked()
{
    payment="CreditCard";
}

void SetWindow::on_card1_clicked()
{
    deckNumber="1";
}

void SetWindow::on_card2_clicked()
{
    deckNumber="2";
}

void SetWindow::on_card3_clicked()
{
    deckNumber="3";
}

void SetWindow::on_moneyText_textChanged(const QString &arg1)
{
    money=arg1.toInt();
}
