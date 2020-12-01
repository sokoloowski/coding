#include <iostream>
#include <string>

using namespace std;

enum KolorTeczy {
	KT_CZERWONY, KT_POMARANCZOWY, KT_ZOLTY, KT_ZIELONY, KT_NIEBIESKI, KT_INDYGO, KT_FIOLETOWY
};

KolorTeczy wybrany_kolor = KT_CZERWONY;

int main() {
	int color;
	
	cout<<"Kolor: ";
	cin>>color;
	
	switch (color) {
		case 1:
			cout<<"czerwony";
			system("color 4c");	
			break;
		case 2:
			cout<<"niebieski";
			system("color 9b");	
			break;
		case 3:
			cout<<"zolty";
			system("color e7");	
			break;	
		case 4:
			cout<<"zielony";
			system("color a6");
			break;						
	}
}
