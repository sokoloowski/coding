#include <iostream>

using namespace std;

int main () {
    int n, k, i = 0, result = 0;
    cin >> n;
    int t[n];
    for (int x = 0; x < n; x++) {
        cin >> t[x];
    }

    while (i < n-1) {
        k = t[i]-1;
        if (k > n-1-i) {
            k = n-1-i;
        }
        while (t[i]%k != 0 && k > 2) {
            --k;
        }
        i+=k;
        result++;
    }

    cout << result;
    return 0;
}