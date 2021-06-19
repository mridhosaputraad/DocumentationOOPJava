#ifndef __PENJUAL
#define __PENJUAL

#include "User.h"
#include <string>

class Penjual : public User
{
private:
    virtual std::string user();

    int lamaKerjaPerTahun;

public:
    Penjual(std::string, std::string, int, int);

    void infoPenjual();

    void setLamaKerjaPerTahun(int waktu);

    int getLamaKerjaPerTahun();
};

#endif