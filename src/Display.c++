#include "Display.h"
#include <ncurses.h>

Display::Display() {
  initscr();
  getmaxyx(stdscr, size_y, size_x);
  resize();
}

Display::~Display() {
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
