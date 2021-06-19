#ifndef __MAHASISWA
#define __MAHASISWA

#include <string>

class Mahasiswa
{
    // Attribute
public:
    std::string namaPublic;

private:
    std::string namaPrivate;

    // Method
public:
    Mahasiswa(const char *nama);

    void showDisplay();
};

#endif