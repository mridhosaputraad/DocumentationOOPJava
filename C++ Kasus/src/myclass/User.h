#ifndef __USER
#define __USER

#include <string>

class User
{
private:
    std::string nama, gender;
    int umur;

public:
    virtual std::string user() = 0;

    User(std::string, std::string, int);

    void infoUser();
    void setNama(std::string nama);
    void setGender(std::string gender);

    void setUmur(int umur);
    std::string getNama();
    std::string getGender();
    int getUmur();
};

#endif