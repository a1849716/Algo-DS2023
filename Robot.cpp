#include "Move.h"
#include "Robot.h"
#include <string>
using namespace std;

Robot::Robot(){
  name = "Robot";
  strengths[2]={"Ninja", "Zombie"};
  weaknesses[2]={"Pirate", "Monkey"};
  weaknessNum=2;
}