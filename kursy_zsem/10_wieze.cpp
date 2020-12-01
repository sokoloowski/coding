// Wieze

// Wykorzystując poprzednie zadanie, narysuj wieże o podanej wielkości:
//     - jednostronną
//     - dwustronną
//     - odwroconą
//     - odwroconą dwustronną
// np. dla wejścia 4 program wypisze:

// o
// oo
// ooo
// oooo

//    oo
//   oooo
//  oooooo
// oooooooo

// oooo
// ooo
// oo
// o

// oooooooo
//  oooooo
//   oooo
//    oo

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
    cout << endl;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < height - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "o";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "o";
        }
        for (int j = 0; j < height - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = height; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "o";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = height; i > 0; i--)
    {
        for (int j = 0; j < height - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "o";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "o";
        }
        for (int j = 0; j < height - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}