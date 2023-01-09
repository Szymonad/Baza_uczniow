#pragma once
#include "Uczen.h"
#include "Tworzenie_pliku.h"
#include <vector>

using namespace std;
class Menu
{
	Tworzenie_Pliku Baza_Uczniow;
	int Ilosc_Uczni;
	vector <Uczen> Uczniowie;

public:

	Menu();
	void Wykonaj();
	void Wprowdz_Uczniow();
	void Wypisz_Uczniow();
	void Wpisz_Uczniow();
	void Wypisz_Uczniow_Z_Bazy();
	void Wprowadz_Uczniow_Z_Pliku_Do_Pamieci();
	void Usun_Uczniow_Z_Pamieci();
	void Wyczysc_Plik();

};

