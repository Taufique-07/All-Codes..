
#include <iostream>
#include <vector>

using namespace std;

// Function to print the Tic-Tac-Toe board
void printBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

// Function to check if a player has won
bool checkWin(const vector<vector<char>>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' ')); // Initialize an empty 3x3 board
    char currentPlayer = 'X';

    cout << "Welcome to Tic-Tac-Toe!\n";

    for (int turn = 0; turn < 9; ++turn) {
        // Print the current state of the board
        cout << "Current Board:\n";
        printBoard(board);

        // Get the player's move
        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        // Check if the chosen cell is empty
        if (board[row][col] == ' ') {
            board[row][col] = currentPlayer;

            // Check if the current player has won
            if (checkWin(board, currentPlayer)) {
                cout << "Player " << currentPlayer << " wins!\n";
                printBoard(board);
                return 0;
            }

            // Switch to the other player for the next turn
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            cout << "Invalid move. The cell is already occupied. Try again.\n";
            --turn; // Decrement the turn count to allow the current player to try again
        }
    }

    // If no player has won after 9 turns, it's a draw
    cout << "It's a draw!\n";
    printBoard(board);

    return 0;
}
