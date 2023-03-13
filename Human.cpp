#include "Human.h"
#include "Player.h"
#include <iostream>
#include"Rock.h"
#include"Scissors.h"
#include"Paper.h"
#include"Ninja.h"
#include"Zombie.h"
#include"Robot.h"
#include"Pirate.h"
#include"Monkey.h"
using namespace std;

Human::Human(){
  name = "Human";
};

Human::Human(string s){
  name = s;
};

Move* Human::makeMove(){
  cout << "Enter move: ";
  cin >> madeMove;
  if (madeMove == "Rock"){move = new Rock; return move;}
  else if(madeMove == "Paper"){move = new Paper; return move;}
  else if(madeMove == "Scissors"){move = new Scissors; return move;}
  else if(madeMove == "Ninja"){move = new Ninja; return move;}
  else if(madeMove == "Zombie"){move = new Zombie; return move;}
  else if(madeMove == "Robot"){move = new Robot; return move;}
  else if(madeMove == "Pirate"){move = new Pirate; return move;}
  else if(madeMove == "Monkey"){move = new Monkey; return move;}
  else{cout << "Incorrect input";}
  return nullptr;
};

string Human::getName(){
  return name;
};