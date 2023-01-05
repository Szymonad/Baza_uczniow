#include "Zabezpieczenia.h"
#include<iostream>

using namespace std;

int Zabezpieczenia::Wpisywanie_liczby_calkowitej(string zmienna) {

    int liczba;
    cin >> liczba;
    if (!cin.good()) {
        cout << "Podano zbledny parametr:" << zmienna << endl
            << "sprubuj ponownie:\n";
    }
    while (!cin.good()) { // warunek niepoprawnosci strumienia
        cin.clear();
        cin.ignore(numeric_limits < streamsize >::max(), '\n'); // bardziej profesjonalnie: std::cin.ignore(std::numeric_limits < std::streamsize >::max(), '\n' );
        cin >> liczba;
        if (!cin.good()) {
            cout << "Podano zbledny parametr:" << zmienna << endl
                << "sprubuj ponownie:\n";
        }
    }



    return liczba;
}