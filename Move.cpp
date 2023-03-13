#include "Move.h"
#include <string>
using namespace std;

Move::Move(){
  name = "";
};

string Move::getName(){return name;};

string Move::getStrengths(){return strengths[0];};

string Move::getWeaknesses(){return weaknesses[0];};