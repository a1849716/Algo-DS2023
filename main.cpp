#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include <iostream>
using namespace std;

int main(){
  
  Computer c1;
  Human h1("Richie");
  Referee r1;

  r1.refGame(&h1, &c1);
  Player * p1;
  cout << p1->getName();
  return 0;
}