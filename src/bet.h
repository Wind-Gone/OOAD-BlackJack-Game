#ifndef BET_H
#define BET_H
#include <iostream>
#include <vector>
using namespace std;

// 赌注类.
// Example:
class Bet
{
private:
    //
    bool betOrNot;
    int value;

public:
    Bet()
    {
        this->betOrNot = false;
        this->value = 0;
    }
    int getValue(){
        return value;
    }

    void SetValue(bool betOrNot, int value);
    void addOnValue(int addOnValue);
};
#endif // BET_H
