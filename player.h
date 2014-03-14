#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
    Player();
    void setScore(int score) { this->score = score; }
    int getScore() { return score; }

private:
    int score;

};

#endif // PLAYER_H
