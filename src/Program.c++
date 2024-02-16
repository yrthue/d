#include "Program.h"

Program::Program(int argc, char * argv[]) {
  select_menu(MENU_ID_MAIN);
}

void Program::init_menus() {
  //main
  menu.push_back(Menu(&display));
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

void Program::menu_main() {
  
}
