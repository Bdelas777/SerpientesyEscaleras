
#ifndef Board_h
#define Board_h

#include <iostream>
#include <vector>

using namespace std;

class Board {
  private:
    vector<char> tiles;

  public:
    Board();
    string draw();
    char getTile(int);
};


#endif /* Board_h */
