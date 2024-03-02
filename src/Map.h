#pragma once

#include "Coordinates.h"
#include "Display.h"
#include "MapChunk.h"
#include "MapChunkInfo.h"
#include <string>
#include <vector>

class Map {
public:
  Map(int size_x_chunk, int size_y_chunk) {
    this->size_x_chunk = size_x_chunk;
    this->size_y_chunk = size_y_chunk;
    for(int iy = 0; iy < size_y_chunk; iy++)
      for(int ix = 0; ix < size_x_chunk; ix++)
        chunk_info.push_back(
          MapChunkInfo(CCoo(ix, iy)));
  }
public:
  Display getDisplay(int size_x, int size_y,
    GCoo get_from)
  {
    Display result(false);
    result.setSize(size_x, size_y);
    for(int iy = 0; iy < size_y; iy++) {
      for(int ix = 0; ix < size_x; ix++) {
        
      }
    }
  }
  bool tileExists(GCoo coo) {
    bool result = true;
    if(coo.x < 0) result = false;
    if(coo.y < 0) result = false;
    if(coo.x >= 
  }
  Tile* getTile(GCoo coo) {
    Chunk* c = getChunk(coo);
    return c->getTile(coo);
  }
  MapChunk* getChunk(CCoo coo) {
    
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
  std::vector<MapChunkInfo> chunk_info;
  std::vector<MapChunk> chunk;
  int size_x_chunk, size_y_chunk;
};

