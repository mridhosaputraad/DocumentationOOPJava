#include <iostream>

using namespace std;

// class dengan constructor
class Mahasiswa
{
public:
    string nama, NIM, jurusan;
    double IPK;

    // Constructor (sifatnya dipanggil pertama kali) dengan parameter
    Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK)
    {
        // Namespace
        Mahasiswa::nama = inputNama;
        Mahasiswa::NIM = inputNIM;
        Mahasiswa::jurusan = inputJurusan;
        Mahasiswa::IPK = inputIPK;
        cout << Mahasiswa::nama << endl;
        cout << Mahasiswa::NIM << endl;
        cout << Mahasiswa::jurusan << endl;
        cout << Mahasiswa::IPK << endl;
    }
};

int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("ucup", "12345", "teknik sipil", 3.50);
    return 0;
}
