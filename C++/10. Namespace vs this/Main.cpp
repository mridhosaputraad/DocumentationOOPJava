#include <iostream>

#include <iostream>

using namespace std;

// data member
class ClassTypes
{
public:
    string dataStr;
    double dataDouble;
    // ini adalah data member variabelnya si class
    double m_dataDouble;

    // contoh
    ClassTypes(const char *dataStr, double dataDouble)
    {
        // dengan menggunakan namespace dari class
        ClassTypes::dataStr = dataStr;

        // dengan menggunakan "this"
        cout << this << endl;
        // cara 1
        cout << this->dataStr << endl;
        // cara 2
        this->dataDouble = dataDouble;
        // cara 3 dengan menggunakan konvensi penamaan
        m_dataDouble = dataDouble;
        // this hanya pointer saja yang mereturn address dari object
    }
};

// Member function
class Player
{
public:
    string name;
    double power;
    int health;

    Player(const char *name, double power)
    {
        // cara memanggil fungsi kalo menggunakan member function
        Player::setName(name);
        // atau
        this->setPower(power);
    }

    void setName(const char *name)
    {
        this->name = name;
    }

    void setPower(double power)
    {
        this->power = power;
    }

    // ini prototype
    void setHealth(int);
};
// namespace akan absolute digunakan pada prototype
void Player::setHealth(int health)
{
    this->health = health;
}

int main(int argc, char const *argv[])
{
    // ini heap
    ClassTypes *object1 = new ClassTypes("object1", 0.05);

    cout << object1->dataStr << endl;
    cout << object1->dataDouble << endl;
    cout << object1->m_dataDouble << endl;

    Player *player1 = new Player("ucup", 100);
    cout << player1->name << endl;
    player1->setHealth(10);
    cout << player1->health << endl;

    return 0;
}
