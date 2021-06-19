#ifndef __PLAYER
#define __PLAYER
#include <string>

class Player
{
public:
    std::string name;

    // constructor
    Player(const char *); // prototype
    void display();

    // kalo fungsi kembalian
    std::string getName();

    void setName(const char *);
};

#endif