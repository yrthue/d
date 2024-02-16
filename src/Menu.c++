#include "Menu.h"
#include <ncurses.h>

void Menu::run() {
  bool should_not_end = true;
  update_display();
  while(should_not_end) {
    display->print();
    update();
  }
}

void Menu::update() {
  get_input();
  update_display();
}

void Menu::get_input() {
  getch();
}

void Menu::update_display() {
  display->clear(' ');
  for(int i = 0; i < entry.size(); i++) {
    if(i == selected_entry)
      display->set(0, i, '>');
    for(int j = 0; j < entry[i].name.size();
      j++)
      display->set(1+j, i, entry[i].name[j]);
  }
}
