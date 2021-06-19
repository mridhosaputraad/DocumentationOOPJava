#include <iostream>
#include <string>

#include "myclass/User.h"
#include "myclass/Penjual.h"
#include "myclass/Pembeli.h"
#include "myclass/Keyboard.h"
#include "myclass/Processor.h"
#include "myclass/Transaksi.h"

using namespace std;

int main()
{
    Keyboard keyboard1("Vortex Series VX 7", 1000000, 97, "RGB", 87, "Blue");
    keyboard1.infoBarang();

    Processor processpr1("AMD Rayzen", 3000000, 21, 3.6, 4.2);
    processpr1.infoBarang();

    Penjual penjual1("Mikhiy", "Laki-laki", 43, 2);
    penjual1.infoPenjual();

    Pembeli pembeli1("Siti", "Perempuan", "08748394", "Jakarta", 21);
    pembeli1.infoPembeli();

    Transaksi trs1(&penjual1, &pembeli1, &keyboard1);
    cout << keyboard1.getStokBarang();
}