#ifndef TILE_H
#define TILE_H

#define EXP_MULTIPLIER 2

class Tile
{
public:
    Tile() { value = 2; upgratedThisMove = false; }
    Tile(const Tile& other) { this->value = other.value; }
    Tile(int value) { this->value = value; }
    int getValue() { return value; }
    void upgrade() { value *= EXP_MULTIPLIER; }
    void setUpgratedThisMove(bool updated) { this->upgratedThisMove = updated; }
    bool getUpgratedThisMove() const { return this->upgratedThisMove; }

private:
    int value;
    bool upgratedThisMove;
};

#endif // TILE_H
