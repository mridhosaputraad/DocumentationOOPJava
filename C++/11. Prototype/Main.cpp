#include <iostream>

using namespace std;

class Player
{
public:
    string name;

    // constructor
    Player(const char *); // prototype
    void display();

    // kalo fungsi kembalian
    string getName();

    void setName(const char *);
};

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

// penjabaran method
Player::Player(const char *name)
{
    // Player::name = name; atau
    this->name;
};

void Player::display()
{
    cout << "Nama Player: " << this->name << endl;
}

string Player::getName()
{
    return this->name;
}

void Player::setName(const char *name)
{

    this->name = name;
}