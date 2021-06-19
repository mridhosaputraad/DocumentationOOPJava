#ifndef __KEYBOARD
#define __KEYBOARD

#include "Barang.h"
#include <string>

class Keyboard : public Barang
{
private:
  std::string backlight, tipeSwitch;
  int banyakKey;

public:
  virtual std::string Display();

  Keyboard(std::string, int, int, std::string, int, std::string);

  void infoBarang();

  void setBacklight(std::string backlight);
  void setBanyakKey(int banyakKey);
  void setTipeSwitch(std::string tipeSwitch);

  std::string getBacklight();
  int getBanyakKey();
  std::string getTipeSwitch();
};

#endif