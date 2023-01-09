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

	if (plik.is_open()) {//w tym warunku s� wpisywane dane do pliku
		plik << "imie:\t" << Wpisywany.Ret_Imie() << endl
			<< "nazwisko:\t" << Wpisywany.Ret_Nazwisko() << endl
			<< "wiek:\t" << Wpisywany.Ret_Wiek() << endl << endl;
	}

	else { cout << "plik nie zostal otworzony!" << endl; }

	plik.close();
}

void Tworzenie_Pliku::Wyczysc_Plik() {

	ofstream plik;
	plik.open("Baza.xls"); // je�eli plik istnia�, to jego wielko�� ustawiana jest na 0
	plik.close();
}

void Tworzenie_Pliku::Wypisz_Uczniow() {

	char tab[20];
	int liczba_znakow=0;
	ifstream plik_czytanie("C:\\Users\\szymo\\OneDrive\\Pulpit\\korki online\\Baza\\Baza.xls");
	if (plik_czytanie.is_open()) { //sprawdzenie czy plik jest otwarty, warto tego u�ywa� poniewa� je�li b�dziemy prosi� o dost�p do pliku do kt�rego nie b�dzie dost�pu wyst�pi b��d
		cout << "Zawartosc pliku:" << endl;
		string linia;
		while (getline(plik_czytanie, linia))
		{
			//ta cz�� kodu powsta�a poniewa� wyst�pi� problem z wypisywaniem danych uczni�w w kosoli
		    // poiewa� s�owo nazwisko jest zbyt d�ugie w por�wnaniu do s�owa wiek czy imie
	
			int znaleziono1 = linia.find("imie");
			int znaleziono2 = linia.find("wiek");
			if (znaleziono1 != string::npos || znaleziono2 != string::npos) {
				if (znaleziono1 != string::npos) { //je�eli znaleziono1 == "imie"
					cout << "imie:\t";
					int liczba_znakow = linia.copy(tab, 20, 5); //skopiuj znaki z lini po imieniu 
					tab[liczba_znakow] = 0; //zako�czenie tablicy
					cout << tab << endl;
					
				}
				else if (znaleziono2 != string::npos) {
					cout << "wiek:\t";
					int liczba_znakow = linia.copy(tab, 20, 5);
					tab[liczba_znakow] = 0; //zako�czenie tablicy
					cout << tab << endl;
				}

			}
			else cout << linia << endl;
		}
				
	}
	plik_czytanie.close(); //zamkniecie pliku
}