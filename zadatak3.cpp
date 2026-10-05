
/*   Zadatak 03. Omogućite korisniku unos 2 cjelobrojne vrijednosti. Ispišite unesene brojeve umanjene za 1. Primjer:
UNOS
1. broj: 7
2. broj: 3
ISPIS
1. broj - 1: 6
2. broj - 1: 2

  */
#include <iostream>
using namespace std;

int main (){

int a;
cout << "Unesi prvu cjelobrojnu vrijednost" << endl;
cin >> a;

int b;
cout << "Unesi drugu cjelobrojnu vrijednost" << endl;
cin >> b;

cout << "Umanjena prva vrijednost je: " << a - 1 << endl;
cout << "Umanjena druga vrijednost je: " << b - 1 << endl;

}