#include <iostream>
using namespace std;
int main() {
	int y;
	cout << "1. Notatnik\n2. Edytor rejestru\n3. Wylacz\nBrak innych opcji...\n";
	cin >> y;
	switch (y) {
		case 1:
			cout << "Notatnik";
			break;
		case 2:
			cout << "regedit";
			break;
		case 3:
			cout << "shutdown -s";
			break;
		default:
			cout << "Brak programu";
			break;
	}
}