#ifndef DEALER_H
#define DEALER_H


#include <iostream>
#include <vector>
#include "Card.h"

using namespace std;

// 庄家类
class Dealer
{
private:
    Card brightCard; // 发牌的第一张明牌
    Card hiddenCard; // 发牌的第一张暗牌
    vector<Card> addCard; // 要牌阶段的额外手牌
    int sumFaceValue; //最后手中牌的总点数
    bool brokenCard;  // 是否爆牌

public:

    Card getCard(int cardIndex); //  获取某张牌

    void addBrightCard(Card card); // 添加一张明牌

    void addHiddenCard(Card card); // 添加一张暗牌

    void addAddCard(Card card); // 添加额外手牌

   bool judgeBlackJack(); // 判断是否达成BlackJack

   int computeCardPoint(); // 计算最后手牌点数

   void askForBet();   // 请求加注

   void getFirstTwoCards(bool lastShow); // 得到第一次的两张牌

   void getLaterCards(); // 得到最后的牌
};
#endif // DEALER_H
