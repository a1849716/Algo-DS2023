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

  if (p1move == 'R'){
    return nullptr;
  }
  else if(p1move == 'S'){
    winner = player2;
  }
  else if (p1move == 'P'){
    winner = player1;
    }
  return winner;
};
