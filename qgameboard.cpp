#include "qgameboard.h"
#include "board.h"
#include "qtile.h"
#include "tile.h"
#include "qresetbutton.h"

#include <QVBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QKeyEvent>
#include <QDebug>

QGameBoard::QGameBoard(QWidget *parent) :
    QWidget(parent)
{
    // set default size
    resize(650,450);

    boardLayout = NULL;

    // create the board and register as observer
    board = new Board(4);
    board->reset();
//    board->test();
    board->registerObserver(this);

    // create the gui board and draw it
    gui_board.resize(board->getDimension());
    for (int i = 0; i < board->getDimension(); ++i)
        gui_board[i].resize(board->getDimension());
    for (int i = 0; i < board->getDimension(); ++i)
        for (int j = 0; j < board->getDimension(); ++j)
            gui_board[i][j] = NULL;

    draw();

    // style sheet of the board
    setStyleSheet("QGameBoard { background-color: rgb(187,173,160) }");
}

void QGameBoard::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Up:
        board->move(UP);
        break;
    case Qt::Key_Left:
        board->move(LEFT);
        break;
    case Qt::Key_Right:
        board->move(RIGHT);
        break;
    case Qt::Key_Down:
        board->move(DOWN);
        break;
    }
}

void QGameBoard::notify()
{
    draw();
}

void QGameBoard::draw()
{
    delete boardLayout;
    boardLayout = new QGridLayout(this);
    for (int i = 0; i < board->getDimension(); ++i) {
        for (int j = 0; j < board->getDimension(); ++j) {
            delete gui_board[i][j];
            gui_board[i][j] = new QTile(board->getTile(i,j));
            boardLayout->addWidget(gui_board[i][j], i, j);
            gui_board[i][j]->draw();
        }
    }
}
