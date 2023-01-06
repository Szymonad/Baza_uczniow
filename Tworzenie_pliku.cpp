#include "Tworzenie_pliku.h"
#include "Uczen.h"
#include<iostream>
#include<string>



Tworzenie_pliku::Tworzenie_pliku() {
	//Tworzenie_pliku();
	Nazwa_Pliku = "default";
}

void Tworzenie_pliku::zmien_nazwe_pliku() {
	cout << "podaj nazwe pliku: " << endl;
	cin >> Nazwa_Pliku;
}

void Tworzenie_pliku::wpisywanie_uczniow(Uczen Wpisywany) {
	ofstream plik("C:\\Users\\szymo\\OneDrive\\Pulpit\\korki online\\Baza\\Baza.xls", ios::app);
	if (plik.is_open()) {
		plik << "imie:\t" << Wpisywany.Ret_Imie() << endl
			<< "nazwisko:\t" << Wpisywany.Ret_Nazwisko() << endl
			<< "wiek:\t" << Wpisywany.Ret_Wiek() << endl << endl;
	}

	else { cout << "plik nie zostal otworzony!" << endl; }
	plik.close();
}

void Tworzenie_pliku::wyczysc_plik() {
	//ofstream plik("Baza.xls", ios::app);
	//plik.clear();
	ofstream plik;
	plik.open("Baza.xls"); // je¿eli plik istnia³, to jego wielkoœæ ustawiana jest na 0
	// operacje
	plik.close();
}

void Tworzenie_pliku::Wypisz_Uczniow() {
	//int i = 0;
	//string buf1, buf2;
	char tab[20];
	int liczba_znakow=0;
	ifstream plik_czytanie("C:\\Users\\szymo\\OneDrive\\Pulpit\\korki online\\Baza\\Baza.xls");
	if (plik_czytanie.is_open()) {
		cout << "Zawartosc pliku:" << endl;
		string linia;
		while (getline(plik_czytanie, linia/*, '\t'*/))
		{
			/*	i++;
				if (i % 2 == 0) {
					cout << linia << endl;
				}
				else cout << linia << "\t\t";*/
			//cout << linia<<endl;
			int znaleziono = linia.find("imie");
			int znaleziono2 = linia.find("wiek");
			if (znaleziono != string::npos || znaleziono2 != string::npos) {
				if (znaleziono != string::npos) {
					cout << "imie:\t";
					int liczba_znakow = linia.copy(tab, 20, 5);
					tab[liczba_znakow] = 0; //zakoñczenie tablicy
					cout << tab<<endl;
					
				}
				else if (znaleziono2 != string::npos) {
					cout << "wiek:\t";
					int liczba_znakow = linia.copy(tab, 20, 5);
					tab[liczba_znakow] = 0; //zakoñczenie tablicy
					cout << tab<<endl;
					


				}


				
			}
			else cout << linia << endl;

		}
				
	}
	plik_czytanie.close();



}