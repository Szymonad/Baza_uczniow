#pragma once
#include "IZabezpoieczenia.h"
#include <iostream>
using namespace std;
class Zabezpieczenia : public IZabezpoieczenia
{


public:

	int Wpisywanie_liczby_calkowitej(string zmienna = "");//poporawic
	int Wpisywanie_liczby_calkowitej_Z_Przedzialem(int dolna_granica, int gorna_granica, string zmienna);//poprawic

	string Wpisywanie_znakow_bez_liczb(string zmienna);
	string Zmiana_poczatkowej_litery_na_duza(string wyraz);
	bool Jest_Liczba(string str);

	bool Jest_Litera(string str);
    

};

