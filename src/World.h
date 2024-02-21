#pragma once

#include "MapChunk.h"
#include <vector>

class World {
public:
  World(int chunk_size,
    int size_x_chunks, size_y_chunks);
  World(int chunk_size,
    int size_x_chunks, int size_y_chunks,
    std::vector<MapChunk> chunk);
};
