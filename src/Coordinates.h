#pragma once

int div(int dividend, int divisor) {
  int a = dividend;
  int result = 0;
  while((a >= divisor)
     || (a <= -divisor))
  {
    if(a >= divisor) {
      a -= divisor;
      result++;
    }
    else {
      a += divisor;
      result--;
    }
  }
}

int mod(int dividend, int divisor) {
  int a = dividend;
  while((a >= divisor)
     || (a <= -divisor))
  {
    if(a >= divisor) a -= divisor;
    else a += divisor;
  }
  return a;
}

class LocalCoordinates;
using LCoo = LocalCoordinates;
class ChunksCoordinates;
using CCoo = ChunksCoorinates;
class GCoo = GlobalCoordinates;

class Coo {
public:
  Coo(int x, int y) {
    this->x = x;
    this->y = y;
  }
public:
  int x, y;
}

class GCoo : public Coo {
public:
  GCoo(LCoo lCoo, CCoo cCoo, int chunk_size) {
    x = cCoo.x * chunk_size + lCoo.x;
    y = cCoo.y * chunk_size + lCoo.y;
  }
};

class LCoo : public Coo {
public:
  LCoo(GCoo gCoo, int chunk_size) {
    x = mod(gCoo.x, chunk_size);
    y = mod(gCoo.y, chunk_size);
  }
};

class CCoo : public Coo {
public:
  CCoo(GCoo gCoo, int chunk_size) {
    x = div(gCoo.x, chunk_size);
    y = div(gCoo.y, chunk_size);
  }
};


