#include "Program.h"

Program::Program(int argc, char * argv[]) {
  init_acts();
  act_ref[0]->exec();
}

void Program::init_acts() {
  static Act act_game;
  static ActExit act_exit;

  Menu main_menu(&display);
  main_menu.entry.push_back(
    MenuEntry("Start anew", 0));
  main_menu.entry.push_back(
    MenuEntry("Exit", 1));

  static ActMenu act0(main_menu,
    {&act_game, &act_exit});
  act_ref.push_back(&act0);
}
