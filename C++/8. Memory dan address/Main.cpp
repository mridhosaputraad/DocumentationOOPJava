#include <iostream>
#include <string>
#include <chrono>

using namespace std;

// template
using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;

// Meluhat alokasi memory yang di ambil dari sebuah class
class Kosong
{
public:
    int data()
    {
        return 1;
    }
};

class Mahasiswa
{
public:
    string nama;

    Mahasiswa(const char *nama)
    {
        Mahasiswa::nama = nama;
    }
};

class Isi
{
public:
    int dataInt; // 4 byte
    int dataInt2;
    double dataDouble;
    string dataStr;
    // Kesimpulannya, memory yang ada di class dia akan bergantung dengan atrbut yang ada di dalam class itu sendiri

    // void setDataInt(int data)  ini tidak akan mempengaruhi alokasi memory
    // {
    //     Isi::dataInt = data;
    // }
};

int main(int argc, char const *argv[])
{
    // Besaran memory untuk sebuah object
    // Menampilkan besar dari class Kosong : 1 byte
    cout << "Alokasi class Kosong adalah : " << sizeof(Kosong) << " byte" << endl;
    cout << "Alokasi class Isi adalah : " << sizeof(Isi) << " byte" << endl;

    // 32 byte
    // string data = "apah";
    // cout << sizeof(data) << endl;

    // address
    string a;
    string b;
    Mahasiswa object1 = Mahasiswa("Ken");
    Mahasiswa *object2 = new Mahasiswa("Sinta");
    string c;
    string d;
    cout << "ADDRESS STACK" << endl;
    cout << &a << endl;
    cout << &b << endl;
    cout << &object1 << endl;
    cout << &object2 << endl; // pointerya ada di stack
    cout << object2 << endl;  // Objectnya ada di heap
    cout << &c << endl;
    cout << &d << endl;

    // kecepatan akses
    TimePoint *tStackStart = new TimePoint();
    TimePoint *tStackEnd = new TimePoint();
    TimePoint *tHeapStart = new TimePoint();
    TimePoint *tHeapEnd = new TimePoint();

    cin.get();
    *tStackStart = Clock::now();
    Mahasiswa object3 = Mahasiswa("Yuri");
    *tStackEnd = Clock::now();

    cin.get();
    *tHeapStart = Clock::now();
    Mahasiswa *object4 = new Mahasiswa("Sengoku");
    *tHeapEnd = Clock::now();

    chrono::duration<double> durasi = *tStackEnd - *tStackStart;
    cout << "Waktu pembuatan object di stack adalah : " << durasi.count() << endl;

    durasi = *tHeapEnd - *tHeapStart;
    cout << "Waktu pembuatan object di Heap adalah : " << durasi.count() << endl;
    return 0;
}
