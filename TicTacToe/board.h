#ifndef BOARD_H
#define BOARD_H

class Board
{
    private:
    //variables
    int boardState[3][3];
    int moveCounter;

    public:
    //init method
    Board();

    //message methods
    void showInstructions();
    void showCounter();
    void showWinner(int winner);
    //counter methods
    void incramentCounter();
    int getCounter();

    //board methods
    void displayBoard();
    void updateBoard(int* array);
    int checkBoardState();
};
#endif
