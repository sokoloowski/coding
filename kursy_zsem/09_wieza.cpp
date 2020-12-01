// Wieza

// Wykorzystując poprzednie zadanie, narysuj wieżę
// jednostronną o podanej wielkości np. dla wejścia
// 4 program wypisze:

// o
// oo
// ooo
// oooo

#include <iostream>

using namespace std;

int main()
{
    int height;
    cout << "Podaj wysokosc wiezy: ";
    cin >> height;
    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "o";
        }
        cout << endl;
    }
    return 0;
}