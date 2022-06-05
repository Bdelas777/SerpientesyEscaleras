#ifndef Dice_h
#define Dice_h

#include <vector>
using namespace std;

class Dice {
  private:
    int numberOfOptions;

  public:
    Dice();
    Dice(int);
    int roll();
};

#endif /* Dice_h */
