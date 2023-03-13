#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <string>
#include <iostream>
using namespace std;

Referee::Referee(){};

Player * Referee::refGame(Player * player1, Player * player2){
  p1move = player1->makeMove();
  p2move = player2->makeMove();

  for (int i=0; i<(p1move->weaknessNum);i++){
    if(p1move->getStrengths(i) == p2move->getName()){
      winner = player1;
    }
    else if(p1move->getWeaknesses(i)==p2move->getName()){
      winner = player2;
    }
  }
  return winner;
};
