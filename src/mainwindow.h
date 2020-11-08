#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "setwindow.h"
#include "helpwindow.h"


// 主窗口
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    SetWindow *setwindow;
    Helpwindow *helpwindow;


private slots:
    void on_closeButton_clicked();

    void on_playButton_clicked();

    void on_actionQuit_triggered();

    void on_actionRule_triggered();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
