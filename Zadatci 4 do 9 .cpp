
/*   Zadatak 04. Omogućite korisniku unos jednog cijelog broja. Broju promijenite predznak (+/-). Primjer:
UNOS
Broj: 7
ISPIS
Promjena predznaka: -7

  */

#include <iostream>
using namespace std;

int main (){

  int a;
  cout << "Unesi cjelobrojnu vrijednost" << endl;
  cin >> a;

  cout << "Promijenjeni predznak: " << -a << endl;

}

/*   Zadatak 05. Omogućite korisniku unos 2 cjelobrojne vrijednosti. Ispišite ostatak prilikom dijeljenja prvog broja s drugim. Primjer:
UNOS
1. broj: 18
2. broj: 5
ISPIS
Ostatak prilikom cjelobrojnog dijeljenja: 3
*/

#include <iostream>
using namespace std;

int main (){

  int broj1;
  cout << "Unesi prvi broj" << endl;
  cin >> broj1;

  int broj2;
  cout << "Unesi drugi broj" << endl;
  cin >> broj2;

  cout << "Ostatak dijeljenja je" << broj1 % broj2 << endl;

}


/*Zadatak 06. Omogućite korisniku unos udaljenosti u centimetrima (cjelobrojna vrijednost). Ispišite tu udaljenost u kilometrima, metrima, decimetrima i milimetrima. Primjer:
UNOS
Udaljenost u centimetrima: 175
ISPIS
Kilometri: 0.175 km
Metri: 1.75 m
Decimetri: 17.5 dm
Milimetri: 1750 mm */


#include <iostream>
using namespace std;

int main (){

  int udaljenost;
  cout << "Unesi udaljenost u centimetrima" << endl; 
  cin >> udaljenost;

  cout << "Kilometri: " << udaljenost / 100000.0 << "km " << endl;
  cout << "Metri: " << udaljenost / 100.0 << "m " << endl;
  cout << "Decimetri: " << udaljenost / 10.0 << "dm " << endl;
  cout << "Milimetri: " << udaljenost * 10 << "mm " << endl;

}

/*Zadatak 07. Omogućite korisniku unos 2 cjelobrojne vrijednosti. Ispišite zbroj, razliku, kvocijent i umnožak unesenih brojeva. Primjer:
UNOS
1. broj: 10
2. broj: 3
ISPIS
Zbroj: 13
Razlika: 7
Kvocijent: 3.33333
Umnozak: 30
 */

 #include <iostream>
using namespace std;

int main (){

   int broj1;
  cout << "Unesi prvi broj" << endl;
  cin >> broj1;

  int broj2;
  cout << "Unesi drugi broj" << endl;
  cin >> broj2;

  cout << "Zbroj: " << broj1 + broj2 << endl;
  cout << "Razlika: " << broj1 - broj2 << endl;
  cout << "Kvocijent: " << static_cast<double>(broj1) / broj2 << endl;
  cout << "Umnozak: " << broj1 * broj2 << endl; 

}

 /*Zadatak 08. Omogućite korisniku unos 4 decimalna broja. Ispišite aritmetičku sredinu ova 4 broja (Aritmetička sredina: zbroj brojeva podijeljen s količinom brojeva). Primjer:
UNOS
1. broj: 2.8
2. broj: 7.7
3: broj: 5.4
4. broj: 3.1
ISPIS
Aritmetička sredina brojeva 2.8, 7.7, 5.4 i 3.1 iznosi 4.75.

 */

 #include <iostream>
using namespace std;

int main (){

  double broj1;
  cout << "Unesi prvi broj" << endl;
  cin >> broj1;

  double broj2;
  cout << "Unesi drugi broj" << endl;
  cin >> broj2;

  double broj3; 
  cout << "Unesi treci broj" << endl;
  cin >> broj3;

  double broj4;
  cout << "Unesi cetvrti broj" << endl;
  cin >> broj4; 

  double aritmetickaSredina = (broj1 + broj2 + broj3 +broj4) / 4;
  cout << "Aritmeticka sredina ovih brojeva je: " << aritmetickaSredina << endl;

}

 /*
 
 Zadatak 09. Omogućite korisniku unos 3 decimalna broja. Ispišite cjelobrojni dio rezultata zbrajanja ova tri unesena broja. Primjer:
UNOS
1. broj: 3.7
2. broj: 2.7
3. broj: 1.1
ISPIS
Cjelobrojni dio zbroja brojeva 3.7, 2.7 i 1.1 je 7.

 */


 #include <iostream>
using namespace std;

int main (){

  double broj1;
  cout << "Unesi prvi broj" << endl;
  cin >> broj1;

  double broj2;
  cout << "Unesi drugi broj" << endl;
  cin >> broj2;

  double broj3;
  cout << "Unesi treci broj" << endl;
  cin >> broj3;

  cout << "Cijelobrojni dio zbroja ovih brojeva je: " << static_cast <int>(broj1 + broj2 + broj3) << endl;
  

}




