#include "Tworzenie_pliku.h"
#include "Uczen.h"
#include<iostream>
#include<string>



Tworzenie_Pliku::Tworzenie_Pliku() {
	Nazwa_Pliku = "default";
}

void Tworzenie_Pliku::Zmien_Nazwe_Pliku() {
	cout << "podaj nazwe pliku: " << endl;
	cin >> Nazwa_Pliku;
}

void Tworzenie_Pliku::Wpisywanie_Uczniow(Uczen Wpisywany) {

	ofstream plik("C:\\Users\\szymo\\OneDrive\\Pulpit\\korki online\\Baza\\Baza.xls", ios::app);

	if (plik.is_open()) {//w tym warunku s¹ wpisywane dane do pliku
		plik << "imie:\t" << Wpisywany.Ret_Imie() << endl
			<< "nazwisko:\t" << Wpisywany.Ret_Nazwisko() << endl
			<< "wiek:\t" << Wpisywany.Ret_Wiek() << endl << endl;
	}

	else { cout << "plik nie zostal otworzony!" << endl; }

	plik.close();
}

void Tworzenie_Pliku::Wyczysc_Plik() {

	ofstream plik;
	plik.open("Baza.xls"); // je¿eli plik istnia³, to jego wielkoœæ ustawiana jest na 0
	plik.close();
}

void Tworzenie_Pliku::Wypisz_Uczniow() {

	char tab[20];
	int liczba_znakow=0;
	ifstream plik_czytanie("C:\\Users\\szymo\\OneDrive\\Pulpit\\korki online\\Baza\\Baza.xls");
	if (plik_czytanie.is_open()) { //sprawdzenie czy plik jest otwarty, warto tego u¿ywaæ poniewa¿ jeœli bêdziemy prosiæ o dostêp do pliku do którego nie bêdzie dostêpu wyst¹pi b³¹d
		cout << "Zawartosc pliku:" << endl;
		string linia;
		while (getline(plik_czytanie, linia))
		{
			//ta czêœæ kodu powsta³a poniewa¿ wyst¹pi³ problem z wypisywaniem danych uczniów w kosoli
		    // poiewa¿ s³owo nazwisko jest zbyt d³ugie w porównaniu do s³owa wiek czy imie
	
			int znaleziono1 = linia.find("imie");
			int znaleziono2 = linia.find("wiek");
			if (znaleziono1 != string::npos || znaleziono2 != string::npos) {
				if (znaleziono1 != string::npos) { //je¿eli znaleziono1 == "imie"
					cout << "imie:\t";
					int liczba_znakow = linia.copy(tab, 20, 5); //skopiuj znaki z lini po imieniu 
					tab[liczba_znakow] = 0; //zakoñczenie tablicy
					cout << tab << endl;
					
				}
				else if (znaleziono2 != string::npos) {
					cout << "wiek:\t";
					int liczba_znakow = linia.copy(tab, 20, 5);
					tab[liczba_znakow] = 0; //zakoñczenie tablicy
					cout << tab << endl;
				}

			}
			else cout << linia << endl;
		}
				
	}
	plik_czytanie.close(); //zamkniecie pliku
}