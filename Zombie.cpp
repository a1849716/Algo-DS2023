#include "Move.h"
#include "Zombie.h"
#include <string>
using namespace std;

Zombie::Zombie(){
  name = "Zombie";
  strengths[0]="Pirate";
  strengths[1]="Monkey";;
  weaknesses[0]="Robot";
  weaknesses[1]="Ninja";
  weaknessNum=2;
}