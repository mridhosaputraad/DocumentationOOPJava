#include "myclass/User.h"
#include <iostream>
#include <string>

User::User(std::string nama, std::string gender, int umur)
{
    this->nama = nama;
    this->gender = gender;
    this->umur = umur;
}

void User::infoUser()
{
    std::cout << "Nama User : " << this->nama << ", Jenis Kelamin : " << this->gender << ", Umur User : " << this->umur;
}

void User::setNama(std::string nama)
{
    this->nama = nama;
}

void User::setGender(std::string gender)
{
    this->gender = gender;
}

void User::setUmur(int umur)
{
    this->umur = umur;
}

std::string User::getNama()
{
    return this->nama;
}

std::string User::getGender()
{
    return this->gender;
}

int User::getUmur()
{
    return this->umur;
}