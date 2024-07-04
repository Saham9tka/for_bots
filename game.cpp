#include "game.h"

Game::Game() {
    turnNumber=1;
}

Game::Game(int _players, int _turnNumber) {
    players = _players;
    turnNumber=_turnNumber;
}
