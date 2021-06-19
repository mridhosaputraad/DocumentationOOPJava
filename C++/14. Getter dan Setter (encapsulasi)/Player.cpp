#include <iostream>
#include <string>
#include "Player.hpp"

Player::Player(const char *name)
{
    this->name = name;
    this->power = 100;
    this->level = 1;
    this->exp = 0;
}

// getter artinya akan membuat attribute menjadi read only
std::string Player::getName()
{
    return this->name;
}

// setter untuk write data ke class
void Player::increaseExp(int expValue)
{
    int maxExp = 100;
    std::cout << "Mendapatkan exp = " << expValue << std::endl;
    this->exp += expValue;
    if (this->exp >= maxExp)
    {
        this->level++;
        this->power += 100;
        std::cout << "Level Up" << std::endl;
        this->exp = 0;
    }
}

void Player::display()
{
    std::cout << "Name\t" << this->name << std::endl;
    std::cout << "Level\t" << this->level << ", Exp : " << this->exp << std::endl;
    std::cout << "Power\t" << this->power << std::endl;
}