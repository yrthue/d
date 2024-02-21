#include "Tile.h"
#include <vector>

class MapChunk {
public:
  MapChunk(int size) {this->size = size;}
protected:
  int size;
  std::vector<Tile> tile;
  void make_tiles() {
    for(int i = 0; i < size * size; i++) {
      tile.push_back(Tile());
    }
  }
};
