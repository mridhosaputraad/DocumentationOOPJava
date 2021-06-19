#ifndef __BARANG
#define __BARANG

#include <string>

class Barang
{
    // property/attribute
private:
    std::string namaBarang;
    int hargaBarang, stokBarang;

public:
    virtual std::string Display() = 0;

    // constructor
    Barang() = default;
    Barang(std::string, int, int);

    // Method
    void tambahBarang();
    void tambahBarang(int jmlTambah);

    void kurangBarang();
    void kurangBarang(int jmlKurang);

    bool cekBarang();
    bool cekBarang(bool status);

    void infoBarang();

    // Setter
    void setNamaBarang(std::string namaBarang);

    void setHargaBarang(int hargaBarang);

    void setStokBarang(int stokBarang);

    // Getter
    std::string getNamaBarang();

    int getHargaBarang();

    int getStokBarang();
};

#endif