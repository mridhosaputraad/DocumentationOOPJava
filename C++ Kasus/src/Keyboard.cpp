#include "myclass/Keyboard.h"
#include <iostream>
#include <string>

std::string Keyboard::Display()
{
    return "ini keyboard";
}

Keyboard::Keyboard(std::string inputNama, int inputHarga, int inputStok, std::string backlight, int banyakKey, std::string tipeSwitch) : Barang(inputNama, inputHarga, inputStok)
{

    this->backlight = backlight;
    this->banyakKey = banyakKey;
    this->tipeSwitch = tipeSwitch;
}

void Keyboard::infoBarang()
{
    Barang::infoBarang();
    std::cout << " pcs., Backlight : " << this->backlight << ", Banyak Keys : " << this->banyakKey << ", Tipe Switch : " << this->tipeSwitch << "\n"
              << std::endl;
}

void Keyboard::setBacklight(std::string backlight)
{
    this->backlight = backlight;
}

void Keyboard::setBanyakKey(int banyakKey)
{
    this->banyakKey = banyakKey;
}

void Keyboard::setTipeSwitch(std::string tipeSwitch)
{
    this->tipeSwitch = tipeSwitch;
}

std::string Keyboard::getBacklight()
{
    return this->backlight;
}

int Keyboard::getBanyakKey()
{
    return this->banyakKey;
}

std::string Keyboard::getTipeSwitch()
{
    return this->tipeSwitch;
}
