#ifndef MOVE_H
#define MOVE_H
#include <string>

class Move{
  public:
    std::string name;
    int weaknessNum;
    std::string strengths[2];
    std::string weaknesses[2];
    Move();
    std::string getName();
    std::string getStrengths(int i);
    std::string getWeaknesses(int i); 
};
#endif