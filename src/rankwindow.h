#ifndef RANKWINDOW_H
#define RANKWINDOW_H

#include <QMainWindow>

// 排名窗口
namespace Ui {
class RankWindow;
}

class RankWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RankWindow(QWidget *parent = 0);
    ~RankWindow();

private:
    Ui::RankWindow *ui;
};

#endif // RANKWINDOW_H
