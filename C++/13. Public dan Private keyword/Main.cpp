#include <iostream>
#include <string>

#include "Mahasiswa.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Mahasiswa *mahasiswa1 = new Mahasiswa("ucup");
    // akses
    cout << mahasiswa1->namaPublic << endl;
    // cout << mahasiswa1->namaPrivate << endl;
    Mahasiswa *mahasiswa2 = new Mahasiswa("Lala");
    mahasiswa2->showDisplay();
    return 0;
}
