#ifndef MyGame_h
#define MyGame_h

#include <iostream>
#include <vector>
#include "Board.h"
#include "Player.h"
#include "Dice.h"

using namespace std;

class MyGame {
  private:
    Board board;
    Player player1;
    Player player2;
    int turn;
    int MAX_TURN = 30;
    Dice dice;

  public:
    MyGame();
    void start();
};

#endif /* MyGame_h */
