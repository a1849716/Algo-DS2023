#include "Move.h"
#include "Monkey.h"
#include <string>
using namespace std;

Monkey::Monkey(){
  name = "Monkey";
  strengths[2]={"Ninja", "Robot"};
  weaknesses[2]={"Pirate", "Zombie"};
  weaknessNum=2;
}