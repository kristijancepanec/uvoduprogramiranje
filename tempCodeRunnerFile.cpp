#include <iostream>
using namespace std;

int main (){

int troznamenkasti_broj;
cout << "Unesi troznamenkasti broj: " << endl;
cin >> troznamenkasti_broj;

cout << "Jedinica: " << troznamenkasti_broj % 10 << endl;
cout << "Desetica: " << (troznamenkasti_broj / 10) % 10 << endl;
cout << "Stotica: " << (troznamenkasti_broj / 100) << endl;

}