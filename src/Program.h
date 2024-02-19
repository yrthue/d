#pragma once

#include "Act.h"
#include "Display.h"
#include <vector>

#define MENU_ID_MAIN 0

class Program {
public:
  Program(int argc, char** argv);
protected: //ACT
  void init_acts();
  std::vector<Act*> act_ref;
protected:
  Display display = Display(true);
};
