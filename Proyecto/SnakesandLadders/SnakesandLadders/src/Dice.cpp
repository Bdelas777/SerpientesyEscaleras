#include <stdio.h>
#include <cstdlib>
#include "Dice.h"

Dice::Dice() {
    numberOfOptions = 6;
}

Dice::Dice(int n) {
    numberOfOptions = n;
}

int Dice::roll(){
    return 1 + (rand() % numberOfOptions);
}
