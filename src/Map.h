#pragma once

#include "Coordinates.h"
#include "MapChunk.h"
#include "MapChunkInfo.h"
#include <string>
#include <vector>

class Map {
public:
  Map(int size_x_chunk, int size_y_chunk) {
    for(int ix = 0; ix < size_x_chunk; ix++) {
      std::vector<MapChunkInfo> col;
      for(int iy = 0; iy < size_y_chunk; iy++) {
        col.push_back(init_chunk(CCoo(ix, iy)));
      }
    }
  }
protected:
  MapChunkInfo init_chunk(CCoo coo) {
    if(!chunk_file_found(coo))
  }
  bool chunk_file_found(CCoo coo) {
    return false; //temp
  }
  std::string gen_chunk_file_name(Coo coo) {
    return std::to_string(coo.x) + "."
      + std::to_string(coo.y);
  }
protected:
  std::string path = "world/map";
  std::vector<std::vector<MapChunkInfo>>
    chunk_info;
  std::vector<MapChunk> chunk;
};

