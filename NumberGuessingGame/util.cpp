#include <iostream>
#include <string>

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
