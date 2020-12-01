// Kalkulator

// Program wypisuje nam 4 opcje działania:
// - Dodawanie
// - Odejmowanie
// - Mnożenie
// - Dzielenie
// Posługuje się 4 zmiennymi: op, x, y, w (opcja, liczba 1, 2, wynik).
// Zależnie od op wykonuje dane instrukcje.

#include <iostream>

using namespace std;

int main()
{
    int op;
    float x, y, w;
    cout << "Dzialania:\n\t1. Dodawanie\n\t2. Odejmowanie\n\t3. Mnozenie\n\t4. Dzielenie" << endl;
    cin >> op;
    cout << "Liczba 1: ";
    cin >> x;
    cout << "Liczba 2: ";
    cin >> y;
    switch (op)
    {
    case 1:
        cout << x + y;
        break;

    case 2:
        cout << x - y;
        break;

    case 3:
        cout << x * y;
        break;

    case 4:
        cout << x / y;
        break;

    default:
        cout << "Wybrales zla opcje! Konczenie pracy programu!";
        break;
    }
    return 0;
}