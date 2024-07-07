#ifndef GAME_H
#define GAME_H
#include <string>
class Game
{
public:
    Game();
    Game(int players, int _turnNumber,std::string _login);
    int turnNumber;
    int players;
    std::string login;
    Game operator = (Game* _game)
    {
        players = _game->players;
        turnNumber=_game->turnNumber;
        login=_game->login;
        return *this;
    }
};

#endif // GAME_H
