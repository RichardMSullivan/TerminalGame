#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
    private:
    
    std::string name;
    int moves[3][3];
    char move;
    
    public:

    Player();
    void displayName();
    void printMoves();
    void makeMove();
    int* getMove();
};

#endif
