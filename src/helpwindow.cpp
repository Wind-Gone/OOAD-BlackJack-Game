#include "helpwindow.h"
#include "ui_helpwindow.h"

Helpwindow::Helpwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Helpwindow)
{
    ui->setupUi(this);
    //treeWidget树控件使用

    //设置水平头
    ui->treeWidget->setHeaderLabels(QStringList()<< "21点游戏介绍"<< "BlakJack Introduction");

    QTreeWidgetItem * liItem1 = new QTreeWidgetItem(QStringList()<< "Step1");
    QTreeWidgetItem * liItem2 = new QTreeWidgetItem(QStringList()<< "Step2");
    QTreeWidgetItem * liItem3 = new QTreeWidgetItem(QStringList()<< "Step3");
    QTreeWidgetItem * liItem4 = new QTreeWidgetItem(QStringList()<< "Step4");
    QTreeWidgetItem * liItem5 = new QTreeWidgetItem(QStringList()<< "Step5");
    QTreeWidgetItem * liItem6 = new QTreeWidgetItem(QStringList()<< "Step6");
    QTreeWidgetItem * liItem7 = new QTreeWidgetItem(QStringList()<< "Step7");
    QTreeWidgetItem * liItem8 = new QTreeWidgetItem(QStringList()<< "Step8");
    QTreeWidgetItem * liItem9 = new QTreeWidgetItem(QStringList()<< "Step9");

    //加载顶层的节点
    ui->treeWidget->addTopLevelItem(liItem1);
    ui->treeWidget->addTopLevelItem(liItem2);
    ui->treeWidget->addTopLevelItem(liItem3);
    ui->treeWidget->addTopLevelItem(liItem4);
    ui->treeWidget->addTopLevelItem(liItem5);
    ui->treeWidget->addTopLevelItem(liItem6);
    ui->treeWidget->addTopLevelItem(liItem7);
    ui->treeWidget->addTopLevelItem(liItem8);
    ui->treeWidget->addTopLevelItem(liItem9);



    //追加子节点
    QStringList rL1;
    rL1  << "洗牌"<< "dealer callshuffle then deck shuffle";
    QTreeWidgetItem * l1 = new QTreeWidgetItem(rL1);
    liItem1->addChild(l1);

    QStringList rL2;
    rL2  << "向各玩家分别派发一张明牌"<< " deck distribute a clear card";
    QTreeWidgetItem * l2 = new QTreeWidgetItem(rL2);
    liItem2->addChild(l2);

    QStringList rL3;
    rL3  << "庄家发给自己一张明牌 "<< "deck distribute a clear card";
    QTreeWidgetItem * l3 = new QTreeWidgetItem(rL3);
    liItem3->addChild(l3);

    QStringList rL4;
    rL4  << "向各玩家派第二张明牌"<< " deck distribute a clear card";
    QTreeWidgetItem * l4 = new QTreeWidgetItem(rL4);
    liItem4->addChild(l4);

    QStringList rL5;
    rL5  << "庄家再发给自己一张暗牌"<< " deck distribute  a hidden card";
    QTreeWidgetItem * l5 = new QTreeWidgetItem(rL5);
    liItem5->addChild(l5);


    QStringList rL6;
    rL6  << "庄家逐位询问玩家是否加牌、直至闲家不加牌才询问下一位玩家，轮流询问玩家直至最后一位玩家加牌完成 "<< "Deck askforaddcard then Deck distribute clearcard";
    QTreeWidgetItem * l6 = new QTreeWidgetItem(rL6);
    liItem6->addChild(l6);

    QStringList rL7;
    rL7  << "庄家如不足17点便需加牌直至超过或等于17点"<< " deck computeCardPoint<17 then distributeClearCard";
    QTreeWidgetItem * l7 = new QTreeWidgetItem(rL7);
    liItem7->addChild(l7);

    QStringList rL8;
    rL8  << "未有爆牌的玩家，比点数大小，大者胜，可得赔金;如庄家爆牌、未有爆牌的玩家便可得赔金"<< ",deck Judge winnerthen winner judge broken card,调用deck的computeCardPoint and winner 的 compare face value,then announceWinner";
    QTreeWidgetItem * l8 = new QTreeWidgetItem(rL8);
    liItem8->addChild(l8);

    QStringList rL9;
    rL9  << "回收已使用的牌及给小费"<< "deck Recycling used cards (deck clear all cards)";
    QTreeWidgetItem * l9 = new QTreeWidgetItem(rL9);
    liItem9->addChild(l9);

}

Helpwindow::~Helpwindow()
{
    delete ui;
}
