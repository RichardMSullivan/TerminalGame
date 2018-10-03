#include <iostream>
#include <string>
#include <random>
//converts a string to an interger.
int checkInRange(int guess, int MIN, int MAX)
{

    if(MIN<= guess && guess <= MAX)
    {
        return true;
    }
    else
    {
    return false;
    }

}

int strToNum(std::string string)
{
    int num = stoi(string);

    return num;
}

int randomNum( int MIN, int MAX )
{
    std::random_device rd;
    std::mt19937 rng( rd() );
    std::uniform_int_distribution<int> dist( MIN,MAX );
    int num = dist( rng );
    return num;    
}
