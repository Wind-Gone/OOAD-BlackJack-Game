#ifndef WINNER_H
#define WINNER_H

#include <iostream>
#include <vector>
#include "Card.h"
#include "Bet.h"
using namespace std;

class Winner
{
private:
    Card firstBrightCard;
    Card secondBrightCard;
    vector<Card> addCard;
    Bet bet;

public:
    void judgeBrokenCard();  //看plyer的brokencard真假
    void compareFaceValue(); //对点数以及ACE的比较
    void announceWinner();
};

#endif // WINNER_H
