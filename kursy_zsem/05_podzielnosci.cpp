// Podzielnosci

// Pyta o liczbę, i wypisuje kolejno czy jest podzielna przez:
//     - 2
//     - 3
//     - 5
//     - 7

#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cin >> liczba;

    if (liczba % 2 == 0)
    {
        cout << "TAK\n";
    }
    else
    {
        cout << "NIE\n";
    }

    if (liczba % 3 == 0)
    {
        cout << "TAK\n";
    }
    else
    {
        cout << "NIE\n";
    }

    if (liczba % 5 == 0)
    {
        cout << "TAK\n";
    }
    else
    {
        cout << "NIE\n";
    }

    if (liczba % 7 == 0)
    {
        cout << "TAK\n";
    }
    else
    {
        cout << "NIE\n";
    }
    return 0;
}