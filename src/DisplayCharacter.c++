#include "DisplayCharacter.h"
#include <ncurses.h>

void DisplayCharacter::print() {
  printw("%s", character.c_str());
}
