/********************************************************************************
** Form generated from reading UI file 'setwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETWINDOW_H
#define UI_SETWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_3;
    QRadioButton *type1;
    QRadioButton *type2;
    QRadioButton *type3;
    QRadioButton *type4;
    QGroupBox *groupBox_4;
    QRadioButton *pay1;
    QRadioButton *pay2;
    QRadioButton *pay3;
    QGroupBox *groupBox_5;
    QRadioButton *card1;
    QRadioButton *card2;
    QRadioButton *card3;
    QPushButton *startButton;
    QWidget *widget;
    QGroupBox *groupBox;
    QRadioButton *playernumber_1;
    QRadioButton *playernumber_2;
    QRadioButton *playernumber_3;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SetWindow)
    {
        if (SetWindow->objectName().isEmpty())
            SetWindow->setObjectName(QStringLiteral("SetWindow"));
        SetWindow->resize(706, 623);
        SetWindow->setMinimumSize(QSize(706, 623));
        SetWindow->setSizeIncrement(QSize(706, 623));
        centralwidget = new QWidget(SetWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(110, 140, 421, 81));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 30, 291, 21));
        lineEdit->raise();
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(110, 240, 421, 80));
        type1 = new QRadioButton(groupBox_3);
        type1->setObjectName(QStringLiteral("type1"));
        type1->setGeometry(QRect(10, 30, 115, 19));
        type2 = new QRadioButton(groupBox_3);
        type2->setObjectName(QStringLiteral("type2"));
        type2->setGeometry(QRect(130, 30, 115, 19));
        type3 = new QRadioButton(groupBox_3);
        type3->setObjectName(QStringLiteral("type3"));
        type3->setGeometry(QRect(220, 30, 115, 19));
        type4 = new QRadioButton(groupBox_3);
        type4->setObjectName(QStringLiteral("type4"));
        type4->setGeometry(QRect(320, 30, 115, 19));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(110, 350, 421, 80));
        pay1 = new QRadioButton(groupBox_4);
        pay1->setObjectName(QStringLiteral("pay1"));
        pay1->setGeometry(QRect(10, 30, 115, 19));
        pay2 = new QRadioButton(groupBox_4);
        pay2->setObjectName(QStringLiteral("pay2"));
        pay2->setGeometry(QRect(150, 30, 115, 19));
        pay3 = new QRadioButton(groupBox_4);
        pay3->setObjectName(QStringLiteral("pay3"));
        pay3->setGeometry(QRect(280, 30, 115, 19));
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(110, 440, 431, 80));
        card1 = new QRadioButton(groupBox_5);
        card1->setObjectName(QStringLiteral("card1"));
        card1->setGeometry(QRect(40, 30, 115, 19));
        card2 = new QRadioButton(groupBox_5);
        card2->setObjectName(QStringLiteral("card2"));
        card2->setGeometry(QRect(170, 30, 115, 19));
        card3 = new QRadioButton(groupBox_5);
        card3->setObjectName(QStringLiteral("card3"));
        card3->setGeometry(QRect(310, 30, 115, 19));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(180, 530, 251, 28));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 30, 531, 101));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 10, 421, 80));
        playernumber_1 = new QRadioButton(groupBox);
        playernumber_1->setObjectName(QStringLiteral("playernumber_1"));
        playernumber_1->setGeometry(QRect(50, 30, 115, 19));
        playernumber_2 = new QRadioButton(groupBox);
        playernumber_2->setObjectName(QStringLiteral("playernumber_2"));
        playernumber_2->setGeometry(QRect(170, 30, 115, 19));
        playernumber_3 = new QRadioButton(groupBox);
        playernumber_3->setObjectName(QStringLiteral("playernumber_3"));
        playernumber_3->setGeometry(QRect(290, 30, 115, 19));
        playernumber_1->raise();
        playernumber_2->raise();
        playernumber_3->raise();
        widget->raise();
        groupBox->raise();
        groupBox->raise();
        SetWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SetWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 706, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        SetWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SetWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SetWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(SetWindow);

        QMetaObject::connectSlotsByName(SetWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SetWindow)
    {
        SetWindow->setWindowTitle(QApplication::translate("SetWindow", "MainWindow", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("SetWindow", "\345\210\235\345\247\213\350\265\204\351\207\221", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("SetWindow", "\345\270\201\347\247\215", Q_NULLPTR));
        type1->setText(QApplication::translate("SetWindow", "\344\272\272\346\260\221\345\270\201", Q_NULLPTR));
        type2->setText(QApplication::translate("SetWindow", "\347\276\216\345\205\203", Q_NULLPTR));
        type3->setText(QApplication::translate("SetWindow", "\346\254\247\345\205\203", Q_NULLPTR));
        type4->setText(QApplication::translate("SetWindow", "\350\213\261\351\225\221", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("SetWindow", "\346\224\257\344\273\230\346\226\271\345\274\217", Q_NULLPTR));
        pay1->setText(QApplication::translate("SetWindow", "\346\224\257\344\273\230\345\256\235", Q_NULLPTR));
        pay2->setText(QApplication::translate("SetWindow", "\345\276\256\344\277\241", Q_NULLPTR));
        pay3->setText(QApplication::translate("SetWindow", "\351\223\266\350\241\214\345\215\241", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("SetWindow", "\347\211\214\346\225\260", Q_NULLPTR));
        card1->setText(QApplication::translate("SetWindow", "1", Q_NULLPTR));
        card2->setText(QApplication::translate("SetWindow", "2", Q_NULLPTR));
        card3->setText(QApplication::translate("SetWindow", "3", Q_NULLPTR));
        startButton->setText(QApplication::translate("SetWindow", "\350\277\233\345\205\245\346\270\270\346\210\217", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SetWindow", "\347\216\251\345\256\266\344\272\272\346\225\260", Q_NULLPTR));
        playernumber_1->setText(QApplication::translate("SetWindow", "1", Q_NULLPTR));
        playernumber_2->setText(QApplication::translate("SetWindow", "2", Q_NULLPTR));
        playernumber_3->setText(QApplication::translate("SetWindow", "3", Q_NULLPTR));
        menu->setTitle(QApplication::translate("SetWindow", "\346\270\270\346\210\217\350\256\276\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SetWindow: public Ui_SetWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETWINDOW_H
