#ifndef BOARD_H
#define BOARD_H

#include "subject.h"

#include <QVector>
#include <QString>

class Tile;

enum Direction { UP, DOWN, LEFT, RIGHT };

class Board : public Subject
{
public:

    Board(int dimension);
    Board(const Board& other);
    // destroy board
    ~Board();
    // put the board in start state (everything empty except for two 2 tiles)
    void reset();
    Tile* getTile(int i, int j);
    int getDimension() const { return dimension; }
    void move(Direction direction);

private:
    QVector<QVector<Tile*> > board;
    int dimension;

    // create an empty board
    void init();
    // generate a random, free position on the board
    QVector<int> freePosition();
    // returns true if the current state of the board is different from the argument
    bool changed(Board& other);

    // true if the board is filled with tiles
    bool full();
    bool inbounds(int i, int j);
    bool moveHorizontally(int i, int j, Direction dir);
    bool moveVertically(int i, int j, Direction dir);
};

#endif // BOARD_H
