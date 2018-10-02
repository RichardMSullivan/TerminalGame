#include <iostream>
#include "util.h"

//global constants
const int MIN = 0;
const int MAX = 10;
const int TRYS = 3;
//main function
int main()
{

    std::cout << "I am thinking of a number between " << MIN << " and " << MAX << std::endl;
    int guessNum;
    std::string guessStr;
    bool acceptableInput = true;
    while(true)
    {
        int trys = TRYS;
        int target = 5;

        while (trys)
        {
            do
            {
                if(acceptableInput == true)
                {
                    std::cout << "what is your guesss?";
                }
                else
                {
                    std::cout<< "invalid input, try again!";
                }

                try
                {
                    std::cin >> guessStr;
                    guessNum = strToNum(guessStr);
                    acceptableInput = checkInRange(guessNum,MIN,MAX);
                }
                catch(...)
                {
                    acceptableInput = false;
                }

            }while(acceptableInput == false);

            std::cout << std::endl;
            trys --;

            if(trys > 0)
            {
                if(guessNum == target)
                {
                    std::cout<<"correct!"<<std::endl;
                    break;
                }
                else if(guessNum > target)
                {
                    std::cout<<"guess a lower number"<< std::endl;
                }
                else
                {
                    std::cout <<"guess a higher number" <<std::endl;
                }
                
            }

            std::cout<<"you have "<<trys<<" guesses left!"<<std::endl;
        }

        std::cout << " do you want to play again? ";
        std::cin >> guessStr;

        if (guessStr == "no")
        {
            break;
        }

    }

    return 0;

}
