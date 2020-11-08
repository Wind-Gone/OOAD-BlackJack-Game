#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
#include "Card.h"
#include "Player.h"
#include "Dealer.h"
using namespace std;

// 多副牌类
class Deck
{
private:
    int count; //多少副牌
    vector<Card> cards; // 总牌数

public:
    Deck(); // 无参构造函数

    Deck(int count); // 有参构造函数

    void shuffle(); // 洗牌

    //功能：
    //index:当前是第几轮（第1轮庄家发明牌，玩家发明牌；第二轮庄家发暗牌，玩家发明牌；第三轮放入addCards里）
    void distributeCard(Player &player, int index);

    void distributeCard(Dealer &dealer, int index);  // 发庄家牌

    void showCards(Dealer dealer, bool lastShow); // 展示庄家手牌

    void showCards(vector<Player> players); // 展示玩家手牌

    int computeCardPoint(Player player); // 计算玩家手牌点数

    int computeCardPoint(Dealer dealer); // 计算庄家手牌点数

    bool judgeBrokenCard(Player player);// 判断玩家是否爆牌

    bool judgeBrokenCard(Dealer &dealer); // 判断庄家是否爆牌

    bool judgeIfPlayerWin(Player &player, Dealer &dealer); // 判断庄家和玩家输赢情况

    void clearAllCards(); // 清牌: 重新洗牌
};

#endif // DECK_H
