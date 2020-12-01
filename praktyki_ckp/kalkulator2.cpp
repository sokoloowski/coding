#include <iostream>
#include <string>

using namespace std;

int dodawanie(int x, int y) {
	return x+y;
}

int odejmowanie(int x, int y) {
	return x-y;
}

int iloczyn(int x, int y) {
	return x*y;
}

int iloraz(int x, int y) {
	return x/y;
}

void print(int wynik) {
	cout<<"Wynik: "<<wynik;
}

int main() {
	string type;
	int typ;
	int x;
	int y;
	int wynik;
	cout<<"Co chesz zrobic?"<<endl;
	cout<<"Dostepne operacje: dodawanie, odejmowanie, mozenie, dzielenie"<<endl;
	
	cout<<"";
	cin>>type;
	
	if (type=="dodawanie") {
		typ=1;
	} else {
		if (type=="odejmowanie") {
			typ=2;
		} else {
			if (type=="mnozenie") {
				typ=3;
			} else {
				if (type=="dzielenie") {
					typ=4;
				} else {
					typ=0;
				}
			}
		}
	}
	
	cout<<"Podaj pierwsza liczbe: ";
	cin>>x;
	
	cout<<"Podaj druga liczbe: ";
	cin>>y;
	
	switch (typ) {
		case 1:
			wynik = dodawanie(x,y);
			print(wynik);
			break;
		case 2:
			wynik = odejmowanie(x,y);
			print(wynik);
			break;
		case 3:
			wynik = iloczyn(x,y);
			print(wynik);
			break;
		case 4:
			wynik = iloraz(x,y);
			print(wynik);
			break;
		default:
			cout << "Nieprawidlowa operacja! Aplikacja zakonczy dzialanie.";
			break;
	}
}

