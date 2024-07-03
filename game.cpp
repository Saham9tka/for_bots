#include "game.h"

Game::Game() {
    money=10000;
    turnNumber=1;
}

Game::Game(int _money, int _turnNumber) {
    money=_money;
    turnNumber=_turnNumber;
}
