#pragma once

#include <string>

class Act {
public:
  std::string getClassName() {
    return "Act";
  }
};

class ActMenu : public Act {
public:
  std::string getClassName() {
    return "ActMenu";
  }
};

class ActExit : public Act {
public:
  std::string getClassName() {
    return "ActExit";
  }
};
