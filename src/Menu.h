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
  Menu(Display * display) {
    this->display = display;
  }
public:
  std::vector<MenuEntry> entry;
  int selected_entry = 0;
protected:
  Display * display;
};
