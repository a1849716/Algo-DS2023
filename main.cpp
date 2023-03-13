#include <iostream>

#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"
using namespace std;

int main() {
  Human h1("Richie");
  Referee r1;
  Human h2;
  Player* p1;

  p1 = r1.refGame(&h1, &h2);
  cout << p1->getName();
  return 0;
}