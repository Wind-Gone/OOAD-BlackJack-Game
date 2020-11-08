#include "dealer.h"

int Dealer::computeCardPoint()
{
    int aceNumber = 0;
    if (brightCard.getValue() == 1)
        aceNumber++;
    if (hiddenCard.getValue() == 1)
        aceNumber++;
    int sum = brightCard.getValue() + hiddenCard.getValue();
    for (int i = 0; i < addCard.size(); i++)
    {
        sum += addCard[i].getValue();
        if (addCard[i].getValue() == 1)
            aceNumber++;
    }
    int acesAddPoints = aceNumber * 10;
    while (sum + acesAddPoints > 21)
    {
        acesAddPoints -= 10;
        if (acesAddPoints < 0)
        {
            acesAddPoints = 0;
            break;
        }
    }
    sumFaceValue = sum + acesAddPoints;
    return sum + acesAddPoints;
}
void Dealer::getFirstTwoCards(bool lastShow)
{
    cout << this->brightCard.getSuit() << "    " << this->brightCard.getValue() << endl;

    if (lastShow == false)
    {
        cout << "*    ****" << endl;
    }
    else
    {
        cout << this->hiddenCard.getSuit() << "    " << this->hiddenCard.getValue() << endl;
    }
}

void Dealer::getLaterCards()
{
    int i = 0;
    for (vector<Card>::iterator iter = addCard.begin(); iter != addCard.end(); ++iter)
    {
        cout << this->addCard[i].getSuit() << "    " << this->addCard[i].getValue() << endl;
        i++;
    }
}


Card Dealer:: getCard(int cardIndex)
{
    if(cardIndex==1)
        return brightCard;
    else if(cardIndex==2)
        return hiddenCard;
    else
        return addCard[cardIndex-3];
}

void Dealer:: addBrightCard(Card card)
{
        brightCard = card;
}

void Dealer:: addHiddenCard(Card card) // 添加一张暗牌
{
    hiddenCard = card;
}


void Dealer:: addAddCard(Card card)
{
    addCard.push_back(card);
}



bool Dealer::judgeBlackJack()
{
    return (brightCard.getValue() + hiddenCard.getValue()) == 11;
}
