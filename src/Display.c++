#include "Display.h"
#include <ncurses.h>

Display::Display(bool do_init_ncurses) {
  is_main = do_init_ncurses;
  if(!is_main) return;
  initscr();
  getmaxyx(stdscr, size_y, size_x);
  resize();
}

Display::~Display() {
  if(!is_main) return;
  endwin();
}

void Display::clear(
  DisplayCharacter filler)
{
  for(int i = 0; i < character.size(); i++)
    character[i] = filler;
}

void Display::print() {
  ::clear();
  for(int i = 0; i < character.size(); i++)
    character[i].print();
}

void Display::resize() {
  for(int i = 0; i < size_x * size_y; i++)
    character.push_back(DisplayCharacter());
}

void Display::insert(
  Display insertand, int shift_x, int shift_y)
{
  int length_x;
  bool x_ok = true;
  if(shift_x < 0) {
    length_x = insertand.getSizeX() + shift_x;
    x_ok = false;
  }
  if((insertand.getSizeX() + shift_x > size_x)
    && x_ok)
  {
    length_x = size_x - shift_x;
    x_ok = false;
  }
  if(x_ok) length_x = insertand.getSizeX();

  int length_y;
  bool y_ok = true;
  if(shift_y < 0) {
    length_y = insertand.getSizeY() + shift_y;
    y_ok = false;
  }
  if((insertand.getSizeY() + shift_y > size_y)
    && y_ok)
  {
    length_y = size_y - shift_y;
    y_ok = false;
  }
  if(y_ok) length_y = insertand.getSizeY();

  for(int iy = 0; iy < length_y; iy++)
    for(int ix = 0; ix < length_x; ix++)
      set(ix + shift_x, iy + shift_y,
        insertand.get(ix, iy));
}
