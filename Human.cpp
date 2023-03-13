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
  cin >> madeMove;
  if (madeMove == "Rock"){new Rock;}
  else if(madeMove == "Paper"){new Paper;}
  else if(madeMove == "Scissors"){new Scissors;}
  else if(madeMove == "Ninja"){new Ninja;}
  else if(madeMove == "Zombie"){new Zombie;}
  else if(madeMove == "Robot"){new Robot;}
  else if(madeMove == "Pirate"){new Pirate;}
  else if(madeMove == "Monkey"){new Monkey;}
  else{cout << "Incorrect input";}
  return nullptr;
};

string Human::getName(){
  return name;
};