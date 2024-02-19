#pragma once

#include "DisplayCharacter.h"
#include <vector>

class Display {
public:
  Display(bool do_init_ncurses);
  ~Display();
public:
  void clear(DisplayCharacter);
  DisplayCharacter get(int x, int y) {
    return character[element(x, y)];
  }
  int getSizeX() {return size_x;}
  int getSizeY() {return size_y;}
  void insert(Display insertand,
    int shift_x, int shift_y);
  void print();
  void set(int x, int y,
    DisplayCharacter given_char)
  {
    character[element(x, y)] = given_char;
  }
protected:
  bool is_main;
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
