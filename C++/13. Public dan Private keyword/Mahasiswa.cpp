

#include "Mahasiswa.hpp"
#include <iostream>

Mahasiswa::Mahasiswa(const char *nama)
{
    this->namaPublic = nama;
    this->namaPrivate = nama;
}

void Mahasiswa::showDisplay()
{
    std::cout << "Nama Mahasiswa : " << this->namaPrivate << std::endl;
}
