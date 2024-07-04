#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QWidget>
#include "game.h"
#include "Bank.h"
namespace Ui {
class GameWindow;
}

class GameWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GameWindow(Game* _gameState, QWidget *parent = nullptr);
    GameWindow(Bank* _bank,Game* _gameState){
        gameState = _gameState;
        bank = _bank;
    }
    ~GameWindow();

private slots:
    void on_nextTurnButton_clicked();

    void on_giveUpButton_clicked();

    void displayBankStates();

    void displayPlayerStates(std::string playerStateString);

private:
    Bank *bank;
    Ui::GameWindow *ui;
    Game gameState;
};

#endif // GAMEWINDOW_H
