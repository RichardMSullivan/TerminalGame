#include <iostream>
#include "player.h"
#include "board.h"

int main()
{   
    //initialize board &
    //create board object
    Board board;
    //initialize player &
    //create player object
    Player player;

    //show instructions
    board.showInstructions();

    //show board state
    board.displayBoard();
    
    //print player's moves in 3x3 matrix
    player.printMoves();

    //player makes a move
    //board looks at player moves and updates all moves on board
    //displays the board
    bool playing = true;
    while(playing)
    {
        
        player.makeMove(board.getCounter());
        board.updateBoard(player.getMove());
        board.displayBoard();
        board.showCounter();
        if(board.checkBoardState() < 2)
        {
            playing = false;
        }
        board.incramentCounter();
    }
    board.showWinner(board.checkBoardState());

    return 0;
}
