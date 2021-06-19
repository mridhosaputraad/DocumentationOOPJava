#include <iostream>

// Eksternal definition
#include "Player.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Player *playarObject1 = new Player("ucup");
    playarObject1->display();

    cout << "get name: " << playarObject1->getName() << endl;

    cout << "ubah nama: " << endl;
    playarObject1->setName("nana");
    playarObject1->display();
    return 0;
}
