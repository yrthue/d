#pragma once

#include "DisplayCharacter.h"
#include <vector>

class Display {
public:
  Display();
  ~Display();
public:
  void clear(DisplayCharacter);
  void print();
  void set(int x, int y,
    DisplayCharacter given_char)
  {
    character[element(x, y)] = given_char;
  }
protected:
  int size_x;
  int size_y;
  std::vector<DisplayCharacter> character;
protected:
  int element(int x, int y) {
    return x + (y * size_x);
  }
  void resize();
};
