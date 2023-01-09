#include "Menu.h"

int main() {
	Menu test;
	test.Wykonaj();



}





//#include <iostream>
//#include <string>
//#include <regex> //jeœli mamy standard C++0x
////#include <boost/regex.hpp> // jeœli nie mamy kompilatora zgodnego z standardem C++0x, musimy sami zainstalowaæ bibliotekê boost
////using namespace boost // jw.;narzêdzia biblioteki boost zmajduj¹ siê w przestrzeni nazw boost
//using namespace std; // w C++0x narzêdzia z <regex> znajduj¹ siê w  std
//
//int main()
//{
//    string tekst;
//    int line = 0;
//    regex wzorzec("\\w* to \\w*");
//
//    cout << "Witaj!\n\007";
//    cout << "Pisz. Aby skoñczyæ wæiœnij [Ctrl] + [z] w nowym wierszu\n\n";
//
//    while (getline(cin, tekst))
//    {
//        smatch wynik; // tutaj bêdzie zapisany wynik
//        ++line;
//        if (regex_search(tekst, wynik, wzorzec))
//            cout << "Linia " << line << " : " << wynik[0] << '\n';
//
//        cin >> tekst;
//
//     
//    }
//    cout << tekst;
//    system("pause");
//    return 0;
//}
//
//#include<iostream>
//#include <string> 
//using namespace std;
//
//int main() {
//	/*int number;
//	string str;
//	int accountNumber;
//
//	cout << "Enter number:";
//	cin >> number;
//	cout << "Enter name:";
//	ws(cin);
//	getline(cin, str,'x');
//	cout << "Enter account number:";
//	cin >> accountNumber;*/
//
//	//string tekst1, tekst2;
//	//tekst1.insert(0, "Ala");
//	//tekst2.insert(0, "Ola");
//	//cout << tekst1.compare(tekst2) << endl; // -1
//	//cout << tekst2.compare(tekst1) << endl; // 1
//
//	//tekst2.insert(0, "Alaaaa");
//	//cout << tekst1.compare(tekst2) << endl; // -1
//	//cout << tekst2.compare(tekst1) << endl; // 1
//
//	//tekst2.insert(0, "A");
//	//cout << tekst1.compare(tekst2) << endl; // 1
//	//cout << tekst2.compare(tekst1) << endl; //-1
//
//	//tekst2.insert(0, "ala");
//	//cout << tekst1.compare(tekst2) << endl; // -1
//	//cout << tekst2.compare(tekst1) << endl; // 1
//
//	char znak;
//	cin >> znak; //wczytujemy pierwszy znak
//
//	while (znak != '.') //dopóki nie napotkamy na znak '.'
//	{
//		if (znak > 95) //gdy napotkamy ma³¹ literê zamieniamy j¹ na du¿¹
//			cout << (char)(znak - 32); //przesuwaj¹c o 32 miejsca w kodzie ASCII
//		else
//			cout << znak;
//
//		cin >> znak; //wczytujemy nastêpny znak
//	}
//
//	cout << endl;
//
//	return 0;
//
//	return 0;
//
//
//	//cout <<endl<<endl<< number << endl<<str<<endl<<accountNumber;
//	
//}










//#include <iostream>
////#include <algorithm>
//using namespace std;
//// Function to check the string character by character
//bool isNumber(string str)
//{
//    bool czy_jest_liczba=false;
//    char c;
//    for (int i = 0; i < str.size();i++) {
//        c = str[i];
//     
//       // cout << endl << endl << isalpha(c) << endl;
//        if (isalpha(c) == 0)
//            czy_jest_liczba = true;
//    }
//    return czy_jest_liczba;
//   
//}
//
//int main() {
//    string str1 = "Codespeedy";
//    string str2 = "2222313232";
//    string str3 = "aC++";
//    cout<<isNumber(str1);
//    cout<<isNumber(str2); 
//    cout<<isNumber(str3);
//
//
//    //char c = '+';
//
//    //cout <<c<<" = " << isalpha(c) << endl;
//
//
//
//
//
//
//    return 0;
//}