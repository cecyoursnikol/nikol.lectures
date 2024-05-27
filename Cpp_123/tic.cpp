#include <iostream>

using namespace std;

// Function to display the Tic-Tac-Toe board
void displayBoard(char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if a player has won
bool checkWin(char board[3][3], char mark) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == mark && board[i][1] == mark && board[i][2] == mark)
            return true;
        if (board[0][i] == mark && board[1][i] == mark && board[2][i] == mark)
            return true;
    }
    // Check diagonals
    if (board[0][0] == mark && board[1][1] == mark && board[2][2] == mark)
        return true;
    if (board[0][2] == mark && board[1][1] == mark && board[2][0] == mark)
        return true;
    return false;
}

// Function to check if the board is full
bool isBoardFull(char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

// Function to get player's move
void getPlayerMove(char board[3][3], char mark) {
    int row, col;
    cout << "Player " << mark << "'s turn. Enter row and column (1-3): ";
    cin >> row >> col;
    row--; // Adjusting to 0-based indexing
    col--;
    if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
        cout << "Invalid move! Try again." << endl;
        getPlayerMove(board, mark); // Recursively get a valid move
    } else {
        board[row][col] = mark;
    }
}

int main() {
    char board[3][3] = { {' ', ' ', ' '},
                         {' ', ' ', ' '},
                         {' ', ' ', ' '} }; // Initialize empty 3x3 board
    char currentPlayer = 'X';

    cout << "Welcome to Tic-Tac-Toe!" << endl;
    displayBoard(board);

    while (true) {
        getPlayerMove(board, currentPlayer);
        displayBoard(board);
        
        // Check if the current player wins
        if (checkWin(board, currentPlayer)) {
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        // Check for a draw
        if (isBoardFull(board)) {
            cout << "It's a draw!" << endl;
            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}

