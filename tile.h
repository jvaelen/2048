#ifndef TILE_H
#define TILE_H

#define EXP_MULTIPLIER 2

class Tile
{
public:
    Tile() { value = 2; }
    Tile(const Tile& other) { this->value = other.value; }
    Tile(int value) { this->value = value; }
    int getValue() { return value; }
    void upgrade() { value *= EXP_MULTIPLIER; }

private:
    int value;
};

#endif // TILE_H
