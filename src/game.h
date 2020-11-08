#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <Vector>
#include "Dealer.h"
#include "Player.h"
#include "Deck.h"
using namespace std;

//游戏类
class Game
{

private:
    int playerNumber;   //玩家数
    Dealer dealer;      // 庄家
    vector<Player> players; // 玩家
    Deck deck;          // 牌副数

public:
    Game() {}   // 无参构造函数
    Game(int playerNumber, int suitNumber,int money);  //有参构造函数
    Player* getPlayer(int playerIndex);  // 获取指定玩家号的玩家
    Dealer* getDealer();        //获取庄家信息
    void addBet(int playerIndex,int bet); // 玩家下注
    bool judgeIfPlayerWin(int playerIndex); //判断玩家是否胜利
    void callShuffle();     //调用洗牌
    void callDitrbuteCards();   //发牌
    void askForBet();       //询问下注情况
    void askForAddCard(int playerIndex,int cardIndex);  //playerIndex号玩家发第cardIndex张牌
    void askForAddCard(int index); //询问加牌情况
    bool addDealerCardOver17(int index); //如果庄家牌小于17就继续拿牌
    void askForAddBet();    //询问加注情况
    void callJudgeWinner(); // 宣布获胜者
    void clearCards();  //清牌
    bool gameContinue(); // 判断游戏是否继续
    void startGame(); //开始游戏
    void endGame(); //结束游戏
    void checkoutForAllPlayers(); //结账
};

#endif // GAME_H
