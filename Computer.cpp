#include "Computer.h"
#include <iostream>
using namespace std;

Computer::Computer(){};

char Computer::makeMove(){
  move = 'R';
  return move;
};

string Computer::getName(){
  return name;
};

