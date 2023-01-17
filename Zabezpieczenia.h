#pragma once
#include <iostream>
using namespace std;
class Zabezpieczenia
{


public:

	int Wpisywanie_liczby_calkowitej(string zmienna);
	int Wpisywanie_liczby_calkowitej_Z_Przedzialem(int dolna_granica, int gorna_granica, string zmienna);

	string Wpisywanie_znakow_bez_liczb(string zmienna);
	string Zmiana_poczatkowej_litery_na_duza(string wyraz);
	bool Jest_liczba(string str);
    

};

