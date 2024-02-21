#include <string>

class Entity {
public:
  Entity(int id, std::string name) {
    this->id = id;
    this->name = name;
  };
public:
  int getId() {return id;}
  std::string getName() {return name;}
protected:
  int id;
  std::string name;
};
