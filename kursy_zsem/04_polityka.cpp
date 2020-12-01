// Polityka

// Prosty program, który po wprowadzeniu wieku stwierdzi, czy jesteś
// pełnoletni (18+) i czy możesz kandydować na prezydenta (35+).

#include <iostream>

using namespace std;

int main()
{
    int wiek;
    cin >> wiek;
    if (wiek >= 18)
    {
        cout << "Jesteś pelnoletni";
    }

    if (wiek >= 35)
    {
        cout << "\nMożesz kandydować na prezydenta";
    }
    return 0;
}