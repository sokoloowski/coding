#include <iostream>

using namespace std;

int silnia (int x) {
	int i = x;
	x--;
	while (x > 0) {
		i = i * x;
		x--;
	}
	return i;
}

int last_non_zero(int x) {
	while (x%10 == 0) {
		x = x/10;
	}
	return x%10;
}

int main () {
    int n;
    cin >> n;
    int sil = silnia(n);
	cout << last_non_zero(sil);
	return 0;
}