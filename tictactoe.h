//
// Created by Shadman on 5/6/2024.
//

#ifndef TIC_TAC_TOE_TICTACTOE_H
#define TIC_TAC_TOE_TICTACTOE_H

using namespace std;
#include <iostream>
#include <string>

// Class defination for Tic Tac Toe game
class tictactoe {
private:
    // 3x3 board for the game is made using '2D's Array'
    char board[3][3];
    // Variable to keep trach of the current player's move ('X' or 'O')
    char playermoves;
public:
    // Constructor to initialize the game
    tictactoe();
    // Method to check the game conditions <win or loose>
    bool gameConditions();
    // Method to switch the player's turn
    void playerTurn();
    // method to mark a move on the board
    bool marking(int row, int col);
    // Method to start the game
    void play();
    // Method to print the current state of the board
    void printBoard();
    // Method to check for draw
    bool conditionDraw();
};


#endif //TIC_TAC_TOE_TICTACTOE_H
