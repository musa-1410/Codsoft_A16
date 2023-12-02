#include <iostream>
using namespace std;

void displayBoard(char board[3][3]) {
  cout << "  | 1 | 2 | 3" << endl;
  cout << "----------------" << endl;
  for (int i = 0; i < 3; i++) {
    cout << i + 1 << " | " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << " |" << endl;
    cout << "----------------" << endl;
  }
}

bool checkWin(char board[3][3], char player) {
  
  for (int i = 0; i < 3; i++) {
    if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
      return true;
    }
  }
 
  for (int i = 0; i < 3; i++) {
    if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
      return true;
    }
  }

  if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
    return true;
  }
  if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
    return true;
  }

  return false;
}

bool checkDraw(char board[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (board[i][j] == '-') {
        return false;
      }
    }
  }
  return true;
}

bool makeMove(char board[3][3], char player) {
  int row, col;

  do {
    cout << player << ", enter your move (row, col): ";
    cin >> row >> col;
  } while (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != '-');

  board[row - 1][col - 1] = player;
  return true;
}

int main() {
  char board[3][3] = { '-', '-', '-',
                        '-', '-', '-',
                        '-', '-', '-' };
  char currentPlayer = 'X';
  bool gameOver = false;

  while (!gameOver) {
    displayBoard(board);

    if (makeMove(board, currentPlayer) && checkWin(board, currentPlayer)) {
      displayBoard(board);
      cout << currentPlayer << " wins!" << endl;
      gameOver = true;
    } else if (checkDraw(board)) {
      displayBoard(board);
      cout << "It's a draw!" << endl;
      gameOver = true;
    }

    currentPlayer = currentPlayer == 'X' ? 'O' : 'X';
  }

  cout << "Do you want to play again (y/n)? ";
  char choice;
  cin >> choice;

  if (choice == 'y' || choice == 'Y') {
    currentPlayer = 'X';
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        board[i][j] = '-';
      }
    }
    main();
  } else {
    cout << "Thanks for playing!" << endl;
  }
  return 0;
}

