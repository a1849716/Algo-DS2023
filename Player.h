#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{
  public:
    char move;
    std::string name;
    virtual char makeMove() = 0;
    virtual std::string getName() = 0;
};
#endif