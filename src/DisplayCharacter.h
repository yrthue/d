#pragma once

#include <string>

class DisplayCharacter {
public:
  DisplayCharacter() {
    character = " ";
  }
  DisplayCharacter(char given_char) {
    character = given_char;
  }
public:
  void print();
  std::string get();
protected:
  std::string character;
};
