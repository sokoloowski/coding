// Prostokąt

// Wykorzystując pętle, narysuj prostokąt z literek o,
// o wielkości podanej przez użytkownika np. dla
// wejścia 6 i 3 program wypisze prostokąt:

// oooooo
// oooooo
// oooooo

#include <iostream>

using namespace std;

int main()
{
    int width, height;
    cout << "Podaj szerokosc i wysokosc:" << endl;
    cin >> width >> height; // wprowadzane dane oddziela sie spacja lub enterem
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << "o";
        }
        cout << endl;
    }
    return 0;
}