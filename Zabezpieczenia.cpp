#include "Zabezpieczenia.h"
#include<iostream>
#include<string>
#include"ctype.h"

using namespace std;

int Zabezpieczenia::Wpisywanie_liczby_calkowitej(string zmienna) {

    int liczba;
     do
     { 
        cin.clear(); //czysci falge bledu strumienia
        cin.ignore(numeric_limits < streamsize >::max(), '\n'); //usuwa wszystkie znaki z buforu strumienia
        cin >> liczba;
        if (!cin.good()) {
            cout << "bledny parametr:" << zmienna << endl
                << "sprobuj ponownie, uzywaj tylko cyfr:\n";
        }
    }while (!cin.good());// warunek niepoprawnosci strumienia

    return liczba;
}

int Zabezpieczenia::Wpisywanie_liczby_calkowitej_Z_Przedzialem(int dolna_granica, int gorna_granica,string zmienna) {

    int liczba;
    int buf;

    if (dolna_granica < gorna_granica) {}

    else {
        buf = gorna_granica;
        gorna_granica = dolna_granica;
        dolna_granica = buf;
    }



    do
    {
        cin.clear(); //czysci falge bledu strumienia
        cin.ignore(numeric_limits < streamsize >::max(), '\n'); //usuwa wszystkie znaki z buforu strumienia
        cin >> liczba;
        if (!cin.good()) {
            cout << "bledny parametr:" << zmienna << endl
                << "sprobuj ponownie, uzywaj tylko cyfr:\n";
        }
    } while (!cin.good() || liczba<dolna_granica || liczba>gorna_granica);// warunek niepoprawnosci strumienia

    return liczba;
}

string Zabezpieczenia::Wpisywanie_znakow_bez_liczb(string zmienna) {

    string wyraz;
    do {
        cin >> wyraz;
        wyraz = Zmiana_poczatkowej_litery_na_duza(wyraz);
        if (Jest_liczba(wyraz))
            cout <<"bledny parametr: "<<zmienna<<endl << "Sprobuj ponownie, uzywaj tylko liter:\n";
       // else
            //cout << "wpisano poprawnie\n";

    } while (Jest_liczba(wyraz));
   
    return wyraz;

}


string Zabezpieczenia::Zmiana_poczatkowej_litery_na_duza(string wyraz) {

    char znak;
    znak = wyraz[0]; //wczytujemy pierwszy znak

        if (znak > 95) //gdy napotkamy ma³¹ literê zamieniamy j¹ na du¿¹
            znak = (char)(znak - 32); //przesuwaj¹c o 32 miejsca w kodzie ASCII
       
        wyraz[0] = znak;
       
        return wyraz;

}

bool Zabezpieczenia::Jest_liczba(string str)
{
    bool czy_jest_liczba = false;
    char c;
    for (int i = 0; i < str.size(); i++) {
        c = str[i];

        // cout << endl << endl << isalpha(c) << endl;
        if (isalpha(c) == 0)
            czy_jest_liczba = true;
    }
    return czy_jest_liczba;

}
