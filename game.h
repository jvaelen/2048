#ifndef GAME_H
#define GAME_H

#include "board.h"

class Game
{
public:
    Game();
    void restart();

private:
    Board* board;

};

#endif // GAME_H
