#include <iostream>
using namespace std;

class TicTacToe {
private:
    char board[3][3];
    char player;

public:
    // Constructor to initialize board and first player
    TicTacToe() {
        player = 'X';
        int num = 1;
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                board[i][j] = '0' + num++; // Fill with 1-9
    }

    // Display the board
    void display() {
        cout << "\n";
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                cout << " " << board[i][j];
                if(j<2) cout << " |";
            }
            cout << "\n";
            if(i<2) cout << "---|---|---\n";
        }
    }

    // Take player move
    void move() {
        int m;
        while(true) {
            cout << "\nPlayer " << player << ", enter your move (1-9): ";
            cin >> m;
            if(m<1 || m>9) {
                cout << "Invalid! Enter 1-9.\n";
                continue;
            }
            int r = (m-1)/3;
            int c = (m-1)%3;
            if(board[r][c]=='X' || board[r][c]=='O') {
                cout << "Cell occupied! Try again.\n";
                continue;
            }
            board[r][c] = player;
            break;
        }
    }

    // Check if current player wins
    bool win() {
        // Rows, Columns
        for(int i=0;i<3;i++)
            if((board[i][0]==player && board[i][1]==player && board[i][2]==player) ||
               (board[0][i]==player && board[1][i]==player && board[2][i]==player))
                return true;
        // Diagonals
        if((board[0][0]==player && board[1][1]==player && board[2][2]==player) ||
           (board[0][2]==player && board[1][1]==player && board[2][0]==player))
            return true;
        return false;
    }

    // Switch player
    void switchPlayer() {
        player = (player=='X') ? 'O' : 'X';
    }

    // Play the game
    void play() {
        int moves = 0;
        while(true) {
            display();
            move();
            moves++;
            if(win()) {
                display();
                cout << "\nPlayer " << player << " wins! 🎉\n";
                break;
            } else if(moves==9) {
                display();
                cout << "\nIt's a draw! 🤝\n";
                break;
            }
            switchPlayer();
        }
    }
};

int main() {
    cout << "Tic-Tac-Toe Game!\nPlayer 1: X  Player 2: O\n";
    TicTacToe game;
    game.play();
    return 0;
}