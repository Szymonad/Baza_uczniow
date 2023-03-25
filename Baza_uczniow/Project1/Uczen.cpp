#include "Uczen.h"

Zabezpieczenia Zabezpiecznie;
Uczen::Uczen() {

	Wiek = NULL;
	Imie.clear();
	Nazwisko.clear();
}

Uczen::~Uczen() {

	Wiek = NULL;
	Imie.clear();
	Nazwisko.clear();
}

void Uczen::Zapis() {
	cout << "Podaj imie" << endl;
	Imie = Zabezpiecznie.Wpisywanie_znakow_bez_liczb("Imie");

	cout << "Podaj nazwisko" << endl;
	Nazwisko = Zabezpiecznie.Wpisywanie_znakow_bez_liczb("Nazwisko");

	cout << "Podaj wiek" << endl;
	Wiek = Zabezpiecznie.Wpisywanie_liczby_calkowitej("Wiek");
}

void Uczen::Wypisz() {

	cout << "nazwisko: " << Nazwisko << endl;
	cout << "imie: " << Imie << endl;
	cout << "wiek: " << Wiek << endl;
}

void Uczen::Przypisanie(int wiek, string imie, string nazwisko) {
	Wiek = wiek;
	Imie = imie;
	Nazwisko = nazwisko;
}

//string Uczen::Ret_Imie() {
//	return Imie;
//}
//
//string Uczen::Ret_Nazwisko() {
//	return Nazwisko;
//}
//
//int Uczen::Ret_Wiek() {
//
//	return Wiek;
//}

void Uczen::Wypisz_Dane_Ucznia() {

	cout << "imie:    \t" << Imie << endl
		<< "nazwisko:\t" << Nazwisko << endl
		<< "wiek:    \t" << Wiek << endl << endl;
}