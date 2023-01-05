#pragma once
#include "Uczen.h"
#include "Tworzenie_pliku.h"
#include <vector>

using namespace std;
class Menu
{
	Tworzenie_pliku Baza_Uczniow;
	int Ilosc_uczni;
	vector <Uczen> Uczniowie;

public:

	Menu();
	void wykonaj();
	void wprowdz_uczniow();
	void wpisz_uczniow();
	void wypisz_uczniow();
	void wypisz_uczniow_z_bazy();
	void Wprowadz_Uczniow_Z_Pliku_Do_Pamieci();
	void Usun_Uczniow_Z_Pamieci();
	void Wyczysc_Plik();

};

