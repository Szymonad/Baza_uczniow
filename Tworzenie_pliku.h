#pragma once
#include <iostream>
#include "Uczen.h"
#include <fstream>
using namespace std;
class Tworzenie_pliku
{
	string Nazwa_Pliku;
	//Uczen Ananasek;


public:
	Tworzenie_pliku();
	void zmien_nazwe_pliku();
	void wpisywanie_uczniow(Uczen ananas);
	void wyczysc_plik();
	void Wypisz_Uczniow();

};

