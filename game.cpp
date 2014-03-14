#include "game.h"

Game::Game()
{
    board = new Board(5);
    board->reset();
}
