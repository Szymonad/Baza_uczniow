#pragma once
#include <iostream>
#include "Uczen.h"
#include <fstream>

using namespace std;
class Tworzenie_Pliku
{
	string Nazwa_Pliku;

public:

	Tworzenie_Pliku();
	void Zmien_Nazwe_Pliku();
	void Wpisywanie_Uczniow(Uczen ananas);
	void Wyczysc_Plik();
	void Wypisz_Uczniow();

};

