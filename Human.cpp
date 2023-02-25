#include "Human.h"
#include <iostream>
using namespace std;

Human::Human(){
  Move = "";
};

string Human::get_Move(){
  cout << "Enter move: ";
  cin >> Move;
};