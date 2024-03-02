#include "ActGame.h"
#include "Program.h"

Program::Program(int argc, char * argv[]) {
  init_acts();
  act_ref[0]->exec();
}

void Program::init_acts() {
  static ActGame act_game_new(true, "save");
  static ActGame act_game_old(false, "save");
  static ActExit act_exit;

  Menu main_menu(&display);
  main_menu.entry.push_back(
    MenuEntry("Start anew", 0));
  main_menu.entry.push_back(
    MenuEntry("Load saved", 1));
  main_menu.entry.push_back(
    MenuEntry("Exit", 2));

  static ActMenu act0(main_menu, {
    &act_game_new,
    &act_game_old,
    &act_exit
  });
  act_ref.push_back(&act0);
}
