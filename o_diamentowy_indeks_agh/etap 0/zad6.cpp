#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>

using namespace std;

bool is_prime (int a) {
    if (a % 2 == 0) {
        return (a == 2);
    }

    for (int i = 3; i <= sqrt(a); i += 2) {
        if (a % i == 0) {
            return false;
        }
    }

    return true;
}

int from_bin(string s) {
    long n = atol(s.c_str());
    long factor = 1;
    int total = 0;

    while (n != 0) {
        total += (n%10) * factor;
        n /= 10;
        factor *= 2;
    }

    return total;
}

int main () {
    int l = 0;
    string bin;
    cin >> bin;
    for (int i = 1; i <= bin.size(); i++) {
        // Podzial na dwie czesci
        string cz1 = bin.substr(0,i);
        string cz2 = bin.substr(i);

        if (from_bin(cz1) < from_bin(cz2) && cz2.substr(0,1) == "1" && is_prime(from_bin(cz1)) && is_prime(from_bin(cz2))) {
            l++;
        }
    }
    cout << l;
}