#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int
    n,  // liczba docelowych odcinkow
    dl, // docelowa dlugosc
    al, // oryginalna dlugosc
    res;
    cin >> n >> dl >> al;

    if (dl > al) {
        res = n*dl - n*al - 1;
    } else if (dl == al) {
        res = 0;
    } else {
        res = floor((n*al) / (n*dl)) + 1;
    }
    cout << res;
    return 0;
}