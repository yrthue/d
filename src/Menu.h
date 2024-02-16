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
  void run();
protected:
  void update();
  void get_input();
public:
  std::vector<MenuEntry> entry;
  int selected_entry = 0;
protected: //DISPLAY
  Display * display;
  void update_display();
};
