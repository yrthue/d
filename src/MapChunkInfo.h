#pragma once

#include "Coordinates.h"

class MapChunkInfo {
public:
  MapChunkInfo() {
  }
public:
  CCoo getCoo() {return coo;}
  bool chIsLoaded() {return chunk_is_loaded;}
  int getChN() {return chunk_number;}
  void setChN(int number) {
    chunk_is_loaded = true;
    chunk_number = number;
  }
  void rmCh() {chunk_is_loaded = false;}
protected:
  CCoo coo;
  bool chunk_is_loaded = false;
  int chunk_number;
};
