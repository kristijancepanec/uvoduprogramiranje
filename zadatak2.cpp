/*   Zadatak 02. Omogućite korisniku unos 3 cjelobrojne vrijednosti. Unesene brojeve ispišite u jednom retku odvojene zarezom. Primjer:
UNOS
Unesite 1. broj: 5
Unesite 2. broj: 8
Unesite 3. broj: 3
ISPIS
Ispis brojeva: 3, 8, 5
  */
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

cout << "Ispis: " << c << ", " << b << ", " << a << endl;



}