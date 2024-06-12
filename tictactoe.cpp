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

void tictactoe::printBoard() {
    cout << "\tTic Toe Game\n";
    cout << "\t   X | O\n\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; j++) {
            cout << " " << board[i][j];
        }
        cout << "\t";
        if (i < 2) cout << "---|---|---\n";
    }
    cout << "\n";
}

bool tictactoe::gameConditions() {
    for (int i = 0; i < 3; i++){
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

bool tictactoe::marking(int row, int col) {
    if (row < 3 && row >= 0 && col < 3 && col >= 0 && board[row][col] == ' '){
        board[row][col] = playermoves;
        return true;
    }
    return false;
}

bool tictactoe::Draw(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (board[i][j] == ' '){
                return true;
            }
        }
    }
    return false;
}

void tictactoe::play(){
    int row, col;
    bool gameOver = false;
    while (!gameOver){
        printBoard();
        cout << "Player " << playermoves << ", enter your move (row & coloumn)";
        cin >> row >> col;

        if (marking(row, col)){
            if (gameConditions()){
                printBoard();
                cout << "Player " << playermoves << " wins!\n";
                gameOver = true;
            }
            else if (Draw()){
                printBoard();
                cout << "!GAME IS DRAWN!";
                gameOver =true;
            }
            else {
                playerTurn();
            }
        }
        else {
            cout << "Wrong Moves Made! Try Again\n";
        }
    }
}