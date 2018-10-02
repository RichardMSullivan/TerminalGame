#include <iostream>
#include <string>

//converts a string to an interger.
int stringToNum(std::string string)
{

    int len = string.size();

    for(int i=0; i < len; i++)
    {
        std::cout << string[i];
    }

    std::cout << std::endl;

    return 0;
}

