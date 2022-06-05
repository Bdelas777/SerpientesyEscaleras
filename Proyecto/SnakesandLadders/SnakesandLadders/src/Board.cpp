#include <stdio.h>
#include <cstdlib>
#include "Board.h"

Board::Board() {
    tiles = vector<char>(30, 'N');
    int snakes = 0;
    int ladders = 0;
    while(snakes < 3) {
        int index = (rand() % 30);
        if(tiles[index] == 'N') {
            tiles[index] = 'S';
            snakes++;
        }
    }
    while(ladders < 3) {
        int index = (rand() % 30);
        if(tiles[index] == 'N') {
            tiles[index] = 'L';
            ladders++;
        }
    }
}

string Board::draw(){
    string brd = "";
    for (char c : tiles) {
        brd += c;
        brd += " ";
    }
    return brd;
}

char Board::getTile(int index) {
    return tiles[index];
}
