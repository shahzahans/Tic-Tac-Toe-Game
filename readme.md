# Tic Tac Toe Game

Welcome to Shadman's Tic Tac Toe Game! This is a simple console-based implementation of the classic Tic Tac Toe game written in C++.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Getting Started](#getting-started)
- [How to Play](#how-to-play)
- [Class and Method Descriptions](#class-and-method-descriptions)
- [License](#license)

## Introduction

This Tic Tac Toe game allows two players to play against each other on a 3x3 board. The first player to align three of their marks (either 'X' or 'O') horizontally, vertically, or diagonally wins the game. If the board is filled without any player achieving this, the game is declared a draw.

## Features

- Two-player gameplay
- Input validation for moves
- Win and draw detection
- Clear and user-friendly console interface

## Getting Started

### Prerequisites

- A C++ compiler (e.g., g++, clang++)
- Standard C++ library

### Installation

1. Clone this repository or download the source code.
2. Compile the code using your preferred C++ compiler. For example:

    ```sh
    g++ -o tictactoe main.cpp tictactoe.cpp
    ```

3. Run the compiled program:

    ```sh
    ./tictactoe
    ```

## How to Play

1. Run the game executable.
2. The board will be displayed with cells marked as empty.
3. Player 'X' starts the game and is prompted to enter their move as row and column numbers (0-2).
4. Player 'O' takes their turn after 'X'.
5. The game continues until a player wins or the game is drawn.

## Class and Method Descriptions

### Class: `tictactoe`

#### Private Members
- `char board[3][3]`: A 3x3 array representing the game board.
- `char playermoves`: A character to track the current player's move ('X' or 'O').

#### Public Methods
- `tictactoe()`: Constructor to initialize the game board and set the first player to 'X'.
- `void printBoard()`: Prints the current state of the game board.
- `bool gameConditions()`: Checks if the current player has won the game.
- `void playerTurn()`: Switches the turn between players 'X' and 'O'.
- `bool marking(int row, int col)`: Marks the board at the specified row and column if the cell is empty.
- `bool Draw()`: Checks if the game is a draw (i.e., the board is full without a winner).
- `void play()`: Starts and controls the game loop.

### `main()`

- Initializes a `tictactoe` object and starts the game.

## License

This project is licensed under the MIT License - see the LICENSE file for details.