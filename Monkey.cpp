#include "Move.h"
#include "Monkey.h"
#include <string>
using namespace std;

Monkey::Monkey(){
  name = "Monkey";
  strengths[0]="Ninja";
  strengths[1]="Robot";;
  weaknesses[0]="Pirate";
  weaknesses[1]="Zombie";
  weaknessNum=2;
}