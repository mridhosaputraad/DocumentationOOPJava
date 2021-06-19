#include "myclass/Transaksi.h"
#include <iostream>
#include <string>

Transaksi::Transaksi(Penjual *penjual, Pembeli *pembeli, Barang *barang)
{
    std::cout << "Penjual : " << penjual->getNama() << ", Pembeli : " << pembeli->getNama() << ", Barang : " << barang->getNamaBarang() << ". Tipe Barang : " << barang->Display() << "\n"
              << std::endl;
    int stokBaru = barang->getStokBarang() - 1;
    barang->setStokBarang(stokBaru);
}
