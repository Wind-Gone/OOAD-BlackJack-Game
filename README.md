# 🌲OOAD-Lab2-BlackJack



> East China Normal University



### **实验要求**

根据如下规则，复现BlackJack游戏（规则引自维基百科）

拥有最高点数的玩家获胜，其点数必须等于或低于21点；超过21点的玩家称为爆牌（Bust）。2点至10点的牌以牌面的点数计算，J、Q、K 每张为10点。A可记为1点或为11点，而2-10则按牌面点数算，若玩家会因A而爆牌则A可算为1点。当一手牌中的A算为11点时，这手牌便称为“软牌”（soft hand），因为除非玩者再拿另一张牌，否则不会出现爆牌。

庄家在取得17点之前必须要牌，因规则不同会有软17点或硬17点才停牌的具体区分。

每位玩家的目的是要取得最接近21点数的牌来击败庄家，但同时要避免爆牌。要注意的是，若玩家爆牌在先即为输，就算随后庄家爆牌也是如此。若玩家和庄家拥有同样点数，这样的状态称为“push”，玩家和庄家皆不算输赢。每位玩者和庄家之间的游戏都是独立的，因此在同一局内，庄家有可能会输给某些玩家，但也同时击败另一些玩家。

牌桌上通常会印有最小和最大的赌注，每一间赌场的每一张牌桌的限额都可能不同。在第一笔筹码下注后，庄家开始发牌，若是从一副或两副牌中发牌，称为“pitch”牌局；较常见的则是从四副牌中发牌。庄家会发给每位玩家和自己两张牌，庄家的两张牌中会有一张是点数朝上的“明牌”，所有玩家皆可看见，另一张则是点数朝下的“暗牌”。若是四副牌时，发牌时点数会朝上，若为“pitch”牌局则发牌时点数朝下。

在美式的二十一点游戏中，若庄家的明牌是A或价值10的牌，庄家会确认他的暗牌是否会形成二十一点。这项确认会在所有玩家选择之前进行，但进行前会先询问玩家是否需要“保险”（insurance，在明牌是 A 的情况下）。若庄家的牌为二十一点（blackjack），则所有的玩家即时算输，将损失第一笔赌注筹码，除非玩者本身也是二十一点，或形成同点数的 push 状况。（在某些美国的赌场，庄家采用欧式的规则，在全部玩家都出手前不会先去确认暗牌。在这样的情况下，当庄家的牌揭开后为 二十一点时，则所有没有二十一点的玩家算输。）

两张牌点数相加为21（一张A再加一张价值10点的牌）称为“二十一点”（black jack），拥有这副牌的玩家即自动成为赢家（除非庄家也同时持有二十一点，这种点数相同的情形就称为 push）。拥有二十一点的玩家可赢得下注筹码的1.5倍。部分的赌场仅付给1.2倍的金额；但通常是在仅使用一副牌游玩的赌局中。

通常每次以四至六副[扑克牌](https://zh.wikipedia.org/wiki/撲克牌)游玩，直至玩剩一副或一半为止，再重新洗牌。



1. **洗牌**
2. 向各玩家分别派发一张**明牌**
3. 庄家发给自己一张**明牌**
4. 向各玩家派第二张**明牌**
5. 庄家再发给自己一张**暗牌**（不是所有赌场都会有这个步骤，大部分赌场都是在所有玩家结束要牌后才发第二张明牌给庄家）
6. 如果庄家明牌是A、荷官会询问玩家是否购买**保险**
7. 玩家可进行**加注**、**投降**、**分牌**等动作
8. 庄家逐位询问玩家是否**加牌**、直至闲家不加牌才询问下一位玩家，轮流询问玩家直至最后一位玩家加牌完成
9. 庄家如不足**17点**便需加牌直至超过或等于**17点**
10. 对未有**爆牌**的玩家，比点数大小，大者胜，可得赔金; 如庄家**爆牌**、未有**爆牌**的玩家便可得赔金
11. 回收已使用的牌及给小费



### **环境部署**：

- 实验环境：Visual Studio Code 2020
- 编程语言：C++
- GUI框架：QT



### **文件说明**：

本次项目共提交如下几份文件：

1. 实验报告doc文档

2. 项目核心文件

3. Readme文件

   

##### 实验报告：

- 完整的问题求解与对象的抽象分析
- 基于UML的图像展示
- 项目的样图展示
- 项目总结及成员心得体会 			

##### Readme：

- 对程序代码的部分说明
- 详细环境部署



##### 项目文件：



**项目结构：**

![image-20201104232226867](OOAD-Lab2-BlackJack.assets/image-20201104232226867.png)



##### Bet类：

```c++
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

```

##### Card类：

```c++
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

```

##### Dealer类：

```c++
#ifndef DEALER_H
#define DEALER_H


#include <iostream>
#include <vector>
#include "Card.h"

using namespace std;

// 庄家类
class Dealer
{
private:
    Card brightCard; // 发牌的第一张明牌
    Card hiddenCard; // 发牌的第一张暗牌
    vector<Card> addCard; // 要牌阶段的额外手牌
    int sumFaceValue; //最后手中牌的总点数
    bool brokenCard;  // 是否爆牌

public:

    Card getCard(int cardIndex); //  获取某张牌

    void addBrightCard(Card card); // 添加一张明牌

    void addHiddenCard(Card card); // 添加一张暗牌

    void addAddCard(Card card); // 添加额外手牌

   bool judgeBlackJack(); // 判断是否达成BlackJack

   int computeCardPoint(); // 计算最后手牌点数

   void askForBet();   // 请求加注

   void getFirstTwoCards(bool lastShow); // 得到第一次的两张牌

   void getLaterCards(); // 得到最后的牌
};
#endif // DEALER_H

```

##### Deck 类：

```c++
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

```



##### Game类：

```c++
#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <Vector>
#include "Dealer.h"
#include "Player.h"
#include "Deck.h"
using namespace std;

//游戏类
class Game
{

private:
    int playerNumber;   //玩家数
    Dealer dealer;      // 庄家
    vector<Player> players; // 玩家
    Deck deck;          // 牌副数

public:
    Game() {}   // 无参构造函数
    Game(int playerNumber, int suitNumber,int money);  //有参构造函数
    Player* getPlayer(int playerIndex);  // 获取指定玩家号的玩家
    Dealer* getDealer();        //获取庄家信息
    void addBet(int playerIndex,int bet); // 玩家下注
    bool judgeIfPlayerWin(int playerIndex); //判断玩家是否胜利
    void callShuffle();     //调用洗牌
    void callDitrbuteCards();   //发牌
    void askForBet();       //询问下注情况
    void askForAddCard(int playerIndex,int cardIndex);  //playerIndex号玩家发第cardIndex张牌
    void askForAddCard(int index); //询问加牌情况
    bool addDealerCardOver17(int index); //如果庄家牌小于17就继续拿牌
    void askForAddBet();    //询问加注情况
    void callJudgeWinner(); // 宣布获胜者
    void clearCards();  //清牌
    bool gameContinue(); // 判断游戏是否继续
    void startGame(); //开始游戏
    void endGame(); //结束游戏
    void checkoutForAllPlayers(); //结账
};

#endif // GAME_H

```



##### Player 类：

```c++
#ifndef PLAYER_H
#define PLAYER_H


#include <iostream>
#include <vector>
#include <string.h>
#include "Card.h"
#include "Bet.h"

using namespace std;

// 玩家类
class Player
{
public:
    string name;   // 昵称
    int money;     // 资金数
    Card firstBrightCard; // 第一张明牌
    Card secondBrightCard; // 第二张明牌
    vector<Card> addCard; // 除却发牌后的额外手牌
    Bet bet;                // 下注
    int sumFaceValue; //最后一手牌的总点数
    bool brokenCard; // 是否爆牌
    bool stopCard; // 是否停牌
    int id;        // ID号


    Card getCard(int cardIndex);  //获取指定序列号的卡牌

    void checkAndSetBrokenCard(); // 判断是否爆牌

    void getFirstTwoBrightCards(); // 获取前两张明牌

    void getLaterCards();           // 获取最后的手牌

    int computeCardPoint();         // 计算点数

    void setBet(bool betOrNot, int value); // 设置下注

    void addOnBet(int addOnValue);  // 增加下注数

    int getMoney();  // 获取资金数

    int getBetValue(); // 获取下注数

    bool isStopCard(); // 判断是否停牌

    bool isBrokenCard(); // 判断是否爆牌

    int getId();        // 获取ID号

    string getName();  //  获取名称

    void setStopCard();  // 设置停牌

    bool checkStop();  // 判断是否停牌

    void addFirstBrightCard(Card card);  // 添加第一张明牌

    void addSecondBrightCard(Card card); // 添加第二张明牌

    void addAddCard(Card card);   // 添加额外手牌

    bool judgeBlackJack();  // 判断是否实现BlakcJack

    void checkout(bool isWinner,bool isPlayerBlackjack, bool isDealerBlackjack);

    Player(int id, string name, int money); // 有参构造函数
};

#endif // PLAYER_H

```

##### Playroom 类：

```c++
#ifndef PLAYROOM_H
#define PLAYROOM_H

#include <QMainWindow>
#include "game.h"
#include "rankwindow.h"



namespace Ui {
class playroom;
}

class playroom : public QMainWindow
{
    Q_OBJECT

public:
    explicit playroom(QWidget *parent = 0);
    ~playroom();
    QList<QPixmap> cardHolder;
    Game game;
    int roundIndex=1;
    RankWindow *rankwindow;


public slots:
    void loadList();
    void gameOver();



private slots:
    void on_pushButton_clicked();

    void on_getCard1_4_clicked();

    void on_stopCard1_4_clicked();

    void on_getCard1_6_clicked();

    void on_stopCard1_6_clicked();

    void on_getCard1_5_clicked();

    void on_stopCard1_5_clicked();

    void on_pushButton_2_clicked();

    void on_Commit_6_clicked();

    void on_Commit_4_clicked();

    void on_Commit_5_clicked();

private:
    Ui::playroom *ui;
};

#endif // PLAYROOM_H

```

