#include "Move.h"
#include "Ninja.h"
#include <string>
using namespace std;

Ninja::Ninja(){
  name = "Ninja";
  strengths[2]={"Pirate", "Zombie"};
  weaknesses[2]={"Robot", "Monkey"};
  weaknessNum=2;
}