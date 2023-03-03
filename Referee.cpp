#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include <string>
using namespace std;

Referee::Referee(){};

Player * refGame(Player * player1, Player * player2){
  char p1move = player1.makeMove();
  string p1name = player1.getName();
  char p2move = 'R';
  string p2name = "Computer";
};
