#include <iostream>
#include "player.h"
#include "board.h"

int main()
{   
    //initialize board
    Board board;
    //create player object
    Player player;

    //show instructions
    board.showInstructions();

    //show board state
    board.displayBoard();
    
    //print player's moves in 3x3 matrix
    player.printMoves();

    for(int i=0;i<9;i++)
    {
        player.makeMove();
        board.updateBoard(player.getMove());
        board.displayBoard();
    }


    return 0;
}
