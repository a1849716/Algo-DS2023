#include "Move.h"
#include "Pirate.h"
#include <string>
using namespace std;

Pirate::Pirate(){
  name = "Pirate";
  strengths[2]={"Monkey", "Robot"};
  weaknesses[2]={"Ninja", "Zombie"};
  weaknessNum=2;
}