#ifndef __PEMBELI
#define __PEMBELI

#include "User.h"
#include <string>

class Pembeli : public User
{

private:
    std::string noTelpPembeli, alamatPembeli;

public:
    virtual std::string user();

    Pembeli(std::string, std::string, std::string, std::string, int);

    void infoPembeli();

    void setNoTelpPembeli(std::string noTelp);
    void setAlamatPembeli(std::string alamat);

    std::string getNoTelpPembeli();
    std::string getAlamatPembeli();
};

#endif