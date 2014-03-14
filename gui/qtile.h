#ifndef QTILE_H
#define QTILE_H

#include <QLabel>

class Tile;

class QTile : public QLabel
{
    Q_OBJECT
public:
    QTile(const QString & text);
    QTile(Tile* tile);

    void draw();
private:
    Tile* tile;

signals:

public slots:

};

#endif // QTILE_H
