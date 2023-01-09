#include "Menu.h"
#include <windows.h>

Menu::Menu() {
	Ilosc_Uczni = 0;
}

void Menu::Wykonaj(){
	int wybor;
	do {
		system("cls");
		cout << "******Witaj w bazie******" << endl
			<< "1. dodaj ucznow" << endl
			<< "2. wypisz uczniow" << endl
			<< "3. zapisz ucznow do bazy" << endl
			<< "4. wypisz uczniow z bazy" << endl
			<< "5. zapisz uczniow z bazy w pamieci" << endl
			<< "6. usun uczniow z pamieci" << endl
			<< "7. wyczysc baze uczniow" << endl
			<< "8. jesli chcesz zakonczyc program" << endl;
		cin >> wybor;
		system("cls");
		switch (wybor)
		{

		case 1:
			Wprowdz_Uczniow();
			break;

		case 2:
			Wypisz_Uczniow();
			break;

		case 3:
			Wpisz_Uczniow();
			break;

		case 4:
			Wypisz_Uczniow_Z_Bazy();
			break;

		case 5:
			Wprowadz_Uczniow_Z_Pliku_Do_Pamieci();
			break;
		case 6:
			Usun_Uczniow_Z_Pamieci();
			break;
		case 7:
			Wyczysc_Plik();
			break;

		}
	
	} while (wybor != 8);
}

void Menu::Wprowdz_Uczniow() {

	bool koniec = false;
	Uczen Buf;

do {
	Ilosc_Uczni++;

	Buf.Zapis();
	Uczniowie.push_back(Buf);

	cout << "Czy to byl ostatni uczen?\n"
		<< "0.Nie\n"
		<< "1.Tak\n";
	cin >> koniec;

} while (!koniec);
}

void Menu::Wypisz_Uczniow() {
	if (Uczniowie.empty())
		cout << "brak uczniow w pamieci" << endl;

	else {

		for (int i = 0; i < Ilosc_Uczni; i++) {
			cout << i + 1 << "." << endl;
			Uczniowie[i].Wypisz_Dane_Ucznia();
		}

		cout << "wypisano uczniow" << endl;
	}

	system("pause");
}

void Menu::Wpisz_Uczniow() {

	for (int i = 0; i < Ilosc_Uczni; i++) {
		Baza_Uczniow.Wpisywanie_Uczniow(Uczniowie[i]);
	}

	cout << "uczniowie zostali wpisani" << endl; 

	system("pause");
}

void Menu::Wypisz_Uczniow_Z_Bazy() {

	cout << "wypisano uczniow z bazy" << endl;
	Baza_Uczniow.Wypisz_Uczniow();
	system("pause");
}

void Menu::Wprowadz_Uczniow_Z_Pliku_Do_Pamieci() {

	cout << "zapisano uczniow do pamieci" << endl;
	system("pause");

}

void Menu::Usun_Uczniow_Z_Pamieci() {

	Uczniowie.clear();
	cout << "usunieto uczniow z pamieci" << endl;
	system("pause");
}

void Menu::Wyczysc_Plik() {
	string warunek;
	cout << "czy jestes pewny? Napisz ,Tak' jesli chcesz wyczyscic\n";
	cin >> warunek;

	if (warunek == "Tak") {
		//Baza_Uczniow.wyczysc_plik();
		cout << "baza uczniow wyczyszczona\n";
	}

	else cout << "baza uczniow nie zostala wyczyszczona\n";

	system("pause");
}
