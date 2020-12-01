#include <iostream>
#include <string>

using namespace std;
string moves[9];

void clear() {
    system("cls");
}

int checkWin(string player) {
    if (
        ((moves[0] == player) && (moves[1] == player) && (moves[2] == player)) ||
        ((moves[0] == player) && (moves[4] == player) && (moves[8] == player)) ||
        ((moves[0] == player) && (moves[3] == player) && (moves[6] == player)) ||
        ((moves[1] == player) && (moves[4] == player) && (moves[7] == player)) ||
        ((moves[2] == player) && (moves[4] == player) && (moves[6] == player)) ||
        ((moves[2] == player) && (moves[5] == player) && (moves[8] == player)) ||
        ((moves[3] == player) && (moves[4] == player) && (moves[5] == player)) ||
        ((moves[6] == player) && (moves[7] == player) && (moves[8] == player)) ||
        ) {
            cout << "Koniec! Wygrał zawodnik " << player << "!";
            i = 9;
        } else {
            cout << "Koniec! Mamy remis!";
        }
}

int main() {
    int optMainMenu;
    int move;

    cout << endl;
    cout << endl;
    cout << "d888888b d888888b  .o88b.     d888888b  .d8b.   .o88b.     d888888b  .d88b.  d88888b" << endl;
    cout << "`~~88~~'   `88'   d8P  Y8     `~~88~~' d8' `8b d8P  Y8     `~~88~~' .8P  Y8. 88'    " << endl;
    cout << "   88       88    8P             88    88ooo88 8P             88    88    88 88ooooo" << endl;
    cout << "   88       88    8b             88    88~~~88 8b             88    88    88 88~~~~~" << endl;
    cout << "   88      .88.   Y8b  d8        88    88   88 Y8b  d8        88    `8b  d8' 88.    " << endl;
    cout << "   YP    Y888888P  `Y88P'        YP    YP   YP  `Y88P'        YP     `Y88P'  Y88888P" << endl;
    cout << endl;
    cout << "                                     MULTIPLAYER                                    " << endl;
    cout << endl;
    cout << endl;
    cout << "Wybierz opcje:" << endl;
    cout << "\t1. Nowa gra" << endl;
    cout << "\t2. Wyjscie" << endl;
    cin >> optMainMenu;

    switch (optMainMenu) {
        case 1:
            clear();
            for (int k = 0; k < 9; k++) {
                moves[k] = k;
            }
            for (int i = 0; i < 9; i++) {
                //Plansza do gry
                cout << " " << moves[0] << " | " << moves[1] << " | " << moves[2] << " " << endl;
                cout << "---+---+---" << endl;
                cout << " " << moves[3] << " | " << moves[4] << " | " << moves[5] << " " << endl;
                cout << "---+---+---" << endl;
                cout << " " << moves[6] << " | " << moves[7] << " | " << moves[8] << " " << endl;
                cout << endl;
                if (i%2 == 0) {
                    cout << "Ruch X" << endl << "Podaj numer pola: ";
                    cin >> move;
                    moves[move] = "x";
                    checkWin("x");
                } else {
                    cout << "Ruch O" << endl << "Podaj numer pola: ";
                    cin >> move;
                    moves[move] = "o";
                    checkWin("o");
                }
                clear();
            }
            break;
        case 2:
            break;
        default:
            cout << "Podales nieprawidlowa opcje! Uruchom program jeszcze raz."
            break;
    }
}