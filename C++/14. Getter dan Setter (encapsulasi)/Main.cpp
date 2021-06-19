#include <iostream>
#include <string>
#include "Player.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
    Player player1 = Player("Naruto");
    player1.display();
    cout << player1.getName() << endl;
    player1.increaseExp(110);
    player1.display();
    return 0;
}
