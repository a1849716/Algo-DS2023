#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include "Player.h"

class Human : public Player {
 public:
  Human();
  Human(std::string s);
  std::string name;
  char move;
  char makeMove();
  std::string getName();
};
#endif