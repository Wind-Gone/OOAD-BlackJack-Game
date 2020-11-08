#include "playroom.h"
#include "ui_playroom.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <QDebug>
#include <QInputDialog>
#include<QElapsedTimer>
#include <QList>
#include <map>
#include "game.h"
#include "QDialog"
#include "QMessageBox"
#include "rankwindow.h"
#pragma execution_character_set("utf-8")


extern QString playerNumber;
extern QString deckNumber;
extern QString payment;
extern QString currency;
extern int money;

int timestack=200;

int holdingCardCountP1 = 1;
int holdingCardCountP2 = 1;
int holdingCardCountP3 = 1;
int holdingCardCountD = 1;


int player_money1 ;
int player_money2 ;
int player_money3 ;
int player1_point ;
int player2_point ;
int player3_point ;
int bet1,bet2,bet3;
bool flag1 = false;
bool flag2 = false;
bool flag3 = false;
int dealer_point;



playroom::playroom(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::playroom)
{
    ui->setupUi(this);
    QPixmap pix(":/images/images/timg2.jpg");
    ui->tableLabel->setPixmap(pix);
    ui->tableLabel->setFixedSize(1500,920);
    ui->oMoneyValue_6->setText(QString::number(money));
    ui->oMoneyValue_4->setText(QString::number(money));
    ui->oMoneyValue_5->setText(QString::number(money));

    game=Game(playerNumber.toInt(),deckNumber.toInt(),money);

    game.callShuffle();

    if(playerNumber.toInt()==1){
        //玩家2 信息
        ui->playerLabel2->hide();
        ui->gridWidget_9->hide();
        ui->formWidget_4->hide();
        ui->widget_6->hide();
        ui->label_2->hide();

         // 玩家3 信息
        ui->playerLabel3->hide();
        ui->formWidget_5->hide();
        ui->gridWidget_10->hide();
        ui->widget_5->hide();
        ui->label_3->hide();
    }


    if(playerNumber.toInt()==2){
        // 玩家3 信息
        ui->playerLabel3->hide();
        ui->formWidget_5->hide();
        ui->gridWidget_10->hide();
        ui->widget_5->hide();
        ui->label_3->hide();
    }

    ui->widget_6->hide();

    ui->widget_5->hide();

    ui->widget_4->hide();

    ui->computerLabel_2->setText("请各位玩家下注之后开始游戏");

    loadList();

}



playroom::~playroom()
{
    delete ui;
}

void playroom::on_pushButton_clicked()
{
    if(!ui->Commit_6->isHidden()){

            QMessageBox::critical(this,"温馨提示","请输入您的下注数");
        }


    //-------发第一张牌-------------//

    //-------dealer显示--------//
    else
  {
    game.callDitrbuteCards();
    int number=game.getDealer()->getCard(1).getPicIndex();
    switch(holdingCardCountD){
    case 1:
        ui->card1Label_3->setPixmap(cardHolder.at(number - 1));
        break;
    case 2:
        ui->card2Label_3->setPixmap(cardHolder.at(number - 1));
        break;
    case 3:
        ui->card3Label_3->setPixmap(cardHolder.at(number - 1));
        break;
    case 4:
        ui->card4Label_3->setPixmap(cardHolder.at(number - 1));
        break;
    case 5:
        ui->card5Label_3->setPixmap(cardHolder.at(number - 1));
        break;
    case 6:
        ui->card6Label_3->setPixmap(cardHolder.at(number - 1));
        break;
    case 7:
        ui->card7Label_3->setPixmap(cardHolder.at(number - 1));
        break;
    case 8:
        ui->card8Label_3->setPixmap(cardHolder.at(number - 1));
        break;
    case 9:
        ui->card9Label_3->setPixmap(cardHolder.at(number - 1));
        break;
    case 10:
        ui->card10Label_3->setPixmap(cardHolder.at(number - 1));
        break;
    }
    holdingCardCountD++;

    QElapsedTimer t;
    t.start();
    while(t.elapsed()<timestack)
        QCoreApplication::processEvents();



    //-------player1---------//
    number=game.getPlayer(1)->getCard(1).getPicIndex();
    switch(holdingCardCountP1){
    case 1:
        ui->card1Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 2:
        ui->card2Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 3:
        ui->card3Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 4:
        ui->card4Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 5:
        ui->card5Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 6:
        ui->card6Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 7:
        ui->card7Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 8:
        ui->card8Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 9:
        ui->card9Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 10:
        ui->card10Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    }
    holdingCardCountP1++;



    t.start();
    while(t.elapsed()<timestack)
        QCoreApplication::processEvents();

    if(playerNumber.toInt()>=2){
        number=game.getPlayer(2)->getCard(1).getPicIndex();
        switch(holdingCardCountP2){
        case 1:
            ui->card1Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 2:
            ui->card2Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 3:
            ui->card3Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 4:
            ui->card4Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 5:
            ui->card5Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 6:
            ui->card6Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 7:
            ui->card7Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 8:
            ui->card8Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 9:
            ui->card9Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 10:
            ui->card10Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        }
        holdingCardCountP2++;

    }


    t.start();
    while(t.elapsed()<timestack)
        QCoreApplication::processEvents();

    if(playerNumber.toInt()==3){
        number=game.getPlayer(3)->getCard(1).getPicIndex();
        switch(holdingCardCountP3){
        case 1:
            ui->card1Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 2:
            ui->card2Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 3:
            ui->card3Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 4:
            ui->card4Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 5:
            ui->card5Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 6:
            ui->card6Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 7:
            ui->card7Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 8:
            ui->card8Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 9:
            ui->card9Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 10:
            ui->card10Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        }
        holdingCardCountP3++;

    }



    t.start();
    while(t.elapsed()<timestack)
        QCoreApplication::processEvents();





    //-------发第二张牌-------------//

    //-------dealer显示--------//
    number=game.getDealer()->getCard(2).getPicIndex();
    switch(holdingCardCountD){
    case 1:
        ui->card1Label_3->setPixmap(cardHolder.at(52));
        break;
    case 2:
        ui->card2Label_3->setPixmap(cardHolder.at(52));
        break;
    case 3:
        ui->card3Label_3->setPixmap(cardHolder.at(52));
        break;
    case 4:
        ui->card4Label_3->setPixmap(cardHolder.at(52));
        break;
    case 5:
        ui->card5Label_3->setPixmap(cardHolder.at(52));
        break;
    case 6:
        ui->card6Label_3->setPixmap(cardHolder.at(52));
        break;
    case 7:
        ui->card7Label_3->setPixmap(cardHolder.at(52));
        break;
    case 8:
        ui->card8Label_3->setPixmap(cardHolder.at(52));
        break;
    case 9:
        ui->card9Label_3->setPixmap(cardHolder.at(52));
        break;
    case 10:
        ui->card10Label_3->setPixmap(cardHolder.at(52));
        break;
    }
    holdingCardCountD++;


    t.start();
    while(t.elapsed()<timestack)
        QCoreApplication::processEvents();



    //-------player1---------//
    number=game.getPlayer(1)->getCard(2).getPicIndex();
    switch(holdingCardCountP1){
    case 1:
        ui->card1Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 2:
        ui->card2Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 3:
        ui->card3Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 4:
        ui->card4Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 5:
        ui->card5Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 6:
        ui->card6Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 7:
        ui->card7Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 8:
        ui->card8Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 9:
        ui->card9Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 10:
        ui->card10Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    }
    holdingCardCountP1++;


    t.start();
    while(t.elapsed()<timestack)
        QCoreApplication::processEvents();

    if(playerNumber.toInt()>=2){
        number=game.getPlayer(2)->getCard(2).getPicIndex();
        switch(holdingCardCountP2){
        case 1:
            ui->card1Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 2:
            ui->card2Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 3:
            ui->card3Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 4:
            ui->card4Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 5:
            ui->card5Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 6:
            ui->card6Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 7:
            ui->card7Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 8:
            ui->card8Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 9:
            ui->card9Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        case 10:
            ui->card10Label_9->setPixmap(cardHolder.at(number - 1));
            break;
        }
        holdingCardCountP2++;

    }



    t.start();
    while(t.elapsed()<timestack)
        QCoreApplication::processEvents();

    if(playerNumber.toInt()==3){
        number=game.getPlayer(3)->getCard(2).getPicIndex();
        switch(holdingCardCountP3){
        case 1:
            ui->card1Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 2:
            ui->card2Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 3:
            ui->card3Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 4:
            ui->card4Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 5:
            ui->card5Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 6:
            ui->card6Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 7:
            ui->card7Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 8:
            ui->card8Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 9:
            ui->card9Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        case 10:
            ui->card10Label_10->setPixmap(cardHolder.at(number - 1));
            break;
        }
        holdingCardCountP3++;

    }


    ui->formWidget_6->show();
    if(playerNumber.toInt()>=2)
        ui->formWidget_4->show();
    if(playerNumber.toInt()>=3)
        ui->formWidget_5->show();

    ui->pushButton->setEnabled(false);


    roundIndex=2;
    }

    ui->computerLabel_2->setText("请各位玩家要牌/停牌/加注");
}

void playroom::gameOver(){

    ui->computerLabel_2->setText("游戏结束！");


    ui->pushButton_2->hide();


    ui->getCard1_4->hide();
    ui->stopCard1_4->hide();

    ui->getCard1_6->hide();
    ui->stopCard1_6->hide();


    ui->getCard1_5->hide();
    ui->stopCard1_5->hide();


    ui->pushButton_2->hide();

    //庄家牌展示
    cout<<holdingCardCountD<<endl;

    for(int k=2;k<holdingCardCountD;k++){
        int number=game.getDealer()->getCard(k).getPicIndex();
        switch(k){
        case 1:
            ui->card1Label_3->setPixmap(cardHolder.at(number - 1));
            break;
        case 2:
            ui->card2Label_3->setPixmap(cardHolder.at(number - 1));
            break;
        case 3:
            ui->card3Label_3->setPixmap(cardHolder.at(number - 1));
            break;
        case 4:
            ui->card4Label_3->setPixmap(cardHolder.at(number - 1));
            break;
        case 5:
            ui->card5Label_3->setPixmap(cardHolder.at(number - 1));
            break;
        case 6:
            ui->card6Label_3->setPixmap(cardHolder.at(number - 1));
            break;
        case 7:
            ui->card7Label_3->setPixmap(cardHolder.at(number - 1));
            break;
        case 8:
            ui->card8Label_3->setPixmap(cardHolder.at(number - 1));
            break;
        case 9:
            ui->card9Label_3->setPixmap(cardHolder.at(number - 1));
            break;
        case 10:
            ui->card10Label_3->setPixmap(cardHolder.at(number - 1));
            break;
        }


    }



    //输出输赢
    int mymoney;
    int bet;


//    if(game.judgeIfPlayerWin(0)){
//        mymoney= ui ->MoneyValue_6->text().toInt();
//        bet=game.getPlayer(1)->getBetValue();
//        ui->label->setText("win  "+QString::number(bet));
//        ui->oMoneyValue_6->setText(QString::number(mymoney+bet));
//    }
//    else{
//        mymoney= ui ->MoneyValue_6->text().toInt();
//        bet=game.getPlayer(1)->getBetValue();
//        ui->label->setText("lose  "+QString::number(bet));
//        ui->oMoneyValue_6->setText(QString::number(mymoney-bet));
//    }

//    if(playerNumber.toInt()>=2){
//        if(game.judgeIfPlayerWin(1)){
//            mymoney= ui ->MoneyValue_4->text().toInt();
//            bet=game.getPlayer(2)->getBetValue();
//            ui->label_2->setText("win  "+QString::number(bet));
//            ui->oMoneyValue_4->setText(QString::number(mymoney+bet));
//        }
//        else{
//            mymoney= ui ->MoneyValue_4->text().toInt();
//            bet=game.getPlayer(2)->getBetValue();
//            ui->label_2->setText("lose  "+QString::number(bet));
//            ui->oMoneyValue_4->setText(QString::number(mymoney-bet));
//        }
//    }

//    if(playerNumber.toInt()>=3){
//        if(game.judgeIfPlayerWin(2)){
//            mymoney= ui ->MoneyValue_5->text().toInt();
//            bet=game.getPlayer(3)->getBetValue();
//            ui->label_3->setText("win  "+QString::number(bet));
//            ui->oMoneyValue_5->setText(QString::number(mymoney+bet));
//        }
//        else{
//            mymoney= ui ->MoneyValue_5->text().toInt();
//            bet=game.getPlayer(3)->getBetValue();
//            ui->label_3->setText("lose  "+QString::number(bet));
//            ui->oMoneyValue_5->setText(QString::number(mymoney+bet));
//        }
//    }

        game.checkoutForAllPlayers();
        dealer_point = game.getDealer()->computeCardPoint();
        if(game.judgeIfPlayerWin(0)){
            player_money1 = game.getPlayer(1)->getMoney();
            bet1=game.getPlayer(1)->getBetValue();
            player1_point = game.getPlayer(1)->computeCardPoint();
            flag1 = true;
        }
        else{
            player_money1 = game.getPlayer(1)->getMoney();
            bet1=game.getPlayer(1)->getBetValue();
            player1_point = game.getPlayer(1)->computeCardPoint();
            flag1 = false;
        }

        if(playerNumber.toInt()>=2){
            if(game.judgeIfPlayerWin(1)){
                player_money2 =game.getPlayer(2)->getMoney();
                bet2=game.getPlayer(2)->getBetValue();
                player2_point = game.getPlayer(2)->computeCardPoint();

                flag2 = true;
            }
            else{
                player_money2 = game.getPlayer(2)->getMoney();
                bet2=game.getPlayer(2)->getBetValue();
                player2_point = game.getPlayer(2)->computeCardPoint();

                flag2 = false;
            }
        }

        if(playerNumber.toInt()>=3){
            if(game.judgeIfPlayerWin(2)){
                player_money3 = game.getPlayer(3)->getMoney();
                bet3=game.getPlayer(3)->getBetValue();
                player3_point = game.getPlayer(3)->computeCardPoint();
                flag3 = true;
            }
            else{
                player_money3 = game.getPlayer(3)->getMoney();
                bet3=game.getPlayer(3)->getBetValue();
                player3_point = game.getPlayer(3)->computeCardPoint();
                flag3 = false;
            }
        }

        cout<<"bet1 "<<game.getPlayer(1)->getBetValue()<<endl;
        cout<<"bet2 "<<game.getPlayer(2)->getBetValue()<<endl;
        cout<<"bet3 "<<game.getPlayer(3)->getBetValue()<<endl;

        cout<<"flag1 "<<flag1<<endl;
        cout<<"flag2 "<<flag2<<endl;
        cout<<"flag3 "<<flag3<<endl;

        cout<<"money1 "<<player_money1<<endl;
        cout<<"money2 "<<player_money2<<endl;
        cout<<"money3 "<<player_money3<<endl;




    rankwindow = new RankWindow(this);
    rankwindow->show();
}


void playroom::loadList(){


    // Clear List
    cardHolder.clear();

    // Load in Spades
    QPixmap card1(":/images/images/cards/ace_of_spades.png");
    QPixmap card2(":/images/images/cards/2_of_spades.png");
    QPixmap card3(":/images/images/cards/3_of_spades.png");
    QPixmap card4(":/images/images/cards/4_of_spades.png");
    QPixmap card5(":/images/images/cards/5_of_spades.png");
    QPixmap card6(":/images/images/cards/6_of_spades.png");
    QPixmap card7(":/images/images/cards/7_of_spades.png");
    QPixmap card8(":/images/images/cards/8_of_spades.png");
    QPixmap card9(":/images/images/cards/9_of_spades.png");
    QPixmap card10(":/images/images/cards/10_of_spades.png");
    QPixmap card11(":/images/images/cards/jack_of_spades2.png");
    QPixmap card12(":/images/images/cards/queen_of_spades2.png");
    QPixmap card13(":/images/images/cards/king_of_spades2.png");

    // Load in Hearts

    QPixmap card14(":/images/images/cards/ace_of_hearts.png");
    QPixmap card15(":/images/images/cards/2_of_hearts.png");
    QPixmap card16(":/images/images/cards/3_of_hearts.png");
    QPixmap card17(":/images/images/cards/4_of_hearts.png");
    QPixmap card18(":/images/images/cards/5_of_hearts.png");;
    QPixmap card19(":/images/images/cards/6_of_hearts.png");
    QPixmap card20(":/images/images/cards/7_of_hearts.png");
    QPixmap card21(":/images/images/cards/8_of_hearts.png");
    QPixmap card22(":/images/images/cards/9_of_hearts.png");
    QPixmap card23(":/images/images/cards/10_of_hearts.png");
    QPixmap card24(":/images/images/cards/jack_of_hearts2.png");
    QPixmap card25(":/images/images/cards/queen_of_hearts2.png");
    QPixmap card26(":/images/images/cards/king_of_hearts2.png");

    // Load in clubs

    QPixmap card27(":/images/images/cards/ace_of_clubs.png");
    QPixmap card28(":/images/images/cards/2_of_clubs.png");
    QPixmap card29(":/images/images/cards/3_of_clubs.png");
    QPixmap card30(":/images/images/cards/4_of_clubs.png");
    QPixmap card31(":/images/images/cards/5_of_clubs.png");
    QPixmap card32(":/images/images/cards/6_of_clubs.png");
    QPixmap card33(":/images/images/cards/7_of_clubs.png");
    QPixmap card34(":/images/images/cards/8_of_clubs.png");
    QPixmap card35(":/images/images/cards/9_of_clubs.png");
    QPixmap card36(":/images/images/cards/10_of_clubs.png");
    QPixmap card37(":/images/images/cards/jack_of_clubs2.png");
    QPixmap card38(":/images/images/cards/queen_of_clubs2.png");
    QPixmap card39(":/images/images/cards/king_of_clubs2.png");

    // Load in diamonds

    QPixmap card40(":/images/images/cards/ace_of_diamonds.png");
    QPixmap card41(":/images/images/cards/2_of_diamonds.png");
    QPixmap card42(":/images/images/cards/3_of_diamonds.png");
    QPixmap card43(":/images/images/cards/4_of_diamonds.png");
    QPixmap card44(":/images/images/cards/5_of_diamonds.png");
    QPixmap card45(":/images/images/cards/6_of_diamonds.png");
    QPixmap card46(":/images/images/cards/7_of_diamonds.png");
    QPixmap card47(":/images/images/cards/8_of_diamonds.png");
    QPixmap card48(":/images/images/cards/9_of_diamonds.png");
    QPixmap card49(":/images/images/cards/10_of_diamonds.png");
    QPixmap card50(":/images/images/cards/jack_of_diamonds2.png");
    QPixmap card51(":/images/images/cards/queen_of_diamonds2.png");
    QPixmap card52(":/images/images/cards/king_of_diamonds2.png");
    QPixmap card53(":/images/images/cards/backside.jpg");

    // add Spades to List
    cardHolder.append(card1);
    cardHolder.append(card2);
    cardHolder.append(card3);
    cardHolder.append(card4);
    cardHolder.append(card5);
    cardHolder.append(card6);
    cardHolder.append(card7);
    cardHolder.append(card8);
    cardHolder.append(card9);
    cardHolder.append(card10);
    cardHolder.append(card11);
    cardHolder.append(card12);
    cardHolder.append(card13);

    // add Hearts to List
    cardHolder.append(card14);
    cardHolder.append(card15);
    cardHolder.append(card16);
    cardHolder.append(card17);
    cardHolder.append(card18);
    cardHolder.append(card19);
    cardHolder.append(card20);
    cardHolder.append(card21);
    cardHolder.append(card22);
    cardHolder.append(card23);
    cardHolder.append(card24);
    cardHolder.append(card25);
    cardHolder.append(card26);

    // add clubs to List
    cardHolder.append(card27);
    cardHolder.append(card28);
    cardHolder.append(card29);
    cardHolder.append(card30);
    cardHolder.append(card31);
    cardHolder.append(card32);
    cardHolder.append(card33);
    cardHolder.append(card34);
    cardHolder.append(card35);
    cardHolder.append(card36);
    cardHolder.append(card37);
    cardHolder.append(card38);
    cardHolder.append(card39);

    // add Diamonds to List
    cardHolder.append(card40);
    cardHolder.append(card41);
    cardHolder.append(card42);
    cardHolder.append(card43);
    cardHolder.append(card44);
    cardHolder.append(card45);
    cardHolder.append(card46);
    cardHolder.append(card47);
    cardHolder.append(card48);
    cardHolder.append(card49);
    cardHolder.append(card50);
    cardHolder.append(card51);
    cardHolder.append(card52);
    cardHolder.append(card53);


}








void playroom::on_getCard1_4_clicked()
{

    game.askForAddCard(0,roundIndex);

    int number=game.getPlayer(1)->getCard(roundIndex).getPicIndex();
    cout<<"number:"<<number<<endl;
    cout<<"roundIndex"<<roundIndex<<endl;
    switch(holdingCardCountP1){
    case 1:
        ui->card1Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 2:
        ui->card2Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 3:
        ui->card3Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 4:
        ui->card4Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 5:
        ui->card5Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 6:
        ui->card6Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 7:
        ui->card7Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 8:
        ui->card8Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 9:
        ui->card9Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    case 10:
        ui->card10Label_4->setPixmap(cardHolder.at(number - 1));
        break;
    }
    holdingCardCountP1++;

    cout<<"value= "<<game.getPlayer(1)->computeCardPoint()<<endl;
    if(roundIndex==4)
        cout<<"num= "<<game.getPlayer(1)->addCard[2].getPicIndex()<<endl;
    if(roundIndex==5)
         cout<<"num= "<<game.getPlayer(1)->addCard[2].getPicIndex()<<endl;

    game.getPlayer(1)->checkAndSetBrokenCard();

    if(game.getPlayer(1)->isBrokenCard()){
        ui->label->setText("boom!!");
    }else{
        int thebet=QInputDialog::getInt(this,"AddBetOrNot","please add bet ",0,0,ui->oMoneyValue_6->text().toInt());
        game.getPlayer(1)->addOnBet(thebet);
        int tmp=ui->oMoneyValue_6->text().toInt()-thebet;
        int tmp2=ui->MoneyValue_6->text().toInt()+thebet;
        ui->oMoneyValue_6->setText(QString::number(tmp));
        ui->MoneyValue_6->setText(QString::number(tmp2));
    }





    ui->getCard1_4->hide();
    ui->stopCard1_4->hide();
    if(playerNumber.toInt()>=2&&!game.getPlayer(2)->isStopCard()){

        ui->getCard1_6->show();
        ui->stopCard1_6->show();
    }
    else if(playerNumber.toInt()>=3&&!game.getPlayer(3)->isStopCard()){

        ui->getCard1_5->show();
        ui->stopCard1_5->show();
    }

    if(!game.gameContinue()){
        cout<<"333"<<endl;

        gameOver();


    }

}

void playroom::on_stopCard1_4_clicked()
{

    game.getPlayer(1)->setStopCard();

    ui->getCard1_4->hide();
    ui->stopCard1_4->hide();
    if(playerNumber.toInt()>=2&&!game.getPlayer(2)->isStopCard()){

        ui->getCard1_6->show();
        ui->stopCard1_6->show();
    }
    else if(playerNumber.toInt()>=3&&!game.getPlayer(3)->isStopCard()){

        ui->getCard1_5->show();
        ui->stopCard1_5->show();
    }

    if(!game.gameContinue()){

        gameOver();


    }
}

void playroom::on_getCard1_6_clicked()
{
    game.askForAddCard(1,roundIndex);

    int number=game.getPlayer(2)->getCard(roundIndex).getPicIndex();
    switch(holdingCardCountP2){
    case 1:
        ui->card1Label_9->setPixmap(cardHolder.at(number - 1));
        break;
    case 2:
        ui->card2Label_9->setPixmap(cardHolder.at(number - 1));
        break;
    case 3:
        ui->card3Label_9->setPixmap(cardHolder.at(number - 1));
        break;
    case 4:
        ui->card4Label_9->setPixmap(cardHolder.at(number - 1));
        break;
    case 5:
        ui->card5Label_9->setPixmap(cardHolder.at(number - 1));
        break;
    case 6:
        ui->card6Label_9->setPixmap(cardHolder.at(number - 1));
        break;
    case 7:
        ui->card7Label_9->setPixmap(cardHolder.at(number - 1));
        break;
    case 8:
        ui->card8Label_9->setPixmap(cardHolder.at(number - 1));
        break;
    case 9:
        ui->card9Label_9->setPixmap(cardHolder.at(number - 1));
        break;
    case 10:
        ui->card10Label_9->setPixmap(cardHolder.at(number - 1));
        break;
    }
    holdingCardCountP2++;

    game.getPlayer(2)->checkAndSetBrokenCard();



    if(game.getPlayer(2)->isBrokenCard()){
        cout<<"2boom!"<<endl;
        ui->label_2->setText("boom!!");

    }else{
        int thebet=QInputDialog::getInt(this,"AddBetOrNot","please add bet ",0,0,ui->oMoneyValue_4->text().toInt());
        game.getPlayer(2)->addOnBet(thebet);
        int tmp=ui->oMoneyValue_4->text().toInt()-thebet;
        int tmp2=ui->MoneyValue_4->text().toInt()+thebet;
        ui->oMoneyValue_4->setText(QString::number(tmp));
        ui->MoneyValue_4->setText(QString::number(tmp2));
    }



    ui->getCard1_6->hide();
    ui->stopCard1_6->hide();
    if(playerNumber.toInt()>=3&&!game.getPlayer(3)->isStopCard()){

        ui->getCard1_5->show();
        ui->stopCard1_5->show();
    }



    if(!game.gameContinue()){

        gameOver();


    }

}

void playroom::on_stopCard1_6_clicked()
{
    game.getPlayer(2)->setStopCard();

    ui->getCard1_6->hide();
    ui->stopCard1_6->hide();
    if(playerNumber.toInt()>=3&&!game.getPlayer(3)->isStopCard()){

        ui->getCard1_5->show();
        ui->stopCard1_5->show();
    }

    if(!game.gameContinue()){

        gameOver();


    }
}

void playroom::on_getCard1_5_clicked()
{
    game.askForAddCard(2,roundIndex);

    int number=game.getPlayer(3)->getCard(roundIndex).getPicIndex();
    switch(holdingCardCountP3){
    case 1:
        ui->card1Label_10->setPixmap(cardHolder.at(number - 1));
        break;
    case 2:
        ui->card2Label_10->setPixmap(cardHolder.at(number - 1));
        break;
    case 3:
        ui->card3Label_10->setPixmap(cardHolder.at(number - 1));
        break;
    case 4:
        ui->card4Label_10->setPixmap(cardHolder.at(number - 1));
        break;
    case 5:
        ui->card5Label_10->setPixmap(cardHolder.at(number - 1));
        break;
    case 6:
        ui->card6Label_10->setPixmap(cardHolder.at(number - 1));
        break;
    case 7:
        ui->card7Label_10->setPixmap(cardHolder.at(number - 1));
        break;
    case 8:
        ui->card8Label_10->setPixmap(cardHolder.at(number - 1));
        break;
    case 9:
        ui->card9Label_10->setPixmap(cardHolder.at(number - 1));
        break;
    case 10:
        ui->card10Label_10->setPixmap(cardHolder.at(number - 1));
        break;
    }
    holdingCardCountP3++;

    game.getPlayer(3)->checkAndSetBrokenCard();



    if(game.getPlayer(3)->isBrokenCard()){
        ui->label_3->setText("boom!!");

    }else{
        int thebet=QInputDialog::getInt(this,"AddBetOrNot","please add bet ",0,0,ui->oMoneyValue_5->text().toInt());
        game.getPlayer(3)->addOnBet(thebet);
        int tmp=ui->oMoneyValue_5->text().toInt()-thebet;
        int tmp2=ui->MoneyValue_5->text().toInt()+thebet;
        ui->oMoneyValue_5->setText(QString::number(tmp));
        ui->MoneyValue_5->setText(QString::number(tmp2));
    }



    ui->getCard1_5->hide();
    ui->stopCard1_5->hide();


    if(!game.gameContinue()){

        gameOver();


    }

}

void playroom::on_stopCard1_5_clicked()
{
    game.getPlayer(3)->setStopCard();

    ui->getCard1_5->hide();
    ui->stopCard1_5->hide();

    if(!game.gameContinue()){
        gameOver();
    }
}

void playroom::on_pushButton_2_clicked()
{
    if(roundIndex==2){
        roundIndex++;
        ui->gridWidget_9->show();
        ui->gridWidget_10->show();
        ui->gridWidget_4->show();
        ui->widget_4->show();
        ui->widget_5->show();
        ui->widget_6->show();
        ui->getCard1_6->hide();
        ui->stopCard1_6->hide();

        ui->getCard1_5->hide();
        ui->stopCard1_5->hide();

    }else{
    if(game.addDealerCardOver17(roundIndex)==true){
        int number=game.getDealer()->getCard(roundIndex).getPicIndex();
        switch(holdingCardCountD){
        case 1:
            ui->card1Label_3->setPixmap(cardHolder.at(52));
            break;
        case 2:
            ui->card2Label_3->setPixmap(cardHolder.at(52));
            break;
        case 3:
            ui->card3Label_3->setPixmap(cardHolder.at(52));
            break;
        case 4:
            ui->card4Label_3->setPixmap(cardHolder.at(52));
            break;
        case 5:
            ui->card5Label_3->setPixmap(cardHolder.at(52));
            break;
        case 6:
            ui->card6Label_3->setPixmap(cardHolder.at(52));
            break;
        case 7:
            ui->card7Label_3->setPixmap(cardHolder.at(52));
            break;
        case 8:
            ui->card8Label_3->setPixmap(cardHolder.at(52));
            break;
        case 9:
            ui->card9Label_3->setPixmap(cardHolder.at(52));
            break;
        case 10:
            ui->card10Label_3->setPixmap(cardHolder.at(52));
            break;
        }
        holdingCardCountD++;
    }
    roundIndex++;
    if(!game.getPlayer(1)->isStopCard()){

        ui->getCard1_4->show();
        ui->stopCard1_4->show();
    }
    else if(playerNumber.toInt()>=2&&!game.getPlayer(2)->isStopCard()){

        ui->getCard1_6->show();
        ui->stopCard1_6->show();
    }
    else if(playerNumber.toInt()>=3&&!game.getPlayer(3)->isStopCard()){

        ui->getCard1_5->show();
        ui->stopCard1_5->show();
    }
}

}

void playroom::on_Commit_6_clicked()
{

    int text = ui ->MoneyValue_6->text().toInt();
    if (text > money){
        QMessageBox::critical(this,"温馨提示","您的下注金额已经超过本金");
    }
    else{
        if(text<=money){
            ui -> oMoneyValue_6 ->setText(QString::number(money-text));
            ui->MoneyValue_6->setEnabled(false);
            ui->Commit_6->hide();
            game.getPlayer(1)->addOnBet(text);
        }
    }
}

void playroom::on_Commit_4_clicked()
{

    int text = ui ->MoneyValue_4->text().toInt();
    if (text > money){
        QMessageBox::critical(this,"温馨提示","您的下注金额已经超过本金");
    }
    else{
    if(text<=money){
        ui -> oMoneyValue_4 ->setText(QString::number(money-text));
        ui->MoneyValue_4->setEnabled(false);
        ui->Commit_4->hide();
        game.getPlayer(2)->addOnBet(text);

    }
    }
}

void playroom::on_Commit_5_clicked()
{

    int text = ui ->MoneyValue_5->text().toInt();
    if (text > money){
        QMessageBox::critical(this,"温馨提示","您的下注金额已经超过本金");
    }
    else{
    if(text<=money){
        ui -> oMoneyValue_5 ->setText(QString::number(money-text));
        ui->MoneyValue_5->setEnabled(false);
        ui->Commit_5->hide();
        game.getPlayer(3)->addOnBet(text);
    }
    }
}
