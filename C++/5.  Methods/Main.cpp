#include <iostream>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    double IPK;

    Mahasiswa(string nama, double IPK)
    {
        Mahasiswa::nama = nama;
        Mahasiswa::IPK = IPK;
    }

    // method tanpa parameter dan tanpa return
    void tampilkanData()
    {
        cout << "Nama saya " << nama << ", IPK saya adalah " << IPK << endl;
    }

    // Method dengan parameter dan tanpa return
    void ubahNama(const char *namaBaru)
    {
        Mahasiswa::nama = namaBaru;
    }

    // method tanpa parameter dan dengan return (getter)
    string getNama()
    {
        return Mahasiswa::nama;
    }

    double getIPK()
    {
        return Mahasiswa::IPK;
    }

    // method dengan parameter dan dengan return
    double katrolIPK(const double &tambahanNilai)
    {
        return Mahasiswa::IPK + tambahanNilai;
    }
};

int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("ucup", 3.5);
    mahasiswa1.tampilkanData();

    mahasiswa1.ubahNama("Roy");
    mahasiswa1.tampilkanData();

    string dataNama = mahasiswa1.getNama();
    cout << "dataNama " << dataNama << endl;
    // Jika tanpa menuliskan variabelnya
    cout << "dataIPK " << mahasiswa1.getIPK() << endl;
    cout << "nilai katrol " << mahasiswa1.katrolIPK(-1.32) << endl;
    return 0;
}
