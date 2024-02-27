#pragma once

#include "Menu.h"
#include <string>
#include <vector>

#include <ncurses.h>

class Act {
public:
  virtual void exec(){}
public:
  std::vector<Act*> act;
};

class ActMenu : public Act {
public:
  ActMenu(Menu given_menu,
    std::vector<Act*> given_act)
  {
    menu = given_menu;
    act = given_act;
  }
public:
  virtual void exec() {
    int menu_code = menu.run();
    if(menu_code < 0 ) return;
    act[menu_code]->exec();
  }
protected:
  Menu menu;
};

class ActExit : public Act {
public:
  virtual void  exec() {
    printw("Good bye. Press any key");
    getch();
  }
};
