#include "myclass/Processor.h"
#include <iostream>

std::string Processor::Display()
{
    return "ini Processor";
}

Processor::Processor(std::string inputNama, int inputHarga, int inputStok, float frekuensiDasar, float turboBoost) : Barang(inputNama, inputHarga, inputStok)
{
    this->frekuensiDasar = frekuensiDasar;
    this->turboBoost = turboBoost;
}

void Processor::infoBarang()
{
    Barang::infoBarang();
    std::cout << " pcs., Frekuensi Dasar : " << this->frekuensiDasar << ", Turbo Boost : " << this->turboBoost << "\n"
              << std::endl;
}

void Processor::setFrekuensiDasar(float frekuensiDasar)
{
    this->frekuensiDasar = frekuensiDasar;
}

void Processor::setTurboBoost(float turboBoost)
{
    this->turboBoost = turboBoost;
}

float Processor::getFrekuensiDasar()
{
    return this->frekuensiDasar;
}

float Processor::getTurboBoost()
{
    return this->turboBoost;
}