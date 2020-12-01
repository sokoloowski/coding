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

int main() {
	string type;
	int x;
	int y;
	int wynik;
	cout<<"Co chesz zrobic?"<<endl;
	cout<<"Dostepne operacje: dodawanie, odejmowanie, mozenie, dzielenie"<<endl;
	
	cout<<"";
	cin>>type;
	
	if (type!="dodawanie"&&type!="odejmowanie"&&type!="mnozenie"&&type!="dzielenie") {
		cout<<"Nieprawidlowa operacja!"<<endl;
	} else {
		
	cout<<"Podaj pierwsza liczbe: ";
	cin>>x;
	
	cout<<"Podaj druga liczbe: ";
	cin>>y;
	
	if (type=="dodawanie") {
		wynik = dodawanie(x,y);
		cout<<"Wynik: "<<wynik;
	} else {
		if (type=="odejmowanie") {
			wynik = odejmowanie(x,y);
			cout<<"Wynik: "<<wynik;
		} else {
			if (type=="mnozenie") {
				wynik = iloczyn(x,y);
				cout<<"Wynik: "<<wynik;
			} else {
				wynik = iloraz(x,y);
				cout<<"Wynik: "<<wynik;
			}
		}
	}
		
	}

}


