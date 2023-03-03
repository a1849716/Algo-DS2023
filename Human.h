#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

class Human: public Player{
  public:
    std::string name;
    char move;
    Human(): name("Human"){}
    Human(string s): name(s){}
    char makeMove() = 0;
    std::string getName() = 0;
};
#endif 