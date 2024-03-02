#include "Game.h"
#include <ncurses.h>

Game::Game() {
  init_world();
}

void Game::init_world() {
  world.push_back(World(chunk_size,
    size_x_chunks, size_y_chunks));
}

void Game::init_menus() {
}

#define GA_MOVEC_UP 1
#define GA_MOVEC_RIGHT 2
#define GA_MOVEC_DOWN 3
#define GA_MOVEC_LEFT 4
#define GA_SELECT 5
#define GA_CONTEXT 6
#define GA_EXIT 7


void Game::run() {
  bool should_end = false;
  while(!should_end) {
  }
}
