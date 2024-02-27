#pragma once

#include <string>
#include <vector>
#include <World.h>

class Game {
public:
  Game();
  Game(std::string save_file_path);
protected:
  int chunk_size = 32;
  int size_x_chunks = 8;
  int size_y_chunks = 8;
  void init_world();
  std::vector<World> world;
};
