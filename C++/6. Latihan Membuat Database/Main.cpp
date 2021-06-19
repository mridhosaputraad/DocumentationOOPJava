// Membuat database sederhana
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Langkah 1: Membuat class mahasiwa
class Mahasiswa
{
public:
    string nama, NIM, jurusan;

    /* Constructor */
    Mahasiswa(string nama, string NIM, string jurusan)
    {
        Mahasiswa::nama = nama;
        Mahasiswa::NIM = NIM;
        Mahasiswa::jurusan = jurusan;
    }

    string stringify()
    {
        return "\n" + nama + " " + NIM + " " + jurusan;
    }
};

// Langkah 2. Membuat class database
class DBase
{
public:
    /* Membaca, Menulis, dan FileName */
    ifstream in;     /* Data Input */
    ofstream out;    /* Menulis Data */
    string fileName; /* File Name */

    // Permasalahan : Memory management hanya ada dibagian ini
    DBase(const char *fileName)
    {
        DBase::fileName = fileName;
    }

    /* Method save data mahasiswa ke database */
    void save(Mahasiswa data)
    {
        cout << data.nama << endl;
        cout << data.NIM << endl;
        cout << data.jurusan << endl;

        /* Menulis ke database */
        /* Buka filenya terlebih dahulu */
        DBase::out.open(DBase::fileName, ios::app);
        /* Simpan data ke database */
        // cout << data.stringify << endl; /* Buat satu method yang bisa mengembalikan data secara bersamaan di class Mahasiswa */
        DBase::out << data.stringify(); /* Ini akan menjadi masalah karena data (karena dia object) tidak ada isisnya */
        /* Tutup Database */
        DBase::out.close();
    }

    // Method menampilkan semua isi didatabase
    void showAll()
    {
        DBase::in.open(DBase::fileName, ios::in); /* Open file database */
        string nama, NIM, jurusan;                /* Buat variabel untuk menampung value */
        int index = 1;                            /* untuk menampilkan secara berurutan */
        while (!DBase::in.eof())
        {
            DBase::in >> nama;
            DBase::in >> NIM;
            DBase::in >> jurusan;
            cout << index++ << ".\t";
            cout << nama << ".\t";
            cout << NIM << ".\t";
            cout << jurusan << endl;
        }
        DBase::in.close(); /* Close file database*/
    }
};

int main(int argc, char const *argv[])
{
    // Tampilkan seluruh data di database
    DBase database = DBase("D:\\Pemograman\\OOP\\C++\\6. Latihan Membuat Database\\data.txt");
    // database.showAll();

    // Input User
    string nama, NIM, jurusan;
    cout << "MASUKKAN DATA MAHASISWA\n";
    cout << "Nama : ";
    cin >> nama;
    cout << "NIM : ";
    cin >> NIM;
    cout << "Jurusan : ";
    cin >> jurusan;

    // Membuat object-object yang diperlukan
    Mahasiswa dataMahasiswa(nama, NIM, jurusan);

    // Save data ke database
    database.save(dataMahasiswa);

    return 0;
}
