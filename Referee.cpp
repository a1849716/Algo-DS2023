#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <string>
using namespace std;

Referee::Referee(){};

Player * refGame(Player * player1, Player * player2){
  char p1move = player1->makeMove();
  Player * winner = player1;
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
