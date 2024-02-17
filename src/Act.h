#pragma once

#include "Menu.h"
#include <string>
#include <vector>

class Act {
public:
  virtual void exec(){}
  virtual std::string getClassName() {
    return "Act";
  }
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
  virtual std::string getClassName() {
    return "ActMenu";
  }
protected:
  Menu menu;
};

class ActExit : public Act {
public:
  virtual std::string getClassName() {
    return "ActExit";
  }
};
