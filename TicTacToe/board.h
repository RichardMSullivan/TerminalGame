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

    //counter methods
    void incramentCounter();

    //board methods
    void displayBoard();
    void updateBoard(int* array);

};
#endif
