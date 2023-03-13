#include "Move.h"
#include "Pirate.h"
#include <string>
using namespace std;

Pirate::Pirate(){
  name = "Pirate";
  strengths[0]="Monkey";
  strengths[1]="Robot";;
  weaknesses[0]="Ninja";
  weaknesses[1]="Zombie";
  weaknessNum=2;
}