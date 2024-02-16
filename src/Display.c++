#include "Display.h"
#include <ncurses.h>

Display::Display() {
  initscr();
  getmaxyx(stdscr, size_y, size_x);
  resize();
}

void Display::print() {
  for(int i = 0; i < character.size(); i++)
    printw(character[i].character.c_str());
}

void Display::resize() {
  for(int i = 0; i < size_x * size_y; i++)
    character.push_back(DisplayCharacter());
}
