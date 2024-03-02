#pragma once

#include "Act.h"
#include "Game.h"
#include <string>

class ActGame : public Act {
public:
  ActGame(bool do_new, std::string save_file) {
  }
public:
  virtual void exec() {
    game.run();
  }
private:
  Game game;
};
