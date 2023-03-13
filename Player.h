#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Move.h"

class Player{
  public:
    char move;
    std::string name;
    virtual Move* makeMove() = 0;
    virtual std::string getName() = 0;
};
#endif