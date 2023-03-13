#include "Human.h"
#include "Player.h"
#include <iostream>
using namespace std;

Human::Human(){
  name = "Human";
};

Human::Human(string s){
  name = s;
};

Move* Human::makeMove(){
  cout << "Enter Move: ";
  cin >> move;
  return *move;
};

string Human::getName(){
  return name;
};