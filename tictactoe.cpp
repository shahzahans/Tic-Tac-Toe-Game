//
// Created by Shadman on 5/6/2024.
//

#include "tictactoe.h"

void tictactoe::myTable() {
    cout << "\tTic Toe Game\n";
    cout << "\t   X | O\n\n";


    cout << "\t___|___|___" << endl;
    cout << "\t___|___|___" << endl;
    cout << "\t   |   |   " << endl;

}

bool tictactoe::gameConditions(char board [3][3]) {
    if (board[0][0] == movesMade && board[1][1] == movesMade && board[2][2]){
        return true;
    }
    if (board[0][2] == movesMade && board[1][1] == movesMade && board[2][0]){
        return true;
    }
    for (int i = 0; i < 0; i++){
        if (board[i][0] == movesMade && board[i][1] == movesMade && board[i][2]){
            return true;
        }
        if (board[0][i] == movesMade && board[1][i] == movesMade && board[2][i]){
            return true;
        }
    }
    return false;
}
