#include "deck.h"
#include "random"

void Deck::distributeCard(Player& player,int index){
    Card card(cards.back().getPicIndex(),cards.back().getValue(),cards.back().getSuit());
    if(index==1)
        player.addFirstBrightCard(card);
    if(index==2)
        player.addSecondBrightCard(card);
    if(index>2)
        player.addAddCard(card);
    cards.pop_back();
}



void Deck::distributeCard(Dealer& dealer,int index){
    Card card(cards.back().getPicIndex(),cards.back().getValue(),cards.back().getSuit());

    if(index==1)
        dealer.addBrightCard(card);
    if(index==2)
        dealer.addHiddenCard(card);
    if(index>2)
        dealer.addAddCard(card);
    cards.pop_back();
}

void Deck::shuffle()
{
    srand(time(NULL));
    random_shuffle(cards.begin(), cards.end());
}

void Deck::showCards(Dealer dealer, bool lastShow)
{
    cout << "庄家:" << endl;
    dealer.getFirstTwoCards(lastShow);
    dealer.getLaterCards();
}

void Deck::showCards(vector<Player> players)
{
    int i = 0;
    for (vector<Player>::iterator iter = players.begin(); iter != players.end(); ++iter)
    {
        cout << "玩家 " << i << " :" << endl;
        players[i].getFirstTwoBrightCards();
        players[i].getLaterCards();
        i++;
    }
    cout << "-------------------------------" << endl;
}

Deck:: Deck(){}

Deck::Deck(int count)
{
    this->count = count;
    for (int i = 0; i < count; i++)
    {
        for (int j = 1; j <= 52; j++)
        {   int value;
            if(j%13==0)
                value=13;
            else
                value=j%13;
            Card card(j,value,(Suit)(j/13));
            cards.push_back(card);
        }
    }
}

int Deck:: computeCardPoint(Player player)
{
    return player.computeCardPoint();
}


int Deck::computeCardPoint(Dealer dealer)
{
    return dealer.computeCardPoint();
}

bool Deck::judgeBrokenCard(Player player)
{
    if (player.computeCardPoint() > 21)
        return true;
    else
        return false;
}

bool Deck::judgeBrokenCard(Dealer &dealer)
{
    if (dealer.computeCardPoint() > 21)
        return true;
    else
        return false;
}

bool Deck::judgeIfPlayerWin(Player &player, Dealer &dealer)
{
    if (player.judgeBlackJack() == true)
        return true;
    if (dealer.judgeBlackJack() == true)
        return false;
    if (judgeBrokenCard(player) == true)
        return false;
    if(judgeBrokenCard(dealer) == true)
        return true;
    return player.computeCardPoint() > dealer.computeCardPoint();
}

void Deck::clearAllCards()
{
    shuffle();
}

