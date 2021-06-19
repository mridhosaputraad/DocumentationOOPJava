#include "myclass/Penjual.h"
#include <iostream>

std::string Penjual::user()
{
    return "ini Penjual";
}

Penjual::Penjual(std::string nama, std::string gender, int umur, int lamaKerjaPerTahun) : User(nama, gender, umur)
{
    this->lamaKerjaPerTahun = lamaKerjaPerTahun;
}

void Penjual::infoPenjual()
{
    User::infoUser();
    std::cout << " tahun, Lama Kerja : " << lamaKerjaPerTahun << " Tahun" << std::endl;
}

void Penjual::setLamaKerjaPerTahun(int waktu)
{
    this->lamaKerjaPerTahun = waktu;
}

int Penjual::getLamaKerjaPerTahun()
{
    return this->lamaKerjaPerTahun;
}