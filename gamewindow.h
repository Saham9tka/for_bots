#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QWidget>
#include "game.h"

namespace Ui {
class GameWindow;
}

class GameWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GameWindow(Game* _gameState, QWidget *parent = nullptr);
    ~GameWindow();

private slots:
    void on_nextTurnButton_clicked();

    void on_giveUpButton_clicked();

private:
    Ui::GameWindow *ui;
    Game gameState;
};

#endif // GAMEWINDOW_H
