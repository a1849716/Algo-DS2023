#include "Move.h"
#include <string>
using namespace std;

Move::Move(){
  name = "";
};

string Move::getName(){return name;};

string Move::getStrengths(int i){return strengths[i];};

string Move::getWeaknesses(int i){return weaknesses[i];};