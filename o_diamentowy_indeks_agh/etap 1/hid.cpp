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

int main () {
    int r, c, o = 0;
    cin >> r >> c;
    string m[r];
    for (int i = 0; i < r; i++) {
        cin >> m[i];
    }

    for (int _a = 0; _a < c; _a++) {
        for (int _b = 0; _b < c; _b++) {
            for (int _c = 0; _c < c; _c++) {
                string to_check = m[0].substr(_a,1) + m[1].substr(_b,1) + m[2].substr(_c,1);
                if ( is_prime ( atoi ( to_check.c_str() ) ) ) {
                    o++;
                }
            }
        }
    }
    cout << o;
    return 0;
}