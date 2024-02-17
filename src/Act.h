#pragma once

#include "Menu.h"
#include <string>

class Act {
public:
  virtual void exec(){}
  virtual std::string getClassName() {
    return "Act";
  }
};

class ActMenu : public Act {
public:
  ActMenu(Menu given_menu) {
    menu = given_menu;
  }
public:
  virtual void exec() {
    menu.run();
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
