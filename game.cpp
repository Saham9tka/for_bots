#include "game.h"

Game::Game() {
    turnNumber=1;
}

Game::Game(int _players, int _turnNumber, std::string _login) {
    players = _players;
    turnNumber=_turnNumber;
    login=_login;
}
