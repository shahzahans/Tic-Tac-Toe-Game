//
// Created by Shadman on 5/6/2024.
//

#ifndef TIC_TAC_TOE_TICTACTOE_H
#define TIC_TAC_TOE_TICTACTOE_H

using namespace std;
#include <iostream>
#include <string>

class tictactoe {
private:
    char board[3][3];
    char playermoves;
public:
    tictactoe();
    void myTable();
    bool gameConditions();
    void playerTurn();
    bool marking;
    void play();
    void printBoard();
};


#endif //TIC_TAC_TOE_TICTACTOE_H
