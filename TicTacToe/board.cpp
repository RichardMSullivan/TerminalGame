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

void Board::showCounter()
{
   std::cout<< this -> moveCounter <<std::endl;
}

void Board::showWinner(int winner)
{
    if(winner == 1)
    {
        std::cout<<"the winner is X's!"<<std::endl;
    }
    else if(winner == -1)
    {
        std::cout<<"the winner is O's!"<<std::endl;
    }
    else if(winner == 0)
    {
        std::cout<<"cat's game!"<<std::endl;
    }
    else
    {
        std::cout<<"nobody has won yet!"<<std::endl;
    }
}

void Board::incramentCounter()
{
    (this -> moveCounter)++;

}

int Board::getCounter()
{
    return (this -> moveCounter);

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
            if (*((array)+ (j + 3*i)) == -1)
            {
                this -> boardState[i][j] = -1;
            }
        }
    }

}
//checks if anyone has won or draw
int Board::checkBoardState()
{
    //variables
    //if winner = 0 noone has won
    //if winner = 1 player1 has won
    //if winner = -1 player2 has won
    int winner = 0;
    //unused moves = to num of 0s in matrix
    int unusedMoves=1;

    int total=0;

    //check horizontal values
    if(winner==0)
    {
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                total += (this -> boardState[i][j]);
            }
            if (total == 3)
            {
                winner = 1;
            }
            else if(total == -3)
            {
                winner = -1;
            }
            else
            {
                total = 0;
            }
        
            if (winner !=0)
            {
                return winner;
            }
        }
    }
    //check vertical values
    if(winner==0)
    {
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                total += (this -> boardState[j][i]);
            }
            if (total == 3)
            {
                winner = 1;
            }
            else if(total == -3)
            {
                winner = -1;
            }
            else
            {
                total = 0;
            }
        
            if (winner != 0)
            {
                return winner;
            }
        }


    }
    //check diagonal values
    if(winner==0)
    {
        for(int k =0; k<2; k++){
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    //check diagonal from top right to bottom left
                    if(k==0)
                    {
                        if (i+j == 2)
                        {
                            total += (this -> boardState[i][j]);
                        }
                    }
                    //check diagonal from top left to bottom right
                    if(k==1)
                    {
                        if(i == j)
                        {
                            total += (this -> boardState[i][j]);
                        }
                    }
                }
            }
            if (total == 3)
            {
                winner = 1;
            }
            else if (total == -3)
            {
                winner = -1;
            }
            else
            {
                total = 0;
            }

            if(winner !=0)
            {
                return winner;
            }
        }
    }

    //check for unused moves
    if(winner==0)
    {
        unusedMoves =0;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if ((this-> boardState[i][j]) == 0)
                {
                    unusedMoves++;
                }
            }
        }
    }

    //if no win and no unused moves output draw
    if((winner==0) && (unusedMoves == 0))
    {
        return 0;
    }
    //default is 2

    return 2;
}


