#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

string dekompr(string _s) {
    string wynik = "";
    if (_s.find("[") != string::npos) {
        int iPocz = _s.find("[");
        int iKonc = _s.rfind("]");
        wynik = _s.substr(0, iPocz);
        string zakodowane = _s.substr(iPocz + 1, iKonc - iPocz - 1);
        int licznik = atoi(zakodowane.substr(0, 1).c_str());
        string ciagZnakow = zakodowane.substr(1);
        for (int i = 0; i < licznik; i++) {
            wynik += dekompr(ciagZnakow);
        }
        wynik += _s.substr(iKonc+1);
    } else {
        wynik = _s;
    }
    return wynik;
}


int main () {
    string str_in;
    cin >> str_in;
    cout << dekompr(str_in);
    return 0;
}