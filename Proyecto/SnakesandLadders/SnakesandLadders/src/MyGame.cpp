#include <stdio.h>
#include "Dice.h"
#include "Board.h"
#include "MyGame.h"

using namespace std;

MyGame::MyGame() {
    board = Board();
    player1 = Player(1);
    player2 = Player(2);
    turn = 1;
    dice = Dice();
}

void MyGame::start() {
    player1.setTile(1);
    player2.setTile(1);
    cout << "Press C to continue next turn, or E to end the game:" << endl;
    char option = 'C';
    while(option != 'E' && turn <= MAX_TURN &&
          player1.getTile() < 30 && player2.getTile() < 30) {
        cin >> option;
        if(option == 'C') {
            cout << to_string(turn) << " ";
            int number = dice.roll();
            if(turn % 2 != 0) {
                // Player 1's turn
                cout << player1.draw() << " " << number << " ";
                player1.setTile(player1.getTile() + number);
                char c = board.getTile(player1.getTile() - 1);
                cout << c << " ";
                if(c == 'S')
                    player1.setTile(player1.getTile() - 3);
                else if(c == 'L')
                    player1.setTile(player1.getTile() + 3);
                cout << player1.getTile() << endl;
            }
            else {
                // Player 2's turn
                cout << player2.draw() << " " << number << " ";
                player2.setTile(player2.getTile() + number);
                char c = board.getTile(player2.getTile() - 1);
                cout << c << " ";
                if(c == 'S')
                    player2.setTile(player2.getTile() - 3);
                else if(c == 'L')
                    player2.setTile(player2.getTile() + 3);
                cout << player2.getTile() << endl;
            }
            turn++;
        }
        else if (option != 'E') {
            cout << "Invalid option, please press C to continue next turn or E to end the game" << endl;
        }
    }
    cout << "-- GAME OVER --" << endl;

    if(turn >= MAX_TURN)
        cout << "The maximum number of turns has been reached..." << endl;
    else if(player1.getTile() >= 30)
        cout << "Player 1 is the winner!!!" << endl;
    else if(player2.getTile() >= 30)
        cout << "Player 2 is the winner!!!" << endl;
    else
        cout << "Thanks for playing!!!" << endl;
}
