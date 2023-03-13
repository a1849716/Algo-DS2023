#ifndef MOVE_H
#define MOVE_H
#include <string>

class Move{
  private:
    std::string name;
    int weaknessNum;
    std::string strengths[2];
    std::string weaknesses[2];
  public:
    Move();
    std::string getName();
    std::string getStrengths();
    std::string getWeaknesses(); 
};
#endif