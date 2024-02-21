#include "Entity.h"
#include <vector>

#define TILE_TERRAIN_PLAINS 0
#define TILE_TERRAIN_PLAINS_CHAR " "
#define TILE_TERRAIN_FOREST 1
#define TILE_TERRAIN_FOREST_CHAR ""
#define TILE_TERRAIN_MOUNTAIN 2
#define TILE_TERRAIN_MOUNTAIN_CHAR ""
#define TILE_TERRAIN_SEA 3
#define TILE_TERRAIN_SEA ""

class Tile() {
public:
  Tile() {}
protected:
  int terrain = TILE_TERRAIN_PLAINS;
};
