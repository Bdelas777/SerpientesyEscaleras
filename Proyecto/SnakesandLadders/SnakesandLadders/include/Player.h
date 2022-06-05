#ifndef Player_h
#define Player_h

#include <iostream>

using namespace std;

class Player {
  private:
    int number;
    int tile;

  public:
    Player();
    Player(int);
    string draw();
    void setTile(int);
    int getTile();
};

#endif /* Player_h */
