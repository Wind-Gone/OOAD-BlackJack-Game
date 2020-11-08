#include "game.h"

Dealer* Game::getDealer()
{
    return &dealer;
}

Player* Game::getPlayer(int playerIndex)
{
    return &players[playerIndex-1];
}

Game::Game(int playerNumber, int suitNumber,int money)
{
    deck = Deck(suitNumber);
    this->playerNumber = playerNumber;
    for (int i = 0; i < playerNumber; i++)
    {
        players.push_back(Player(i, "hzr", money));
    }
}

bool Game::gameContinue()
{
    for (int i = 0; i < players.size(); i++)
    {
        if (!(players[i].checkStop()))
            return true;
    }
    return false;
}

void Game::callShuffle()
{
    deck.shuffle();
}
void Game::callDitrbuteCards()
{
    /*---先给玩家发明牌------*/
    for (int i = 0; i < players.size(); i++)
        deck.distributeCard(players[i], 1);
    /*---再给庄家发明牌------*/
    deck.distributeCard(dealer, 1);
    /*---再给玩家发明牌------*/
    for (int i = 0; i < players.size(); i++)
        deck.distributeCard(players[i], 2);
    /*---再给庄家发暗牌------*/
    deck.distributeCard(dealer, 2);
    /*----发牌结果展示----*/
    bool lastShow = false;
    cout << "Shuffling" << endl;
    cout << "前两轮发牌结束！展示桌面..." << endl;
    cout << "花色"
         << "     "
         << "面值" << endl;
    /*---庄家牌色------*/
    deck.showCards(dealer, lastShow);
    /*---玩家牌色------*/
    deck.showCards(players);
}

void Game::askForBet()
{

    for (int i = 0; i < playerNumber; i++)
    {
        char answer;
        cout << "请问" << i << "号玩家需要下注吗?[y/n]" << endl;
        cin >> answer;
        if (answer == 'y')
        {
            bool betOrNot = true;
            int value;
            cout << "请输入金额" << endl;
            cin >> value;
            players[i].setBet(betOrNot, value);
        }

        else if (answer == 'n')
        {
        }
        else
        {
            cout << "请输入y/n" << endl;
        }
    }
    cout << "-------------------------------" << endl;
}

void Game::askForAddCard(int playerIndex,int cardIndex)
{
    if (!players[playerIndex].isBrokenCard())
    deck.distributeCard(players[playerIndex], cardIndex);
}

void Game::askForAddCard(int index)
{
    bool lastShow = false;
    for (int i = 0; i < playerNumber; i++)
    {
        if (!players[i].isBrokenCard())
        {
            char answer;
            deck.showCards(dealer, lastShow);
            deck.showCards(players);
            cout << "请问" << i << "号玩家需要加牌吗?[y/n]" << endl;
            cin >> answer;
            if (answer == 'y')
            {
                deck.distributeCard(players[i], index);
            }

            else if (answer == 'n')
            {
                players[i].setStopCard();
            }
            else
            {
                cout << "请输入y/n" << endl;
            }
            players[i].checkAndSetBrokenCard();
        }
    }
}

bool Game::addDealerCardOver17(int index)
{
    bool lastShow = false;
    if (deck.computeCardPoint(dealer) < 17)
    {
        deck.distributeCard(dealer, index);
        deck.showCards(dealer, lastShow);
        deck.showCards(players);
        return true;
    }
    return false;
}

void Game::askForAddBet()
{
    for (int i = 0; i < playerNumber; i++)
    {
        bool lastShow = false;
        if (!players[i].isBrokenCard())
        {
            char answer;
            deck.showCards(dealer, lastShow);
            deck.showCards(players);
            cout << "请问" << i << "号玩家需要加注吗?[y/n]" << endl;
            cin >> answer;
            if (answer == 'y')
            {
                int addOnValue;
                cout << "请输入加注金额：" << endl;
                cin >> addOnValue;
                players[i].addOnBet(addOnValue);
            }
            else if (answer == 'n')
            {
            }
            else
            {
                cout << "请输入y/n" << endl;
            }
        }
    }
}

void Game::callJudgeWinner()
{
    cout << "-------接下来翻开暗牌判断胜负------" << endl;
    bool lastShow = true;
    deck.showCards(dealer, lastShow);
    deck.showCards(players);
    for (int i = 0; i < players.size(); i++)
    {
        if (deck.judgeIfPlayerWin(players[i], dealer))
            cout << players[i].getId() << " player wins" << endl;
        else
        {
            cout << players[i].getId() << " player loses" << endl;
        }
    }
}

void Game::startGame()
{
    callShuffle();
    callDitrbuteCards();
    askForBet();

    int index = 2;
    while (gameContinue())
    {
        index++;
        askForAddCard(index);
        addDealerCardOver17(index); //给自己发明牌
        askForAddBet();
    }
    callJudgeWinner();
}

void Game::clearCards()
{
    deck.shuffle();
}

void Game::endGame()
{
    clearCards();
}

void Game::addBet(int playerIndex,int bet){
    players[playerIndex].addOnBet(bet);
}


bool Game::judgeIfPlayerWin(int playerIndex){
    return deck.judgeIfPlayerWin(players[playerIndex],dealer);
}

void Game::checkoutForAllPlayers(){
    for(int i=0;i<players.size();i++){
        players[i].checkout(judgeIfPlayerWin(i),players[i].judgeBlackJack(),dealer.judgeBlackJack());

    }
}
