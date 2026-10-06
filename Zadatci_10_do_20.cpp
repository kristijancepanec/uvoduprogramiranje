
/*  Zadatak 10. Omogućite korisniku unos dužina stranica pravokutnog trokuta. Ispišite opseg i površinu pravokutnog trokuta.
Formule: Opseg = a + b + c, Površina = a·b / 2. Primjer:
UNOS
Unesite duzinu stranice a: 5
Unesite duzinu stranice b: 5
Unesite duzinu stranice c: 7.1
ISPIS
Opseg trokuta iznosi 17.1, a povrsina 12.5.
*/

#include <iostream>
using namespace std;

int main (){

    double stranica1;
    cout << "Unesi duzinu stranica a: " << endl;
    cin >> stranica1;

    double stranica2;
    cout << "Unesi duzinu stranice b: " << endl;
    cin >> stranica2;

    double stranica3;
    cout << "Unesi duzinu stranice c: " << endl;
    cin >> stranica3;

    double opseg = stranica1 + stranica2 + stranica3;
    double povrsina = (stranica1 * stranica2) / 2;

    cout << "Opseg trokuta iznosi: " << opseg << ", a povrsina: " << povrsina << endl;

}

/*  Zadatak 11. Omogućite korisniku unos dužina stranica kvadra (cjelobrojne vrijednosti). Ispišite oplošje i obujam kvadra.
Formule: Oplošje = 2·(ab + ac + bc), Obujam = a·b·c. Primjer:
UNOS
Unesite duzinu stranice a: 5
Unesite duzinu stranice b: 4
Unesite duzinu stranice c: 2
ISPIS
Oplosje kvadra iznosi 76, a obujam iznosi 40.
*/

#include <iostream>
using namespace std;

int main (){

    double stranica1;
    cout << "Unesi duzinu stranica a: " << endl;
    cin >> stranica1;

    double stranica2;
    cout << "Unesi duzinu stranice b: " << endl;
    cin >> stranica2;

    double stranica3;
    cout << "Unesi duzinu stranice c: " << endl;
    cin >> stranica3;

    double oplosje = 2 * (stranica1 * stranica2 + stranica1 * stranica3 + stranica2 * stranica3);
    double obujam = stranica1 * stranica2 * stranica3;

    cout << "Oplosje kvadra iznosi: " << oplosje << ", a obujam: " << obujam << endl;

}

/*  Zadatak 12. Omogućite korisniku unos radijusa kugle. Ispišite promjer kugle. Izračunajte oplošje i obujam kugle. Za vrijednost broja π uzmite 3.14.
Formule: Oplošje = 4·π·r², Obujam = 4/3·π·r³. Primjer:
UNOS
Unesite radijus kugle: 7
ISPIS
Promjer kugle: 14
Oplosje kugle iznosi 615.8, a obujam iznosi 1436.8.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main (){

    double radijus;
    cout << "Unesi radijus: " << endl;
    cin >> radijus;

    const double PI = 3.14;

    double oplosje = 4 * PI * pow(radijus, 2);
    double obujam = 4/3 * PI * pow(radijus, 3);

    cout << "Promjer kugle: " << radijus * 2 << endl;
    cout << "Oplosje kugle iznosi: " << oplosje << ",a obujam iznosi: " << obujam << endl;

}

/*  Zadatak 13. Deklarirajte varijablu x i omogućite korisniku unos vrijednosti u tu varijablu. Pretvorite sljedeći matematički izraz u izraz u C++-u: 7x + 2.
Ispišite rezultat. Primjer:
UNOS
Unesite vrijednost x: 4
ISPIS
Rezultat jednadzbe: 30
*/

#include <iostream>
using namespace std;

int main (){

int x;
cout << "Unesi varijablu x: " << endl;
cin >> x; 

int matematicki_izraz = 7 * x + 2;

cout << "Rezultat jednadzbe 7 * x + 2: " << matematicki_izraz << endl;

}

/*  Zadatak 14. Deklarirajte varijable x i y i omogućite korisniku unos vrijednosti u te varijable. Pretvorite sljedeći matematički izraz u izraz u C++-u: 5x + 2y.
Ispišite rezultat. Primjer:
UNOS
Unesite vrijednost x: 5
Unesite vrijednost y: 7
ISPIS
Rezultat jednadzbe: 39
*/

#include <iostream>
using namespace std;

int main (){

    int x, y;
    cout << "Unesi varijablu x: " << endl;
    cin >> x;
    cout << "Unesi varijablu y: " << endl;
    cin >> y;

    int matematicki_izraz = 5 * x + 2 * y;

    cout << "Rezultat jednadzbe 5 * x + 2 * y: " << matematicki_izraz << endl;  

}

/*  Zadatak 15. Deklarirajte varijable x i y i omogućite korisniku unos vrijednosti u te varijable. Pretvorite sljedeći matematički izraz u izraz u C++-u:

    2x + 3y
    -------
       7

Ispišite rezultat. Primjer:
UNOS
Unesite vrijednost x: 8
Unesite vrijednost y: 4
ISPIS
Rezultat jednadzbe: 4
*/

#include <iostream>
using namespace std;

int main (){

int x, y;
cout << "Unesi varijablu x: " << endl;
cin >> x;
cout << "Unesi varijablu y: " << endl;
cin >> y;   

int izraz = (2 * x + 3 * y) / 7;
cout << "Rezultat jednadzbe (2 * x + 3 * y) / 7: " << izraz << endl;    

}

/*  Zadatak 16. Deklarirajte varijable x, y i z i omogućite korisniku unos vrijednosti u te varijable. Pretvorite sljedeći matematički izraz u izraz u C++-u:

    4x + 2y
    -------
     z + 2

Ispišite rezultat. Primjer:
UNOS
Unesite vrijednost x: 6
Unesite vrijednost y: 9
Unesite vrijednost z: 1
ISPIS
Rezultat jednadzbe: 14
*/

#include <iostream>
using namespace std;

int main (){

int x, y, z;
cout << "Unesi varijablu x: " << endl;
cin >> x;   
cout << "Unesi varijablu y: " << endl;
cin >> y;   
cout << "Unesi varijablu z: " << endl;
cin >> z;

int matematicki_izraz = (4 * x + 2 * y) / (z +2);   
cout << "Rezultat jednadzbe (4 * x + 2 * y) / (z + 2): " << matematicki_izraz << endl;

}

/*  Zadatak 17. Omogućite korisniku unos u 3 znakovne varijable. Nakon toga ispišite vrijednosti prve, druge pa treće varijable, te ponovno druge i ponovno prve varijable, sve spojeno bez razmaka u jednom redu. Primjer:
UNOS
1. znak: R
2. znak: A
3. znak: D
ISPIS
RADAR
*/

#include <iostream>
using namespace std;

int main (){

char znak1, znak2, znak3;
cout << "Unesi prvi znak: " << endl;
cin >> znak1;
cout << "Unesi drugi znak: " << endl;   
cin >> znak2;
cout << "Unesi treci znak: " << endl;
cin >> znak3;

cout << znak1 << znak2 << znak3 << znak2 << znak1 << endl;

}

/*  Zadatak 18. Deklarirajte 3 znakovne varijable i inicijalizirajte ih na sljedeće vrijednosti: L, E, V. Nakon toga napravite ispis vrijednosti: LEVEL.
UNOS
Nema unosa.
ISPIS
LEVEL
*/

#include <iostream>
using namespace std;

int main (){

char znak1 = 'L';
char znak2 = 'E';   
char znak3 = 'V';

cout << znak1 << znak2 << znak3 << znak2 << znak1 << endl;
}

/*  Zadatak 19. Deklarirajte 5 logičkih varijabli. Prvu inicijalizirajte na 1. Drugu inicijalizirajte na 0. Treću inicijalizirajte na true. Četvrtu inicijalizirajte na false. Petu inicijalizirajte na vrijednost 7. Ispišite vrijednosti svih varijabli u jednom retku odvojeno razmakom.
UNOS
Nema unosa.
ISPIS
1 0 1 0 1
*/

#include <iostream>
using namespace std;

int main (){

bool logicka_varijabla1 = 1;
bool logicka_varijabla2 = 0;
bool logicka_varijabla3 = true;
bool logicka_varijabla4 = false;
bool logicka_varijabla5 = 7; 

cout << logicka_varijabla1 << " " << logicka_varijabla2 << " " << logicka_varijabla3 << " " << logicka_varijabla4 << " " << logicka_varijabla5 << endl;

}

/*  Zadatak 20. (Posebni izazov) Omogućite korisniku unos decimalnog broja cijene nekog proizvoda. Ispišite posebno kune i lipe od unesene cijene. Primjer:
UNOS
Unesite iznos cijene artikla: 5.78
ISPIS
Artikl kosta 5 kuna i 78 lipa.
*/

#include <iostream>
using namespace std;

int main (){

double cijena;
cout << "Unesi cijenu artikla: " << endl;
cin >> cijena;

int kune = cijena;
int lipe = (cijena - kune) *100;

cout << "Artikl kosta " << kune << " kuna i " << lipe << " lipa." << endl; 

}
