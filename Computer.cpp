#include "Computer.h"
#include <iostream>
#include <string>
using namespace std;

Computer::Computer(){
  move = 'R';
  name = "Computer";
};

char Computer::makeMove(){
  return move;
};

string Computer::getName(){
  return name;
};

