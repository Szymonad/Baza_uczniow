#include "Menu.h"
#include <windows.h>

Menu::Menu() {

	Ilosc_uczni = 0;

}

void Menu::wykonaj(){
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
			wprowdz_uczniow();
			break;

		case 2:
			wypisz_uczniow();
			break;

		case 3:
			wpisz_uczniow();
			break;

		case 4:
			wypisz_uczniow_z_bazy();
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




	//int i;
	//i = 0;
	//wprowdz_uczniow();
	//
	//wpisz_uczniow();
	
}

void Menu::wprowdz_uczniow() {
	bool koniec = false;
	Uczen Buf;
do {
	Ilosc_uczni++;

	Buf.zapis();
	Uczniowie.push_back(Buf);

	cout << "Czy to byl ostatni uczen?\n"
		<< "0.Nie\n"
		<< "1.Tak\n";
	cin >> koniec;


} while (!koniec);
}

void Menu::wpisz_uczniow() {
	for (int i = 0; i < Ilosc_uczni; i++) {
		Baza_Uczniow.wpisywanie_uczniow(Uczniowie[i]);
	}
	cout << "uczniowie zostali wpisani" << endl; 
	system("pause");
}

void Menu::wypisz_uczniow() {
	for (int i = 0; i < Ilosc_uczni; i++) {
		cout << i+1 << "," << endl;
		Uczniowie[i].Wypisz_Dane_Ucznia();
	}

	if (Uczniowie.empty())
		cout << "brak uczniow w pamieci" << endl;
	else
	cout << "wypisano uczniow" << endl;
	system("pause");
}

void Menu::wypisz_uczniow_z_bazy() {

	cout << "wypisano uczniow z bazy" << endl;
	system("pause");
}

void Menu::Wprowadz_Uczniow_Z_Pliku_Do_Pamieci() {

	cout << "zapisano uczniow do pamieci" << endl;
	system("pause");

}

void Menu::Usun_Uczniow_Z_Pamieci() {

	cout << "usunieto uczniow z pamieci" << endl;
	system("pause");

}

void Menu::Wyczysc_Plik() {
	//Baza_Uczniow.wyczysc_plik();
	cout << "baza uczniow wyczyszczona";

}
