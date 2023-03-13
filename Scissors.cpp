#include "Move.h"
#include "Scissors.h"
#include <string>
using namespace std;

Scissors::Scissors(){
  name = "Scissors";
  strengths[0]={"Paper"};
  weaknesses[0]={"Rock"};
  weaknessNum=1;
}