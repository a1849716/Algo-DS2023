#include <iostream>

#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"
using namespace std;

int main() {
  Computer c1;
  Human h1("Richie");
  Referee r1;
  Player* p1;

  p1 = r1.refGame(&h1, &c1);
  cout << p1->getName();
  return 0;
}