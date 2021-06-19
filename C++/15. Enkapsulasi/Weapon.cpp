#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon(const char *name, double power)
{
    this->name = name;
    this->power = power;
}
void Weapon::display()
{
    std::cout << "Weapon " << this->name << std::endl;
    std::cout << "Power = " << this->power << std::endl;
}

std::string Weapon::getName()
{
    return this->name;
}
