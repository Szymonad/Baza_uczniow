#include "Menu.h"
#include <windows.h>
#include "Zabezpieczenia.h"
#include <vector>

//Zabezpieczenia Zabezpiecznie;

Menu::Menu() {
	Ilosc_Uczni = 0;
}

void Menu::Wykonaj(){
	Zabezpieczenia Zabezpiecznie;
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
			<< "8. usun pojedynczego ucznia z pamieci" << endl
			<< "9. jesli chcesz zakonczyc program" << endl;
		wybor = Zabezpiecznie.Wpisywanie_liczby_calkowitej_Z_Przedzialem(0, 9, "wybor");
		//cin >> wybor;
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

		case 8:
			Usun_Ucznia();
			break;

	/*	deafult: 
			Default();
			break;*/
		


		}
	
	} while (wybor != 9);
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

	if (Warunek("uczniow z pamieci")) {
		Uczniowie.clear();
		cout << "usunieto uczniow z pamieci" << endl;
	}

	else cout << "uczniowie nie zostali usunieci z pamieci\n";

	system("pause");
}

void Menu::Wyczysc_Plik() {
	
	if (Warunek("baze uczniow")) {
		//Baza_Uczniow.wyczysc_plik();
		cout << "baza uczniow wyczyszczona\n";
	}

	else cout << "baza uczniow nie zostala wyczyszczona\n";

	system("pause");
}

void Menu::Usun_Ucznia() {

	Zabezpieczenia Zabezpiecznie;
	cout << Uczniowie.size();

	if (!Uczniowie.empty()) {
		int numer_ucznia;
		numer_ucznia = Zabezpiecznie.Wpisywanie_liczby_calkowitej_Z_Przedzialem(0, Uczniowie.size(),"numer ucznia");
		Uczniowie.erase(Uczniowie.begin() + numer_ucznia);
		cout << "usunieteo ucznia nr: " << numer_ucznia << endl;
	}
	else
	{
		cout << "Brak uczniow w pamieci" << endl;
	}

	system("pause");

}
//
//void Menu::Default(){
//	cout << "podano bledna wartosc" << endl;
//	system("pause");
//}

bool Menu::Warunek(string do_czego) {
	string potwierdzenie;
	cout << "czy jestes pewny? Napisz ,Tak' jesli chcesz wyczyscic " << do_czego << endl;
	cin >> potwierdzenie;
	bool warunek = false;

	if (potwierdzenie == "Tak") { //nalezy pamietac by napisaæ ,Tak' z du¿ej litery
		cout << "wpisano ,Tak'\n";
		warunek = true;
	}

	else {
		cout << "nie wpisano ,Tak'\n";
		warunek = false;
	}
	//system("pause");

	return warunek;
}

