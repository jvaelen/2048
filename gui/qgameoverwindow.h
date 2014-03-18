#ifndef QGAMEOVERWINDOW_H
#define QGAMEOVERWINDOW_H

#include <QWidget>

class QResetButton;

class QGameOverWindow : public QWidget
{
    Q_OBJECT
public:
    explicit QGameOverWindow(QWidget *parent = 0);

    QResetButton* getResetBtn() const;

signals:

public slots:

private:
    QResetButton* reset;

};

#endif // QGAMEOVERWINDOW_H
