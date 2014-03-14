#include "mainwindow.h"
#include <QApplication>

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "board.h"
#include "qgameboard.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
 //   MainWindow w;
//    w.show();

    srand(time(NULL));
    QGameBoard board;
    board.show();

    return a.exec();
}
