#include "Game.h"

Game::Game() {
  init_world();
}

void Game::init_world() {
  world.push_back(World(chunk_size,
    size_x_chunk, size_y_chunk));
}
