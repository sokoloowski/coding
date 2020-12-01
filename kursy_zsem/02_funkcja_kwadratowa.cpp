// Funkcja kwadratowa

// Podając a, b, c i x wypisz wzór i wynik funkcji f(x)
// jeżeli: f(x) = a * x^2 + b * x + c.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, x;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;
    cout << "Podaj x: ";
    cin >> x;
    cout << "Wzor f(x) = " << a << "x^2 + " << b << "x + " << c << endl;
    cout << "Dla x == " << x << ", f(x) = " << a * pow(x, 2) + b * x + c;
    return 0;
}