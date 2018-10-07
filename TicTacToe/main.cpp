#include <iostream>
#include "player.h"
#include "board.h"

int main()
{   
    //show instructions
    showInstructions();
    //create player object
    Player player;
    //display player name
    player.displayName();
    
    //show board state
    displayBoard();
    
    //print player's moves in 3x3 matrix
    player.printMoves();

    for(int i=0;i<9;i++)
    {
        player.makeMove();
        player.printMoves();
    }

    int*  memAddress = player.getMove();

    std::cout<< memAddress <<std::endl;
    std::cout<< *memAddress <<std::endl;

    return 0;
}
