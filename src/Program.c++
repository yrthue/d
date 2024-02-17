#include "Program.h"

Program::Program(int argc, char * argv[]) {
  init_menus();
  init_acts();
  //select_menu(MENU_ID_MAIN);
  act_ref[0]->exec();
}

void Program::init_acts() {
  static ActMenu act0(menu_ref[MENU_ID_MAIN]);
  act_ref.push_back(&act0);
  static ActExit act1;
  act_ref.push_back(&act1);
}

void Program::init_menus() {
  int i;
  //main
  menu_ref.push_back(Menu(&display));
  i = menu_ref.size() - 1;
  menu_ref[i].entry.push_back(
    MenuEntry("Start anew", -1));
  menu_ref[i].entry.push_back(
    MenuEntry("Exit", -2));
}

void Program::select_menu(int menu_id) {
  switch(menu_id) {
  case MENU_ID_MAIN:
    menu_main();
    break;
  default:
    menu_main();
    break;
  }
}

int Program::menu_main() {
  Menu menu = menu_ref[MENU_ID_MAIN];
  menu.run();
  return 0;
}
