#pragma once

#include "Display.h"
#include <string>
#include <vector>

class MenuEntry {
public:
  MenuEntry(std::string name, int menu_id) {
    this->name = name;
    this->menu_id = menu_id;
  }
public:
  std::string name;
  int menu_id;
};

class Menu {
public:
  Menu(){}
  Menu(Display * display) {
    display_is_provided = true;
    this->display = display;
  }
public:
  int run();
protected:
  void update(bool * should_not_end);
  int get_input();
public:
  std::vector<MenuEntry> entry;
protected:
  int selected_entry = 0;
  void inc_selected_entry();
  void dec_selected_entry();
protected: //DISPLAY
  bool display_is_provided = false;
  Display * display;
  void update_display();
};
