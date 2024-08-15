#include <iostream>
#include <cstdlib>
using namespace std;

void print();
int checkwin();

char board[] = {'0','1','2','3','4','5','6','7','8','9'};
char mark = 'X';
int player = 1;

int main(){
    cout<<"start game";
    int input, status = -1;
    print();
    
    while (status == -1) {
        player = (player % 2)? 1 : 2;
        cout << "Number for player " << player << ": ";
        cin >> input;

        if (input < 1 || input > 9 || board[input] == 'X' || board[input] == 'O') {
            cout << "Invalid command\n";
            continue;
        }

        board[input] = mark;
        print();
        int result = checkwin();
        
        if (result == 1) {
            cout << "Player " << player << " is the winner!\n";
            return 0;
        } else if (result == 0) {
            cout << "It's a draw!\n";
            return 0;
        }

        mark = (player == 1)? 'X' : 'O';
        player++;
    }
    
    return 0;
}

void print() {
    system("cls");
    cout << "\n\n";
    
    cout << "  |  |  \n";
    cout << " " << board[1] << " | " << board[2] << " | " << board[3] << "\n";
    cout << "  |  |  \n";
    cout << " " << board[4] << " | " << board[5] << " | " << board[6] << "\n";
    cout << "  |  |  \n";
    cout << " " << board[7] << " | " << board[8] << " | " << board[9] << "\n";
}

int checkwin() {
    // Check horizontal wins
    if (board[1] == board[2] && board[2] == board[3]) {
        return 1;
    }
    if (board[4] == board[5] && board[5] == board[6]) {
        return 1;
    }
    if (board[7] == board[8] && board[8] == board[9]) {
        return 1;
    }

    // Check vertical wins
    if (board[1] == board[4] && board[4] == board[7]) {
        return 1;
    }
    if (board[2] == board[5] && board[5] == board[8]) {
        return 1;
    }
    if (board[3] == board[6] && board[6] == board[9]) {
        return 1;
    }

    // Check diagonal wins
    if (board[1] == board[5] && board[5] == board[9]) {
        return 1;
    }
    if (board[3] == board[5] && board[5] == board[7]) {
        return 1;
    }

    // Check for draw
    for (int i = 1; i < 10; i++) {
        if (board[i] != 'X' && board[i] != 'O') {
            return -1;  // Game is not over yet
        }
    }
    return 0;  // It's a draw
}
