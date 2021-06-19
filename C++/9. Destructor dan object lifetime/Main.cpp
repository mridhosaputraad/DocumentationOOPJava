#include <iostream>

using namespace std;

class Player
{
public:
    string nama;

    // Constructor
    Player(const char *nama)
    {
        cout << "player " << Player::nama << " dibuat" << endl;
    }

    // destructor
    ~Player()
    {
        cout << "player " << Player::nama << " dihapus" << endl;
    }
};

void membuatPlayerStack()
{
    /*
    * stack player akan selalu di delete
    * ketika sudah melewati block kurung kurawal ini
    * dan kita tidak bisa mengakses lagi dia dimanapun
    */
    Player stackPlayer = Player("kaka");
}

void membuatPlayerHeap()
{
    /* Kita bisa delete dia  sehingga membuat free memory
    */
    Player *heapPlayer = new Player("aji");
    delete heapPlayer;
}

void membuatPlayerStackPointer(Player *&playerPointer)
{
    Player stackPlayer = Player("stack");
    playerPointer = &stackPlayer;
}

void membuatPlayerHeapPointer(Player *&playerPointer)
{
    // variabelnya sebenarnya berada di stack
    Player *heapPlayer = new Player("heap");
    /*Masalahnya, kalo kita mengambil dia seperti dibawah ini
    * Maka dia akan leak, keluar
    * Walaupun kita sudah delete seperti inni
    * Tapi dia masih bisa ada yang mengakses memory ini
    * Kalo kita melakukan passing pada object pointer
    * Maka harus delete lagi di luar scopenya
    */
    playerPointer = heapPlayer;
    // delete heapPlayer;
}

// return object
Player createStackPlayer()
{
    Player stackPlayer = Player("stack di create");
    return stackPlayer; // Karena dia return maka di keluar dari scope ini. kekuranganny itu obj3ctnya life timenya tidak diketahui
}

Player *createHeapPlayer()
{
    Player *heapPlayer = new Player("heap");
    return heapPlayer; // keuntungannya kita bisa mengatur lifetime objectnya
}

int main(int argc, char const *argv[])
{
    membuatPlayerStack();
    membuatPlayerHeap();

    // Simulasi memory leak
    cout << "\nMemory leak" << endl;
    Player *playerPointer1;
    membuatPlayerStackPointer(playerPointer1);
    // cout << (*playerPointer1).nama << endl; // tidak terjadi apa - apa null

    // Player *playerPointer2;
    // membuatPlayerHeapPointer(playerPointer2);
    // cout << playerPointer2->nama << endl; // memory leak
    // playerPointer2->nama = "acak-acakan";
    // cout << playerPointer2->nama << endl; // ini akan menjadi linking
    // delete playerPointer2;
    // cout << playerPointer2->nama << endl; // memory free. ini tidak baik. hati hati menggunakan objek dengan heap

    cout << "\nReturn object" << endl;
    Player playerReturnStack = createStackPlayer();
    cout << playerReturnStack.nama << endl; // muncul ditengah dan baru dihapus setelah heap

    Player *playerReturnHeap = createHeapPlayer();
    cout << playerReturnHeap->nama << endl;
    delete playerReturnHeap;

    return 0;
}
// Cmiiw garbage memory di c++ kita melakukannya secara manual