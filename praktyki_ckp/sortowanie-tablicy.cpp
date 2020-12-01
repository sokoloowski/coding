#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
 
using namespace std;

int znajdzNajmniejszyPozostalyElement(int tab[], int rozmiar, int indeks);
void zamien (int tab[], int pierwszyIndeks, int drugiIndeks);

void sort (int tab[], int rozmiar) {
	for (int i=0; i<rozmiar; i++) {
		int indeks = znajdzNajmniejszyPozostalyElement(tab, rozmiar, i);
		zamien(tab, i, indeks);
	}	
}	

int znajdzNajmniejszyPozostalyElement(int tab[], int rozmiar, int indeks) {
	int indeksNajmniejszejWartosci = indeks;
	for (int i=indeks+1; i<rozmiar; i++) {
		if (tab[i] < tab[indeksNajmniejszejWartosci]) {
			indeksNajmniejszejWartosci = i;
		}
	}
	return indeksNajmniejszejWartosci;
}

void zamien (int tab[], int pierwszyIndeks, int drugiIndeks) {
	int tmp = tab[pierwszyIndeks];
	tab[pierwszyIndeks] = tab[drugiIndeks];
	tab[drugiIndeks] = tmp; 
}

void wyswietlTablice(int tab[], int rozmiar) {
	cout<<"{";
	for (int i=0; i<rozmiar;i++) {
		if(i!=0) {
			cout<<",";	
		}
		cout<<tab[i];
	}
	cout<<"}";
}


int main() {
	int tab[10];
	srand(time(NULL));
	for (int i=0; i<10; i++) {
		tab [i] = rand()%100;	
	}
	cout<<"Tablica wyjsciowa";
	wyswietlTablice(tab, 10);
	cout<<endl;
	sort (tab, 10);
	cout<<"Tablica posortowana";
	wyswietlTablice(tab, 10);
}
