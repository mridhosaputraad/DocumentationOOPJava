#include <iostream>

using namespace std;

class Mahasiswa
{
public:
    string nama, NIM, jurusan;
    double IPK;
};

int main(int argc, char const *argv[])
{
    Mahasiswa data1;
    data1.nama = "Ucup";
    data1.NIM = "12345";
    data1.jurusan = "Teknik sipil";
    data1.IPK = 3.50;

    cout << "Nama dari data1: " << data1.nama << endl;
    cout << "Nama dari data1: " << data1.NIM << endl;
    return 0;
}
