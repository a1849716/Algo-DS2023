#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
#include "Player.h"

class Computer: public Player{
  public:
    std::string name;
    char move;
    Computer(): name("Computer"){}
    char makeMove() = 0;
    string getName() = 0;
};
#endif