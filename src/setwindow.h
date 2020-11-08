#ifndef SETWINDOW_H
#define SETWINDOW_H
#include "playroom.h"
#include <QMainWindow>

// 设置窗口
namespace Ui {
class SetWindow;
}

class SetWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SetWindow(QWidget *parent = 0);

    playroom *myplayroom;
    ~SetWindow();

private:
    Ui::SetWindow *ui;

private slots:

    void on_startButton_clicked();


    void on_playernumber_1_clicked();
    void on_playernumber_2_clicked();
    void on_playernumber_3_clicked();
    void on_type1_clicked();
    void on_type2_clicked();
    void on_type3_clicked();
    void on_type4_clicked();
    void on_pay1_clicked();
    void on_pay2_clicked();
    void on_pay3_clicked();
    void on_card1_clicked();
    void on_card2_clicked();
    void on_card3_clicked();
    void on_moneyText_textChanged(const QString &arg1);
};

#endif // SETWINDOW_H
