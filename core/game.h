#ifndef GAME_H
#define GAME_H

#define WINNING_VALUE 2048

#include "core/subject.h"
#include "core/board.h"

class Board;

class Game : public Subject
{
public:
    Game(int dimension);
    ~Game();
    void restart();
    bool isGameOver() const { return gameOver; }
    Board* getGameBoard() const { return board; }
    void move(Direction dir);
    // returns true if the game is in the win state,
    // (i.e. there is a tile that has the value as defined in WINNING_VALUE)
    bool won() const;
    int getScore() const { return score; }

private:
    Board* board;
    bool gameOver;
    int score;

};

#endif // GAME_H
