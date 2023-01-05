#include "Menu.h"


Menu::Menu() {

	Ilosc_uczni = 0;

}

void Menu::wykonaj(){

	int i;
	i = 0;
	wprowdz_uczniow();
	
	wypisz_uczniow();
	
}

void Menu::wprowdz_uczniow() {
	bool koniec = false;
	Uczen Buf;
do {
	Ilosc_uczni++;

	Buf.zapis();
	Uczniowie.push_back(Buf);

	cout << "Czy to by³ ostatni uczen?\n"
		<< "0.Nie\n"
		<< "1.Tak\n";
	cin >> koniec;


} while (!koniec);
}

void Menu::wypisz_uczniow() {
	for (int i = 0; i < Ilosc_uczni; i++) {
		Baza_Uczniow.wpisywanie_uczniow(Uczniowie[i]);
	}
}