#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "playwindow.h"
#include <QMessageBox>
#include "setwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix;
    pix.load(":/images/images/bg.png");
    ui->pictureLabel->setPixmap(pix);
    ui->pictureLabel->setFixedSize(700,500);
    ui->pictureLabel->lower();
    this->setFixedSize(700,500);
    ui->actionQuit->setIcon(QIcon(":/images/images/menu1.jpg"));
    ui->actionPlay->setIcon(QIcon(":/images/images/menu2.jpg"));
    ui->actionRule->setIcon(QIcon(":/images/images/menu3.jpg"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_closeButton_clicked()
{
   QApplication::quit();
}

void MainWindow::on_playButton_clicked()
{
    QMessageBox:: StandardButton result= QMessageBox::information(this, "友情提醒", "你真的准备好进入华师赌场了吗",QMessageBox::Yes|QMessageBox::No);
    switch (result){
    case QMessageBox::Yes:
        qDebug()<<"Yes";
        setwindow = new SetWindow(this);
        setwindow -> show();
        this -> hide();

        break;
    case QMessageBox::No:
        qDebug()<<"NO";
        break;
    default:
        break;
    }
}

void MainWindow::on_actionQuit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionRule_triggered()
{
    helpwindow = new Helpwindow(this);
    helpwindow -> show();
}

