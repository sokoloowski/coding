// Kalkulator

// Wracając do programu 6_kalkulator z Lekcji 2 zmieniamy program
// żeby używał funkcji:
//     - Wypisującej 4 możliwe opcje (Dodawanie, Odejmowanie...)
//     - Wykonującej dane działanie matematyczne z/bez argumentów

#include <iostream>

using namespace std;

void operacje()
{
    cout << "Dzialania:\n\t1. Dodawanie\n\t2. Odejmowanie\n\t3. Mnozenie\n\t4. Dzielenie" << endl;
}

float dodawanie(float _x, float _y) {
    return _x + _y;
}

float odejmowanie(float _x, float _y) {
    return _x - _y;
}

float mnozenie(float _x, float _y) {
    return _x * _y;
}

float dzielenie(float _x, float _y) {
    return _x / _y;
}

int main()
{
    int op;
    float x, y, w;
    operacje();
    cin >> op;
    cout << "Liczba 1: ";
    cin >> x;
    cout << "Liczba 2: ";
    cin >> y;
    switch (op)
    {
    case 1:
        cout << dodawanie(x, y);
        break;

    case 2:
        cout << odejmowanie(x, y);
        break;

    case 3:
        cout << mnozenie(x, y);
        break;

    case 4:
        cout << dzielenie(x, y);
        break;

    default:
        cout << "Wybrales zla opcje! Konczenie pracy programu!";
        break;
    }
    return 0;
}