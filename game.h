#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game();
    Game(int players, int _turnNumber);
    int turnNumber;
    int players;

    Game operator = (Game* _game)
    {
        players = _game->players;
        turnNumber=_game->turnNumber;
        return *this;
    }
};

#endif // GAME_H
