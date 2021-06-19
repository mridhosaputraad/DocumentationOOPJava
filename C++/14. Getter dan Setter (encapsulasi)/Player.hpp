#ifndef __PLAYER
#define __PLAYER

#include <string>

class Player
{
private:
    std::string name;
    double power;
    int level, exp;

public:
    Player(const char *name);

    // getter artinya akan membuat attribute menjadi read only
    std::string getName();

    // setter untuk write data ke class
    void increaseExp(int expValue);

    void display();
};

#endif