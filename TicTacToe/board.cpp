#include <iostream>
#include "board.h"


Board::Board()
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           this -> boardState[i][j] = 0;
        }
    }
    this -> moveCounter = 0;
}

void Board::showInstructions()
{
    std::cout<< "welcome to tic-tac-toe!"<<std::endl;
    std::cout<< "use the  { q, w, e }  keys to input your move" << std::endl;
    std::cout<< "         { a, s, d }                         " << std::endl;
    std::cout<< "         { z, x, c }                         " << std::endl;
}

void Board::incramentCounter()
{
    (this -> moveCounter)++;

}

void Board::displayBoard()
{
    std::cout<<"board"<<std::endl;
}

void Board::updateBoard()
{
    std::cout<<"board updated"<<std::endl;
}
