// Podzielnosci (zadanie 5 z Lekcji 2)

// Pyta o liczbę, i wypisuje kolejno czy jest podzielna przez:
//     - 2
//     - 3
//     - 5
//     - 7

#include <iostream>

using namespace std;

void podzielna(int liczba, int dzielnik)
{
    if (liczba % dzielnik == 0)
    {
        cout << "TAK\n";
    }
    else
    {
        cout << "NIE\n";
    }
}

int main()
{
    int liczba;
    cin >> liczba;
    podzielna(liczba, 2);
    podzielna(liczba, 3);
    podzielna(liczba, 5);
    podzielna(liczba, 7);
    return 0;
}