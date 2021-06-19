#ifndef __TRANSAKSI
#define __TRANSAKSI

#include "Barang.h"
#include "Pembeli.h"
#include "Penjual.h"

#include <string>

class Transaksi
{
public:
    Transaksi(Penjual *, Pembeli *, Barang *);
};

#endif