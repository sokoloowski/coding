// Zgadywanka

// Wykorzystując funkcję rand() utwórz grę-zgadywankę
// liczby z przedziału 1-100, i pyta użytkownika dopóki
// nie zgadnie, gdzie jeśli wprowadzi za dużą liczbę lub
// za małą, program odpowie w odpowiednim stylu. Na koniec
// poda ile razy była podjęta próba zgadnięcia.
// rand() zwraca liczbę pseudolosową, i aby wyciągnąć z
// niej zakres (A - B) wpisujemy int r = A + rand()%(B - A)

#include <iostream>

using namespace std;

int main()
{
    int r = 1 + rand() % 99,
        i = 0,
        u;
    cout << "Wylosowalem sobie liczbe od 1 do 100, zgadnij jaka!" << endl;
    cin >> u;
    while (r != u)
    {
        if (u > r)
        {
            cout << "Zle! To za duzo!" << endl;
        }
        else if (u < r)
        {
            cout << "Zle! To za malo!" << endl;
        }
        cin >> u;
        i++;
    }
    cout << "Dobrze! Trafiles za " << i << " razem!";

    return 0;
}