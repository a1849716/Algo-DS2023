#include "Move.h"
#include "Robot.h"
#include <string>
using namespace std;

Robot::Robot(){
  name = "Robot";
  strengths[0]="Ninja";
  strengths[1]="Zombie";;
  weaknesses[0]="Pirate";
  weaknesses[1]="Monkey";
  weaknessNum=2;
}