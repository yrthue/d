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
  int get_input();
public:
  std::vector<MenuEntry> entry;
protected:
  int selected_entry = 0;
  void inc_selected_entry();
  void dec_selected_entry();
protected: //DISPLAY
  Display * display;
  void update_display();
};
