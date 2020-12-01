// Wykorzystując rekurencję tworzymy funkcję obliczającą silnię.
// Silnia to to wynik mnożenia przez liczby od 1 do n.
// n silnia (n!) to 1 * 2 * 3 * ... * n
// 5 silnia (5!) to 1 * 2 * 3 * 4 * 5
// Rekurencja wywołanie funkcji przez samą siebie z innym parametrem

#include <iostream>

using namespace std;

int silnia(int x)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * silnia(n - 1);
    }
}

int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << liczba << "! = " << silnia(liczba) << endl;
    return 0;
}