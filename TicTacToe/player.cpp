#include "player.h"

#include <string>
#include <iostream>

Player::Player()
{
    std::cout<< "input name -> ";
    std::cin>> this-> name;
    std::cout<< "welcome " << this-> name <<std::endl;
}

void Player::displayName()
{
    std::cout<< this-> name <<std::endl;
}

