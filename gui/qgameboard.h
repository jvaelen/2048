#ifndef QGAMEBOARD_H
#define QGAMEBOARD_H

#include "observer.h"

#include <QVector>
#include <QWidget>

class QResetButton;
class Game;
class QKeyEvent;
class QTile;
class QGridLayout;

class QGameBoard : public QWidget, public Observer
{
    Q_OBJECT
public:
    explicit QGameBoard(QWidget *parent = 0);

    void notify();

private:

    Game* game;
    // gui representation of board
    QVector<QVector<QTile*> > gui_board;
    // grid layout of board
    QGridLayout *boardLayout;
    QResetButton* reset;

    void drawBoard();

protected:
    void keyPressEvent(QKeyEvent *event);

signals:

public slots:

};

#endif // QGAMEBOARD_H
