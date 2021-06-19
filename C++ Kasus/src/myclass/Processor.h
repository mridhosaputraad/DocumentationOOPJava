#ifndef __PROCESSOR
#define __PROCESSOR

#include "Barang.h"

class Processor : public Barang
{
private:
    float frekuensiDasar, turboBoost;

public:
    virtual std::string Display();

    Processor(std::string, int, int, float, float);

    void infoBarang();

    void setFrekuensiDasar(float frekuensiDasar);
    void setTurboBoost(float turboBoost);

    float getFrekuensiDasar();
    float getTurboBoost();
};

#endif