#include <iostream>

using namespace std;

int fibonacci (int lim) {
    int a = 0, b = 1;
    while (a < lim) {
        a = a + b;
        int c = a;
        a = b;
        b = c;
    }
    
    if (a > b) {
        return b;
    }

    return a;
}

int main () {
    int n;
    cin >> n;
    cout << fibonacci(n)+1;
    return 0;
}