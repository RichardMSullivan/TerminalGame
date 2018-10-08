#include <iostream>
#include <array>
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
    std::cout<< "   |   |   " <<std::endl;
    std::cout<<" "<<boardState[0][0] <<" | "<<boardState[0][1]<<" | "<<boardState[0][2]<<std::endl;
    std::cout<< "---+---+---" <<std::endl;
    std::cout<<" "<<boardState[1][0] <<" | "<<boardState[1][1]<<" | "<<boardState[1][2]<<std::endl;
    std::cout<< "---+---+---" <<std::endl;
    std::cout<<" "<<boardState[2][0] <<" | "<<boardState[2][1]<<" | "<<boardState[2][2]<<std::endl;
    std::cout<< "   |   |  " <<std::endl;
}

void Board::updateBoard(int* array)
{
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (*((array) + (j + 3*i)) == 1)
            {
               this -> boardState[i][j] = 1;
            }

        }
    }

}


