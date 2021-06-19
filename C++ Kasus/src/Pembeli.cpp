#include "myclass/Pembeli.h"
#include <iostream>

std::string Pembeli::user()
{
    return "ini pembeli";
}

Pembeli::Pembeli(std::string nama, std::string gender, std::string noTelp, std::string alamat, int umur) : User(nama, gender, umur)
{
    this->noTelpPembeli = noTelp;
    this->alamatPembeli = alamat;
}

void Pembeli::infoPembeli()
{
    User::infoUser();
    std::cout << " tahun, Alamat : " << this->alamatPembeli << ", NoTelp : " << this->noTelpPembeli << std::endl;
}

void Pembeli::setNoTelpPembeli(std::string noTelp)
{
    this->noTelpPembeli = noTelp;
}

void Pembeli::setAlamatPembeli(std::string alamat)
{
    this->alamatPembeli = alamat;
}

std::string Pembeli::getNoTelpPembeli()
{
    return this->noTelpPembeli;
}

std::string Pembeli::getAlamatPembeli()
{
    return this->alamatPembeli;
}
