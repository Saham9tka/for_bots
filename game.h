#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game();
    Game(int _money, int _turnNumber);
    int money;
    int turnNumber;

    Game operator = (Game* _game)
    {
        money=_game->money;
        turnNumber=_game->turnNumber;
        return *this;
    }
};

#endif // GAME_H
