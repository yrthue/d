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
  return entry[selected_entry].menu_id;
}

void Menu::update(bool * should_not_end) {
  if(get_input() == 10) {
    should_not_end[0] = false;
    return;
  }
  update_display();
}

#define KEY_ENTER 10
#define KEY_ARROWS_0 27
#define KEY_ARROWS_1 91
#define KEY_ARROWS_DOWN 65
#define KEY_ARROWS_UP 66

int Menu::get_input() {
  int input = getch();
  switch(input) {
  case KEY_ENTER:
    break;
  case KEY_ARROWS_0:
    if(getch() == KEY_ARROWS_1) {
      int input0 = getch();
      if(input0 == KEY_ARROWS_DOWN) {
        dec_selected_entry();
        break;
      }
      if(input0 == KEY_ARROWS_UP) {
        inc_selected_entry();
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
