#pragma once

#include <string>
#include <vector>

struct Vec2DimInt {
  int x, y;
  Vec2DimInt operator+(Vec2DimInt addend) {
    return {x + addend.x, y + addend.y};
  }
};
using ChunkPos = Vec2DimInt;

class WorldChunk {
public:
  WorldChunk(std::string file) //load
  {
    
  }
  WorldChunk(ChunkPos pos, int dim_size,
    std::vector<WorldChunk> chunk) //generate
  {
    WorldChunk neighbour_north;
    WorldChunk neighbour_east;
    WorldChunk neighbour_south;
    WorldChunk neighbour_west;
  }
public:
  ChunkPos pos;
  int dime_size;
  std::vector<Tile> tile;
};
