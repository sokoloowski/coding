// Quiz1

// Jedno pytanie, 4 odpowiedzi, 1 poprawna. Wielkość
// litery odpowiedzi nie ma znaczenia. Jeśli żadna
// odpowiedź nie będzie udzielona, program ma się
// wrócić do zadania pytania raz jeszcze, używając
// instrukcji goto.

#include <iostream>

using namespace std;

int main()
{
    char valid{'b'},
        odp{};
question:
    cout << "Pytanie pytanie pytanie pytanie pytanie:\n\ta) odpowiedz a\n\tb) odpowiedz b\n\tc) odpowiedz c\n\td) odpowiedz d\n\nTwoja odpowiedz: ";
    cin >> odp;
    if (tolower(odp) != valid)
    {
        cout << "Zla odpowiedz!" << endl;
        goto question;
    }
    cout << "Dobrzeeee!" << endl;
    return 0;
}