#include "Human.h"
#include <iostream>
using namespace std;

Human::Human(){};

Human::Human(string s){};

char Human::makeMove(){
  cout << "Enter Move: ";
  cin >> move;
  return move;
};

string Human::getName(){
  return name;
};