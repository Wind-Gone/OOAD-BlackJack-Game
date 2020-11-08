#include "bet.h"

void Bet::SetValue(bool betOrNot, int value)
{
    this->betOrNot = betOrNot;
    this->value = value;
}

void Bet::addOnValue(int addOnValue)
{
    this->value = this->value + addOnValue;
}
