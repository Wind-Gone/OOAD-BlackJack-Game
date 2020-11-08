#ifndef CARD_H
#define CARD_H


#include <iostream>
#include <vector>

using namespace std;

enum Suit
{
    Spade,
    Heart,
    Diamond,
    Club
};

// 卡牌类
class Card
{
private:

    int picIndex; //一副牌里的牌号(Example:1-52)
    int value; // 面值
    Suit suit; // 花色

public:
    int getPicIndex();  // 得到某张牌的牌号

    int getValue();     // 得到某张牌的面值

    Suit getSuit();     // 得到某张牌的花色

    Card(int picIndex, int value, Suit suit);  // 有参构造函数

    Card() {}   // 无参构造函数


};

#endif // CARD_H
