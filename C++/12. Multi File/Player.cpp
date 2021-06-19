#include <iostream>
#include "Player.h"

// penjabaran method
Player::Player(const char *name)
{
    // Player::name = name; atau
    this->name;
};

void Player::display()
{
    std::cout << "Nama Player: " << this->name << std::endl;
    std::cout << "Class ini berada di file terpisah " << std::endl;
}

std::string Player::getName()
{
    return this->name;
}

void Player::setName(const char *name)
{

    this->name = name;
}