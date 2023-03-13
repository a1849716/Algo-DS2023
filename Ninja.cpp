#include "Move.h"
#include "Ninja.h"
#include <string>
using namespace std;

Ninja::Ninja(){
  name = "Ninja";
  strengths[0]="Pirate";
  strengths[1]="Zombie";;
  weaknesses[0]="Robot";
  weaknesses[1]="Monkey";
  weaknessNum=2;
}