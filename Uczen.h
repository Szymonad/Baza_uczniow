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
	void zapis();
	void wypisz();
	void przypisanie(int wiek, string imie, string nazwisko);
	int Ret_Wiek();
	string Ret_Imie();
	string Ret_Nazwisko();
	void Wypisz_Dane_Ucznia();





};

