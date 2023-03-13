#include "Move.h"
#include "Zombie.h"
#include <string>
using namespace std;

Zombie::Zombie(){
  name = "Zombie";
  strengths[2]={"Pirate", "Monkey"};
  weaknesses[2]={"Robot", "Ninja"};
  weaknessNum=2;
}