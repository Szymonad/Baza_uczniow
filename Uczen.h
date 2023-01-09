#pragma once
#include "Zabezpieczenia.h"
#include <iostream>

using namespace std;
class Uczen
{
	int Wiek;
	string Imie;
	string Nazwisko;

public:

	Uczen();
	~Uczen();
	void Zapis();
	void Wypisz();
	void Przypisanie(int wiek, string imie, string nazwisko);
	int Ret_Wiek() { return Wiek; }
	string Ret_Imie() { return Imie; }
	string Ret_Nazwisko() { return Nazwisko; }
	void Wypisz_Dane_Ucznia();





};

