/********************************************************************************
** Form generated from reading UI file 'playwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYWINDOW_H
#define UI_PLAYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayWindow
{
public:
    QAction *actionQuit;
    QWidget *centralwidget;
    QLabel *tableLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *playagainButton;
    QPushButton *twistButton;
    QPushButton *stickButton;
    QLabel *playertotalLabel;
    QLabel *playercurrentLabel;
    QLabel *youLabel;
    QLabel *computerLabel;
    QLabel *computerScoreLabel;
    QLabel *statusLabel;
    QLabel *computerStatusLabel;
    QLabel *outcomeLabel;
    QWidget *gridLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *card1Label;
    QLabel *card2Label;
    QLabel *card3Label;
    QLabel *card4Label;
    QLabel *card5Label;
    QLabel *card6Label;
    QLabel *card7Label;
    QLabel *card8Label;
    QLabel *card9Label;
    QLabel *card10Label;
    QWidget *gridLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *card1Label_2;
    QLabel *card2Label_2;
    QLabel *card3Label_2;
    QLabel *card4Label_2;
    QLabel *card5Label_2;
    QLabel *card6Label_2;
    QLabel *card7Label_2;
    QLabel *card8Label_2;
    QLabel *card9Label_2;
    QLabel *card10Label_2;
    QMenuBar *menubar;
    QMenu *menuQuit;

    void setupUi(QMainWindow *PlayWindow)
    {
        if (PlayWindow->objectName().isEmpty())
            PlayWindow->setObjectName(QStringLiteral("PlayWindow"));
        PlayWindow->resize(800, 500);
        PlayWindow->setBaseSize(QSize(800, 500));
        actionQuit = new QAction(PlayWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralwidget = new QWidget(PlayWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableLabel = new QLabel(centralwidget);
        tableLabel->setObjectName(QStringLiteral("tableLabel"));
        tableLabel->setGeometry(QRect(6, 2, 800, 500));
        tableLabel->setBaseSize(QSize(800, 500));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 430, 401, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        playagainButton = new QPushButton(layoutWidget);
        playagainButton->setObjectName(QStringLiteral("playagainButton"));
        playagainButton->setEnabled(false);

        horizontalLayout->addWidget(playagainButton);

        twistButton = new QPushButton(layoutWidget);
        twistButton->setObjectName(QStringLiteral("twistButton"));

        horizontalLayout->addWidget(twistButton);

        stickButton = new QPushButton(layoutWidget);
        stickButton->setObjectName(QStringLiteral("stickButton"));

        horizontalLayout->addWidget(stickButton);

        playertotalLabel = new QLabel(centralwidget);
        playertotalLabel->setObjectName(QStringLiteral("playertotalLabel"));
        playertotalLabel->setGeometry(QRect(10, 10, 47, 13));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        playertotalLabel->setPalette(palette);
        playercurrentLabel = new QLabel(centralwidget);
        playercurrentLabel->setObjectName(QStringLiteral("playercurrentLabel"));
        playercurrentLabel->setGeometry(QRect(10, 30, 111, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        playercurrentLabel->setPalette(palette1);
        youLabel = new QLabel(centralwidget);
        youLabel->setObjectName(QStringLiteral("youLabel"));
        youLabel->setGeometry(QRect(110, 90, 61, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        youLabel->setPalette(palette2);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        youLabel->setFont(font);
        computerLabel = new QLabel(centralwidget);
        computerLabel->setObjectName(QStringLiteral("computerLabel"));
        computerLabel->setGeometry(QRect(600, 90, 161, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        computerLabel->setPalette(palette3);
        computerLabel->setFont(font);
        computerScoreLabel = new QLabel(centralwidget);
        computerScoreLabel->setObjectName(QStringLiteral("computerScoreLabel"));
        computerScoreLabel->setGeometry(QRect(686, 10, 111, 20));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        computerScoreLabel->setPalette(palette4);
        statusLabel = new QLabel(centralwidget);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setGeometry(QRect(115, 350, 47, 13));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        statusLabel->setPalette(palette5);
        computerStatusLabel = new QLabel(centralwidget);
        computerStatusLabel->setObjectName(QStringLiteral("computerStatusLabel"));
        computerStatusLabel->setGeometry(QRect(630, 350, 47, 13));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        computerStatusLabel->setPalette(palette6);
        outcomeLabel = new QLabel(centralwidget);
        outcomeLabel->setObjectName(QStringLiteral("outcomeLabel"));
        outcomeLabel->setGeometry(QRect(270, 260, 281, 121));
        QPalette palette7;
        QBrush brush2(QColor(255, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        outcomeLabel->setPalette(palette7);
        outcomeLabel->setFont(font);
        outcomeLabel->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 150, 381, 101));
        horizontalLayout_2 = new QHBoxLayout(gridLayoutWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        card1Label = new QLabel(gridLayoutWidget);
        card1Label->setObjectName(QStringLiteral("card1Label"));

        horizontalLayout_2->addWidget(card1Label);

        card2Label = new QLabel(gridLayoutWidget);
        card2Label->setObjectName(QStringLiteral("card2Label"));

        horizontalLayout_2->addWidget(card2Label);

        card3Label = new QLabel(gridLayoutWidget);
        card3Label->setObjectName(QStringLiteral("card3Label"));

        horizontalLayout_2->addWidget(card3Label);

        card4Label = new QLabel(gridLayoutWidget);
        card4Label->setObjectName(QStringLiteral("card4Label"));

        horizontalLayout_2->addWidget(card4Label);

        card5Label = new QLabel(gridLayoutWidget);
        card5Label->setObjectName(QStringLiteral("card5Label"));

        horizontalLayout_2->addWidget(card5Label);

        card6Label = new QLabel(gridLayoutWidget);
        card6Label->setObjectName(QStringLiteral("card6Label"));

        horizontalLayout_2->addWidget(card6Label);

        card7Label = new QLabel(gridLayoutWidget);
        card7Label->setObjectName(QStringLiteral("card7Label"));

        horizontalLayout_2->addWidget(card7Label);

        card8Label = new QLabel(gridLayoutWidget);
        card8Label->setObjectName(QStringLiteral("card8Label"));

        horizontalLayout_2->addWidget(card8Label);

        card9Label = new QLabel(gridLayoutWidget);
        card9Label->setObjectName(QStringLiteral("card9Label"));

        horizontalLayout_2->addWidget(card9Label);

        card10Label = new QLabel(gridLayoutWidget);
        card10Label->setObjectName(QStringLiteral("card10Label"));

        horizontalLayout_2->addWidget(card10Label);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(420, 150, 381, 101));
        horizontalLayout_3 = new QHBoxLayout(gridLayoutWidget_2);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        card1Label_2 = new QLabel(gridLayoutWidget_2);
        card1Label_2->setObjectName(QStringLiteral("card1Label_2"));

        horizontalLayout_3->addWidget(card1Label_2);

        card2Label_2 = new QLabel(gridLayoutWidget_2);
        card2Label_2->setObjectName(QStringLiteral("card2Label_2"));

        horizontalLayout_3->addWidget(card2Label_2);

        card3Label_2 = new QLabel(gridLayoutWidget_2);
        card3Label_2->setObjectName(QStringLiteral("card3Label_2"));

        horizontalLayout_3->addWidget(card3Label_2);

        card4Label_2 = new QLabel(gridLayoutWidget_2);
        card4Label_2->setObjectName(QStringLiteral("card4Label_2"));

        horizontalLayout_3->addWidget(card4Label_2);

        card5Label_2 = new QLabel(gridLayoutWidget_2);
        card5Label_2->setObjectName(QStringLiteral("card5Label_2"));

        horizontalLayout_3->addWidget(card5Label_2);

        card6Label_2 = new QLabel(gridLayoutWidget_2);
        card6Label_2->setObjectName(QStringLiteral("card6Label_2"));

        horizontalLayout_3->addWidget(card6Label_2);

        card7Label_2 = new QLabel(gridLayoutWidget_2);
        card7Label_2->setObjectName(QStringLiteral("card7Label_2"));

        horizontalLayout_3->addWidget(card7Label_2);

        card8Label_2 = new QLabel(gridLayoutWidget_2);
        card8Label_2->setObjectName(QStringLiteral("card8Label_2"));

        horizontalLayout_3->addWidget(card8Label_2);

        card9Label_2 = new QLabel(gridLayoutWidget_2);
        card9Label_2->setObjectName(QStringLiteral("card9Label_2"));

        horizontalLayout_3->addWidget(card9Label_2);

        card10Label_2 = new QLabel(gridLayoutWidget_2);
        card10Label_2->setObjectName(QStringLiteral("card10Label_2"));

        horizontalLayout_3->addWidget(card10Label_2);

        PlayWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PlayWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuQuit = new QMenu(menubar);
        menuQuit->setObjectName(QStringLiteral("menuQuit"));
        PlayWindow->setMenuBar(menubar);

        menubar->addAction(menuQuit->menuAction());
        menuQuit->addAction(actionQuit);

        retranslateUi(PlayWindow);

        QMetaObject::connectSlotsByName(PlayWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PlayWindow)
    {
        PlayWindow->setWindowTitle(QApplication::translate("PlayWindow", "BlackJack C++ Made by Dominic Heal", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("PlayWindow", "Quit", Q_NULLPTR));
        tableLabel->setText(QString());
        playagainButton->setText(QApplication::translate("PlayWindow", "Play Again", Q_NULLPTR));
        twistButton->setText(QApplication::translate("PlayWindow", "Twist", Q_NULLPTR));
        stickButton->setText(QApplication::translate("PlayWindow", "Stick", Q_NULLPTR));
        playertotalLabel->setText(QApplication::translate("PlayWindow", "Total: 0", Q_NULLPTR));
        playercurrentLabel->setText(QApplication::translate("PlayWindow", "Current Cardl: 0", Q_NULLPTR));
        youLabel->setText(QApplication::translate("PlayWindow", "You", Q_NULLPTR));
        computerLabel->setText(QApplication::translate("PlayWindow", "Computer", Q_NULLPTR));
        computerScoreLabel->setText(QApplication::translate("PlayWindow", "Computer:", Q_NULLPTR));
        statusLabel->setText(QString());
        computerStatusLabel->setText(QString());
        outcomeLabel->setText(QString());
        card1Label->setText(QString());
        card2Label->setText(QString());
        card3Label->setText(QString());
        card4Label->setText(QString());
        card5Label->setText(QString());
        card6Label->setText(QString());
        card7Label->setText(QString());
        card8Label->setText(QString());
        card9Label->setText(QString());
        card10Label->setText(QString());
        card1Label_2->setText(QString());
        card2Label_2->setText(QString());
        card3Label_2->setText(QString());
        card4Label_2->setText(QString());
        card5Label_2->setText(QString());
        card6Label_2->setText(QString());
        card7Label_2->setText(QString());
        card8Label_2->setText(QString());
        card9Label_2->setText(QString());
        card10Label_2->setText(QString());
        menuQuit->setTitle(QApplication::translate("PlayWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlayWindow: public Ui_PlayWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYWINDOW_H
