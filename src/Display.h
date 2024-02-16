#pragma once

#include "DisplayCharacter.h"
#include <vector>

class Display {
public:
  Display();
public:
  void print();
protected:
  int size_x;
  int size_y;
  std::vector<DisplayCharacter> character;
  void resize();
};
