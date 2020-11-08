#include "player.h"
#pragma execution_character_set("utf-8")

Card Player::getCard(int cardIndex){
    if(cardIndex==1)
        return firstBrightCard;
    else if(cardIndex == 2)
        return secondBrightCard;
    else
        return addCard[cardIndex-3];

}

void Player::getFirstTwoBrightCards()
{
    cout << this->firstBrightCard.getSuit() << "    " << this->firstBrightCard.getValue() << endl;
    cout << this->secondBrightCard.getSuit() << "    " << this->secondBrightCard.getValue() << endl;
}

void Player::getLaterCards()
{
    int i = 0;
    for (vector<Card>::iterator iter = addCard.begin(); iter != addCard.end(); ++iter)
    {
        cout << this->addCard[i].getSuit() << "    " << this->addCard[i].getValue() << endl;
        i++;
    }
}

void Player::checkAndSetBrokenCard()
{
    if (computeCardPoint() > 21)
    {
        brokenCard = true;
        stopCard = true;
        cout << "sorry " << id << " player , you have broken cards !" << endl;
    }
}

int Player::computeCardPoint()
{
    int aceNumber = 0;
    if (firstBrightCard.getValue() == 1)
        aceNumber++;
    if (secondBrightCard.getValue() == 1)
        aceNumber++;
    int sum = firstBrightCard.getValue() + secondBrightCard.getValue();
    for (int i = 0; i < addCard.size(); i++)
    {
        sum += addCard[i].getValue();
        if (addCard[i].getValue() == 1)
            aceNumber++;
    }
    int acesAddPoints = aceNumber * 9;
    while (sum + acesAddPoints > 21)
    {
        acesAddPoints -= 9;
        if (acesAddPoints < 0)
        {
            acesAddPoints = 0;
            break;
        }
    }
    sumFaceValue = sum + acesAddPoints;
    return sum + acesAddPoints;
}

void Player::setBet(bool betOrNot, int value)
{
    this->bet.SetValue(betOrNot, value);
}

void Player::addOnBet(int addOnValue)
{
    this->bet.addOnValue(addOnValue);
    money=money-addOnValue;
}


int Player::getMoney(){
    return money;
}


int Player::getBetValue(){
    return bet.getValue();
}



bool Player::isStopCard()
{
    return stopCard;
}

bool Player::isBrokenCard()
{
    return brokenCard;
}

int Player::getId()
{
    return id;
}

string Player::getName()
{
    return name;
}



void Player::setStopCard()
{
    stopCard = true;
}

bool Player::checkStop()
{
    return stopCard == true;
}

void Player::addFirstBrightCard(Card card)
{
    firstBrightCard = card;
}

void Player::addSecondBrightCard(Card card)
{
    secondBrightCard = card;
}

void Player::addAddCard(Card card)
{
    addCard.push_back(card);
}



bool Player::judgeBlackJack()
{
    return (firstBrightCard.getValue() == 1 && secondBrightCard.getValue() == 10 ||
            secondBrightCard.getValue() == 1 && firstBrightCard.getValue() == 10);
}

void Player::checkout(bool isWinner, bool isPlayerBlackjack, bool isDealerBlackjack){
    if(isWinner){
        if(isPlayerBlackjack){
            cout<<id<<"--"<<"p1: "<<money<<"bet: "<<bet.getValue()<<endl;
            money=money+bet.getValue()*4;
        }else{
            cout<<id<<"--"<<"p2: "<<money<<"bet: "<<bet.getValue()<<endl;
            money=money+bet.getValue()*3;
        }
    }
    else{
        if(isDealerBlackjack){
            cout<<id<<"--"<<"p3: "<<money<<"bet: "<<bet.getValue()<<endl;
            money=money-bet.getValue()*2;
        }else{
            cout<<id<<"--"<<"p4: "<<money<<"bet: "<<bet.getValue()<<endl;
            money=money-bet.getValue();
        }
    }
}


Player::Player(int id, string name, int money)
{
    this->id = id;
    this->name = name;
    this->money = money;
    this->brokenCard = false;
    this->stopCard = false;
}
