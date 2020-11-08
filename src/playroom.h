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
