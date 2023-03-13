#include "Computer.h"
#include <iostream>
#include <string>
#include"Rock.h"
using namespace std;

Computer::Computer(){
  move = new Rock;
  name = "Computer";
};

Move* Computer::makeMove(){
  return move;
};

string Computer::getName(){
  return name;
};

