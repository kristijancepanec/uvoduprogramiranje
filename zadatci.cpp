/* Zadatak 01. Omogućite korisniku unos 3 cjelobrojne vrijednosti. Ispišite ih u obrnutom redoslijedu unosa. Primjer:
UNOS
Unesite 1. broj: 5
Unesite 2. broj: 2
Unesite 3. broj: 7
ISPIS
3. broj: 7
2. broj: 2
1. broj: 5 */

#include <iostream>
using namespace std;

int main (){
int a;
cout << "Unesi prvu vrijednost" << endl;
cin >> a;

int b;
cout << "Unesi drugu vrijednost" << endl;
cin >> b;

int c; 
cout << "Unesi trecu vrijednost" << endl;
cin >> c; 

cout << "Prva vrijednost je " << a << endl;
cout << "Druga vrijednost je " << b << endl;
cout << "Treca vrijednost je " << c << endl;
}

