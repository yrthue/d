#pragma once

#include <vector>

class World {
public:
  World(int chunk_size,
    int size_x_chunk, int size_y_chunk,
    std::vector<WorldChunk> chunk);
};
