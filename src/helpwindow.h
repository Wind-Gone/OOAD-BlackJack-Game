#ifndef HELPWINDOW_H
#define HELPWINDOW_H

#include <QMainWindow>

// 规则窗口
namespace Ui {
class Helpwindow;
}

class Helpwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Helpwindow(QWidget *parent = 0);
    ~Helpwindow();

private:
    Ui::Helpwindow *ui;
};

#endif // HELPWINDOW_H
