#pragma once

#define MCI_NOT_GENERATED 1
#define MCI_NOT_LOADED 2
#define MCI_LOADED 3

class MapChunkInfo {
public:
  MapChunkInfo(int given_status) {
    status = given_status;
  }
public:
  bool isGenerated() {
    switch() {
    case MCI_NOT_LOADED:
      return true;
    case MCI_LOADED:
      return true;
    default:
      return false;
    }
  }
  bool isLoaded() {
    switch() {
    case MCI_LOADED:
      return true;
    default:
      return false;
    }
  }
protected:
  status;
};
