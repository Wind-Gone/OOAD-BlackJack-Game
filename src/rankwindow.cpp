#include "rankwindow.h"
#include "ui_rankwindow.h"

extern int player_money1 ;
extern int player_money2 ;
extern int player_money3 ;
extern int player1_point ;
extern int player2_point ;
extern int player3_point ;
extern int dealer_point ;
extern int bet1,bet2,bet3;
extern bool flag1 ;
extern bool flag2 ;
extern bool flag3 ;
extern QString playerNumber;
extern QString payment;
extern QString currency;
extern int money;

RankWindow::RankWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RankWindow)
{
    ui->setupUi(this);
    ui->DealerPointValue ->setText( QString::number(dealer_point) );
    ui->DealerBJValue->setText("否");
    if(playerNumber == "1"){
        ui->groupBox_2->hide();
        ui->groupBox_3->hide();
        ui->value2->hide();
        ui->value3->hide();
        ui->result2->hide();
        ui->result3->hide();
        ui->PlayerPointValue->setText(QString::number(player1_point));

        ui->PlayerBJValue ->setText("否");
        if(flag1){
            ui->result1->setText("玩家一胜利,剩余资本数为"+QString::number(player_money1)+currency);
        }
        else{
            int resultmoney1 = player_money1 ;
            ui->result1->setText("庄家胜利,玩家一剩余资本数为"+QString::number(resultmoney1)+currency);
        }
    }


    else if(playerNumber == "2"){

        ui->groupBox_3->hide();
        ui->value3->hide();
        ui->result3->hide();
        ui->PlayerPointValue->setText(QString::number(player1_point));
        ui->PlayerBJValue ->setText("否");
        if(flag1){
            ui->result1->setText("玩家1胜利,剩余资本数为"+QString::number((player_money2))+currency);
        }
        else{
            int resultmoney1 = player_money2;
            ui->result1->setText("庄家胜利,玩家1剩余资本数为"+QString::number(resultmoney1)+currency);
        }

        ui->PlayerPointValue_2->setText(QString::number(player2_point));
        ui->PlayerBJValue_2 ->setText("否");
        if(flag2){
            ui->result2->setText("玩家2胜利,剩余资本数为"+QString::number((player_money2))+currency);
        }
        else{
            int resultmoney2 = player_money2;
            ui->result2->setText("庄家胜利,玩家2剩余资本数为"+QString::number(resultmoney2)+currency);
        }
    }

    else{
        ui->PlayerPointValue->setText(QString::number(player1_point));

        ui->PlayerBJValue ->setText("否");
        if(flag1){
            ui->result1->setText("玩家1胜利,剩余资本数为"+QString::number((player_money1))+currency);
        }
        else{
            int resultmoney1 = player_money1;
            ui->result1->setText("庄家胜利,玩家1剩余资本数为"+QString::number(resultmoney1)+currency);
        }

        ui->PlayerPointValue_2->setText(QString::number(player2_point));
        ui->PlayerBJValue_2 ->setText("否");
        if(flag2){
            ui->result2->setText("玩家2胜利,剩余资本数为"+QString::number((player_money2))+currency);
        }
        else{
            int resultmoney2 = player_money2;
            ui->result2->setText("庄家胜利,玩家2剩余资本数为"+QString::number(resultmoney2)+currency);
        }


        ui->PlayerPointValue_3->setText(QString::number(player3_point));
        ui->PlayerBJValue_3 ->setText("否");
        if(flag3){
            ui->result3->setText("玩家3胜利,剩余资本数为"+QString::number((player_money3))+currency);
        }
        else{
            int resultmoney3 = player_money3;
            ui->result3->setText("庄家胜利,玩家3剩余资本数为"+QString::number(resultmoney3)+currency);
        }

    }

}

RankWindow::~RankWindow()
{
    delete ui;
}
