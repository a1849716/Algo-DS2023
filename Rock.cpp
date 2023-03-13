#include "Move.h"
#include "Rock.h"
#include <string>
using namespace std;

Rock::Rock(){
  name = "Rock";
  strengths[0]={"Scissors"};
  weaknesses[0]={"Paper"};
  weaknessNum=1;
}