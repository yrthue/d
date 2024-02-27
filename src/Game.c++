#include "Game.h"

Game::Game() {
  init_world();
}

void Game::init_world() {
  world.push_back(World(chunk_size,
    size_x_chunks, size_y_chunks));
}

void Game::init_menus() {
}

void Game::run() {
}
