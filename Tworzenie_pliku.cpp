#include "Tworzenie_pliku.h"
#include "Uczen.h"



Tworzenie_pliku::Tworzenie_pliku() {
	//Tworzenie_pliku();
	Nazwa_Pliku = "default";
}

void Tworzenie_pliku::zmien_nazwe_pliku() {
	cout << "podaj nazwe pliku: " << endl;
	cin >> Nazwa_Pliku;
}

void Tworzenie_pliku::wpisywanie_uczniow(Uczen Wpisywany) {
	ofstream plik("Baza.xls", ios::app);
	plik << "imie:\t" << Wpisywany.Ret_Imie() << endl
		<< "nazwisko:\t" << Wpisywany.Ret_Nazwisko() << endl
		<< "wiek:\t" << Wpisywany.Ret_Wiek() << endl<<endl;
	plik.close();
}

void Tworzenie_pliku::wyczysc_plik() {
	//ofstream plik("Baza.xls", ios::app);
	//plik.clear();
	ofstream plik;
	plik.open("Baza.xls"); // je¿eli plik istnia³, to jego wielkoœæ ustawiana jest na 0
	// operacje
	plik.close();
}
