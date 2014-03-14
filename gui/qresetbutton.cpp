#include "qresetbutton.h"

QResetButton::QResetButton( QWidget* parent) : QLabel(parent)
{
    setText("Try again!");
    setAlignment(Qt::AlignCenter);
    setStyleSheet("QResetButton { background-color: rgb(143,122,102); border-radius: 10px; }");
}

void QResetButton::mousePressEvent(QMouseEvent* event)
{
    emit clicked();
}
