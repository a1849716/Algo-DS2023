#include "Move.h"
#include "Paper.h"
#include <string>
using namespace std;

Paper::Paper(){
  name = "Rock";
  strengths[0]={"Rock"};
  weaknesses[0]={"Scissors"};
  weaknessNum=1;
}