#pragma once

#include "Display.h"
#include "Menu.h"
#include <vector>

#define MENU_ID_MAIN 0

class Program {
public:
  Program(int argc, char** argv);
protected: //MENU
  void init_menus();
  std::vector<Menu> menu_ref;
  void select_menu(int menu_id);
  int menu_main();
protected:
  Display display;
};
