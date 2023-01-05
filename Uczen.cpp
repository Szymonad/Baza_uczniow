#include "Uczen.h"

Zabezpieczenia Zabezpiecznie;
Uczen::Uczen() {
	Wiek = NULL;
	Imie.clear();
	Nazwisko.clear();
	//zapis();
}

Uczen::~Uczen() {
	Wiek = NULL;
	Imie.clear();
	Nazwisko.clear();
}

void Uczen::zapis() {
	cout << "Podaj imie" << endl;
	Imie = Zabezpiecznie.Wpisywanie_znakow_bez_liczb("Imie");
	//cin >> Imie;

	cout << "Podaj nazwisko" << endl;
	Nazwisko = Zabezpiecznie.Wpisywanie_znakow_bez_liczb("Nazwisko");
	//cin >> Nazwisko;

	cout << "Podaj wiek" << endl;
	Wiek = Zabezpiecznie.Wpisywanie_liczby_calkowitej("Wiek");
	//cin >> Wiek;
}

void Uczen::wypisz() {
	cout << "nazwisko: " << Nazwisko << endl;
	cout << "imie: " << Imie << endl;
	cout << "wiek: " << Wiek << endl;

}

void Uczen::przypisanie(int wiek, string imie, string nazwisko) {
	Wiek = wiek;
	Imie = imie;
	Nazwisko = nazwisko;
}

string Uczen::Ret_Imie() {

	return Imie;
}

string Uczen::Ret_Nazwisko() {

	return Nazwisko;
}

int Uczen::Ret_Wiek() {

	return Wiek;
}