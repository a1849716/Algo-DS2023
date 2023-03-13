#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include "Player.h"

class Human : public Player {
 public:
  Human();
  Human(std::string s);
  std::string name;
  std::string madeMove;
  Move* move;
  Move* makeMove();
  std::string getName();
};
#endif