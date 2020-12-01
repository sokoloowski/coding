#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main () {
    int n, m, ruchy = 0;

    // Pobranie rozmiaru szachownicy
    cin >> n;

    // Pobranie ilosci pionkow
    cin >> m;
    int szachownica[m][2];

    // Pobranie pozycji pionkow
    szachownica[0][0] = 0;
    szachownica[0][1] = 0;
    for (int _i = 1; _i <= m; _i++) {
        int w, k;
        cin >> w >> k;
        szachownica[_i][0] = w;
        szachownica[_i][1] = k;
    }
    szachownica[m+1][0] = n-1;
    szachownica[m+1][1] = n-1;

    for (int _i = 1; _i <= m+1; _i++) {
        int x = abs(szachownica[_i-1][0] - szachownica[_i][0]);
        int y = abs(szachownica[_i-1][1] - szachownica[_i][1]);
        if (min(x,y) != 0) {
            ruchy += min(x,y);
        } else {
            ruchy += max(x,y);
        }
    }

    cout << ruchy;
    return 0;
}