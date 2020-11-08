#include "card.h"

int Card::getPicIndex(){

    return picIndex;

}

int Card::getValue(){
    return (value >= 10)?10:value;
}

Suit Card::getSuit()
{
    return suit;
}

Card::Card(int picIndex,int value,Suit suit){
    this->value=value;
    this->suit=suit;
    this->picIndex=picIndex;
}

