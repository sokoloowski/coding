#include <iostream>
#include <cmath>

using namespace std;

// Sumowanie n liczb po przecinku
float suma_po_przecinku (float liczba, int ile) {
    int wynik = 0;
    for (int i = 0; i < ile; i++) {
        liczba = (liczba - floor(liczba)) * 10;
        wynik = wynik + int(liczba);
    }
    return wynik;
}

int main () {
    int m, n;
    cin >> m >> n;
    cout << suma_po_przecinku(sqrt(m), n);
    return 0;
}