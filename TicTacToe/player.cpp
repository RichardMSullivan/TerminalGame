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
            this -> moves[i][j] = 0;

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
//then stores the move they made in moves
void Player::makeMove(int turnNum)
{
    std::cout<<"make your move, or type help for more instructions -> "<<std::endl;

    std::cin>> move;
    
    int XorO = turnNum % 2;
    

    if(XorO == 0)
    {
        XorO = 1;
    }
    else
    {
        XorO = -1;
    }
    switch(move)
    {
        case 'q':
        this -> moves[0][0] = XorO;
        break;
        
        case 'w':
        this -> moves[0][1] = XorO;
        break;
        
        case 'e':
        this -> moves[0][2] = XorO;
        break;
        
        case 'a':
        this -> moves[1][0] = XorO;
        break;
        
        case 's':
        this -> moves[1][1] = XorO;
        break;
        
        case 'd':
        this -> moves[1][2] = XorO;
        break;
        
        case 'z':
        this -> moves[2][0] = XorO;
        break;
        
        case 'x':
        this -> moves[2][1] = XorO;
        break;
        
        case 'c':
        this -> moves[2][2] = XorO;
        break;
        
        default:
        std::cout<<"use  q,w,e  to make your move" << std::endl;
        std::cout<<"     a,s,d" << std::endl;
        std::cout<<"     z,x,c" << std::endl;
        break;

    }

}

//outputs an array of the players moves
int* Player::getMove()
{
    return *(this-> moves);
}



