#include "Menu.h"
#include <ncurses.h>

int Menu::run() {
  if(!display_is_provided) return -2;
  bool should_not_end = true;
  update_display();
  while(should_not_end) {
    display->print();
    update(&should_not_end);
  }
  return selected_entry;
}

void Menu::update(bool * should_not_end) {
  if(get_input() == 10) {
    should_not_end[0] = false;
    return;
  }
  update_display();
}

int Menu::get_input() {
  int input = getch();
  switch(input) {
  case 10:
    break;
  case 27:
    if(getch() == 91) {
      int input0 = getch();
      if(input0 == 65) {
        inc_selected_entry();
        break;
      }
      if(input0 == 66) {
        dec_selected_entry();
        break;
      }
    }
  }
  return input;
}

void Menu::inc_selected_entry() {
  if(selected_entry == entry.size() - 1)
    selected_entry = 0;
  else selected_entry++;
}

void Menu::dec_selected_entry() {
  if(selected_entry == 0)
    selected_entry = entry.size() -1;
  else selected_entry--;
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
