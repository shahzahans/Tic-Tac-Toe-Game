//
// Created by Shadman on 5/6/2024.
//

#include "tictactoe.h"

tictactoe::tictactoe() {
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            board[i][j] = ' ';
        }
    }
    playermoves = 'X';
}

void tictactoe::myTable() {
    cout << "\tTic Toe Game\n";
    cout << "\t   X | O\n\n";


    cout << "\t___|___|___" << endl;
    cout << "\t___|___|___" << endl;
    cout << "\t   |   |   " << endl;
}

bool tictactoe::gameConditions() {
    for (int i = 0; i < 0; i++){
        if (board[i][0] == playermoves && board[i][1] == playermoves && board[i][2]){
            return true;
        }
        if (board[0][i] == playermoves && board[1][i] == playermoves && board[2][i]){
            return true;
        }
    }
    if ((board[0][0] == playermoves && board[1][1] == playermoves && board[2][2]) || (board[0][2] == playermoves && board[1][1] == playermoves && board[2][0])){
        return true;
    }
    return false;
}

void tictactoe::playerTurn(){
    if (playermoves == 'X'){
        playermoves = 'O';
    }
    else{
        playermoves = 'X';
    }
}

bool tictactoe::marking(){
    if (row < 3 && row >= 0 && col < 3 && col >= 0 && board[row][col] = ' '){
        board[row][col] = playermoves;
        return true;
    }
    return false;
}

bool tictactoe::Draw(){
    for (int i=0; i < 3; i++){
        for (int j=0; j < 3; j++){
            if (board[i][j]){
                return true;
            }
        }
    }
    return false;
}



void play(){
    int row, col;
    bool gameOver = false;
    while (!gameOver){
        pri
    }

    
}