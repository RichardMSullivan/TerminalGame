#include "player.h"

#include <string>
#include <iostream>
//creates player object 
Player::Player()
{
    //asks for name and sets player name to the name entered
    std::cout<< "input name -> ";
    std::cin>> this-> name;
    //prints name to the console
    std::cout<< "welcome " << this-> name <<std::endl;
    //player moves stored in matrix, sets matrix to the following:
    //    i0  i1  i2
    //j0  1,  0,  0,
    //j1  0,  1,  0,
    //j2  0,  0,  0,
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j)
            {
                this-> moves[i][j] = 1;
            }
            else
            {
                this -> moves[i][j] = 0;
            }
        }

    }

}

// prints the player name
void Player::displayName()
{
    std::cout<< this-> name <<std::endl;
}

//prints the players moves in 3x3 matrix
void Player::printMoves()
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cout<< this -> moves[i][j];
        }
        std::cout<<std::endl;
    }

}

//asks the player to make their move
void Player::makeMove()
{
    std::cout<<"make your move, or type help for more instructions -> "<<std::endl;

}
//outputs an array of the players moves
int* Player::getMove()
{
    return *(this-> moves);
}
