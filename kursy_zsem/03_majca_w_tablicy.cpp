// Majca w tablicy

// Program pyta się 4 razy o wpisanie liczby, zapisuje je do
// kolejnych komórek tablic, po czym wypisuje wynik ich
// dodawania i mnożenia.

// Autor rozwiazania: Patryk Gonet
// Komentarze: Piotrek Sokołowski
#include <iostream>
using namespace std;
int liczby[4]; // tablica liczbowa o 4 komorkach: 0, 1, 2 i 3
// jest to zmienna o zasiegu globalnym, tzn. mozna uzyc ja w
// dowolnej funkcji w programie, w tym wypadku niepotrzebnie,
// obciaza to tylko bufor
int main()
{
    // int liczby[4];   tutaj powinna znalexc sie definicja naszej
    // tablicy, bylaby wtedy zmienna lokalna, dostepna tylko w
    // funkcji main
    cout << "Podaj liczbe 0: ";
    cin >> liczby[0];
    cout << "Podaj liczbe 1: ";
    cin >> liczby[1];
    cout << "Podaj liczbe 2: ";
    cin >> liczby[2];
    cout << "Podaj liczbe 3: ";
    cin >> liczby[3];
    cout << "Suma: " << liczby[0] + liczby[1] + liczby[2] + liczby[3] << endl;
    cout << "Iloczyn: " << liczby[0] * liczby[1] * liczby[2] * liczby[3] << endl;
    return 0;
}