#ifndef REFEREE_H
#define REFEREE_H
#include "Player.h"
#include "Move.h"
#include <string>

class Referee{
  public:
    Referee();
    Player * refGame(Player * player1, Player * player2);
    // returns the reference to the winning player
    Player * winner = nullptr;
    Move* p1move;
    Move* p2move;
};

#endif