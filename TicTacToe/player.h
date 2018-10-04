#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
    private:

    std::string name;
    int moves[3][3];

    public:

    Player();
    void displayName();
};

#endif
