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
    //jesli wpisze siê z pamoc¹ tej metody np "1hhh" to pêtla siê zakonczy, nalezy przejsc na string poniewaz to hhh nie zostaje usuniete i jest nadpisywane w polejnym strumieniu wejscia
    int liczba;
    int buf; // aaakkkk
    int podglad;
    bool czy_jest_znak_nowej_lini;
    string wyraz;
    cin >> liczba;
   // wyraz = to_string(liczba);

    if (dolna_granica < gorna_granica) {}

    else {
        buf = gorna_granica;
        gorna_granica = dolna_granica;
        dolna_granica = buf;
    }
   
    do
    {
        podglad = cin.get();
        czy_jest_znak_nowej_lini = podglad != '\n';
       
        if (!cin.good() || liczba<dolna_granica || liczba>gorna_granica  ) {
            cin.clear(); //czysci falge bledu strumienia
            cin.ignore(numeric_limits < streamsize >::max(), '\n'); //usuwa wszystkie znaki z buforu strumienia
            cout << "bledny parametr: " << zmienna << endl
                << "sprobuj ponownie, uzywaj tylko cyfr z przedzialu " << "(" << dolna_granica << ";" << gorna_granica << ")" << endl;
            system("pause");
        }
        else
        {
            while ((podglad = cin.get()) != '\n')
            {
                if (podglad != ' ')// Szukanie zbêdnych danych w strumieniu
                {
                    czy_jest_znak_nowej_lini == 0;
                    cin.ignore(INT_MAX, '\n'); // czyszczenie strumienia
                    break;
                }
            }
        }
    } while (!cin.good() || liczba<dolna_granica || liczba>gorna_granica ||czy_jest_znak_nowej_lini);// warunek niepoprawnosci strumienia

    return liczba;
}

string Zabezpieczenia::Wpisywanie_znakow_bez_liczb(string zmienna) {

    string wyraz;
    do {
        cin >> wyraz;
        wyraz = Zmiana_poczatkowej_litery_na_duza(wyraz);
        if (Jest_Liczba(wyraz))
            cout <<"bledny parametr: "<<zmienna<<endl << "Sprobuj ponownie, uzywaj tylko liter:\n";
       // else
            //cout << "wpisano poprawnie\n";

    } while (Jest_Liczba(wyraz));
   
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

bool Zabezpieczenia::Jest_Liczba(string str)
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

bool Zabezpieczenia::Jest_Litera(string str)
{
    bool czy_jest_litera = true;
    char c;
    for (int i = 0; i < str.size(); i++) {//petla for przeszukuje ka¿dy znak w stringu z osobna
        c = str[i];

       // cout << endl << isdigit(str[i]) << endl;
        if (isdigit(c) == 4)//jesli znak bêdzie liczba funkcja isdigit zwroci wartosc 4 
            czy_jest_litera = false;
    }
    //cout << czy_jest_litera; //komentarz do sprawdzania metody
    //system("pause");
    return czy_jest_litera;

}
