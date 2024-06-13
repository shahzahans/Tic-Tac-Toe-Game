//
// Created by Shadman on 5/6/2024.
//

#include <limits>
#include "tictactoe.h"

// Constructor
tictactoe::tictactoe() {
    // Initialize the board with empty spaces
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
    // Set first player to 'X'
    playermoves = 'X';
}

// Function to print the current state of the board
void tictactoe::printBoard() {
    cout << "\tWelcome to Shad's Tic Toe Game\n";
    cout << "\t   X | O\n\n";
    // Print the board row by row
    for (int i = 0; i < 3; ++i) {
        cout << "\t";
        for (int j = 0; j < 3; j++) {
            cout << " " << board[i][j];
            if (j < 2) cout << " |"; // Print the Column separators
        }
        cout << "\n";
        cout << "\t";
        if (i < 2) cout << "---|---|---\n"; // Print the row separators
    }
    cout << "\n";
}

// Function to check the game conditions for win
bool tictactoe::gameConditions() {
    // Check for a win if the rows and columns are matching
    for (int i = 0; i < 3; i++){
        if (board[i][0] == playermoves && board[i][1] == playermoves && board[i][2] == playermoves){
            return true; // Return true if any row has the same player's moves
        }
        if (board[0][i] == playermoves && board[1][i] == playermoves && board[2][i] == playermoves){
            return true; // Return true if any column has the same player's moves
        }
    }
    // Check for Wins in diagonals
    if ((board[0][0] == playermoves && board[1][1] == playermoves && board[2][2] == playermoves) || (board[0][2] == playermoves && board[1][1] == playermoves && board[2][0] == playermoves)){
        return true; // Return true if either diagonal has the same player's moves
    }
    return false; // No win conditions met
}
// Function to switch the player's turn
void tictactoe::playerTurn(){
    // Toggle between 'X' and 'O'
    if (playermoves == 'X'){
        playermoves = 'O';
    }
    else{
        playermoves = 'X';
    }
}

// Functions to mark a move on the board
bool tictactoe::marking(int row, int col) {
    // Check if the cell is within bounds and empty
    if (row < 3 && row >= 0 && col < 3 && col >= 0 && board[row][col] == ' '){
        board[row][col] = playermoves; // Mark the cell with player's move
        return true;
    }
    return false; // Return false if Invalid Move is made
}

// Check for Draw
bool tictactoe::Draw(){
    // Check if any cell is still empty
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (board[i][j] == ' '){
                return false; // Return false if there's am empty cell
            }
        }
    }
    return true; // All cells are filled and draw condition met
}

// Function to **Start** and **Control** the game loop
void tictactoe::play() {
    int row, col;
    bool gameOver = false;
    // Continue the game until it's over
    while (!gameOver) {
        printBoard(); // Print the board through function calling
        cout << "Player " << playermoves << ", enter your move (row & column): ";
        // Get and validate the player's input
        while (!(cin >> row >> col) || row < 0 || row > 2 || col < 0 || col > 2) {
            cout << "Invalid input. Please enter row and column numbers (0-2): ";
            cin.clear(); // Clear the error flag on cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the invalid input
        }

        if (marking(row, col)) { // Mark the move if valid
            if (gameConditions()) { // Check for win
                printBoard();
                cout << "Player " << playermoves << " wins!\n";
                gameOver = true; // End the game if there's a win
            }
            else if (Draw()) { // Check for a draw
                printBoard();
                cout << "Game is drawn!\n";
                gameOver = true; // End the game if it's a draw
            }
            else {
                playerTurn(); // Switch the player's turn if no win or draw
            }
        }
        else {
            cout << "Cell already occupied. Try again.\n";
        }

        // Clear input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}