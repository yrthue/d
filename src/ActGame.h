#pragma once

#include "Act.h"
#include "Game.h"

class ActGame : public Act {
public:
  virtual void exec() {
    game.run();
  }
private:
  Game game;
};
