#ifndef PLAYER_H
#define PLAYER_H


#include <iostream>
#include <vector>
#include <string.h>
#include "Card.h"
#include "Bet.h"

using namespace std;

// 玩家类
class Player
{
public:
    string name;   // 昵称
    int money;     // 资金数
    Card firstBrightCard; // 第一张明牌
    Card secondBrightCard; // 第二张明牌
    vector<Card> addCard; // 除却发牌后的额外手牌
    Bet bet;                // 下注
    int sumFaceValue; //最后一手牌的总点数
    bool brokenCard; // 是否爆牌
    bool stopCard; // 是否停牌
    int id;        // ID号


    Card getCard(int cardIndex);  //获取指定序列号的卡牌

    void checkAndSetBrokenCard(); // 判断是否爆牌

    void getFirstTwoBrightCards(); // 获取前两张明牌

    void getLaterCards();           // 获取最后的手牌

    int computeCardPoint();         // 计算点数

    void setBet(bool betOrNot, int value); // 设置下注

    void addOnBet(int addOnValue);  // 增加下注数

    int getMoney();  // 获取资金数

    int getBetValue(); // 获取下注数

    bool isStopCard(); // 判断是否停牌

    bool isBrokenCard(); // 判断是否爆牌

    int getId();        // 获取ID号

    string getName();  //  获取名称

    void setStopCard();  // 设置停牌

    bool checkStop();  // 判断是否停牌

    void addFirstBrightCard(Card card);  // 添加第一张明牌

    void addSecondBrightCard(Card card); // 添加第二张明牌

    void addAddCard(Card card);   // 添加额外手牌

    bool judgeBlackJack();  // 判断是否实现BlakcJack

    void checkout(bool isWinner,bool isPlayerBlackjack, bool isDealerBlackjack);

    Player(int id, string name, int money); // 有参构造函数
};

#endif // PLAYER_H
