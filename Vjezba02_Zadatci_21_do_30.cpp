// Vježba 2 – selekcije if i switch

// ===== Zadatci sa selekcijama =====

/*  Zadatak 21. Omogućite korisniku unos 3 cjelobrojne vrijednosti. Ako su bilo koja dva broja jednaka, ispišite da postoji jednakost među brojevima, u protivnom ispišite da jednakosti nema (prilikom testiranja ispravnosti probajte iste brojeve napisati na različitim pozicijama kako biste vidjeli radi li program ispravno za sve kombinacije pozicija). Primjer:

    UNOS
    Unesite 1. broj: 3
    Unesite 2. broj: 7
    Unesite 3. broj: 3
    ISPIS
    Postoji jednakost medu upisanim brojevima.
*/

#include <iostream>
using namespace std;

int main (){

int a;
cout << "Unesi prvi broj: " << endl;
cin >> a; 

int b;
cout << "Unesi drugi broj: " << endl;
cin >> b; 

int c;
cout << "Unesi treci broj: " << endl;
cin >> c; 

if (a == b || a == c || b == a || b == c || c == a || c == b) {
    cout << "Postoji jednakost medu upisanim brojevima." << endl;
} else {
    cout << "Jednakosti nema." << endl;
}
return 0; 
}

/*  Zadatak 22. Omogućite korisniku unos 3 decimalne vrijednosti. Ispišite koji broj od unesenih brojeva je najmanji (dok testirate probajte najmanji broj upisati kao prvi broj, kao drugi i kao treći kako biste se uvjerili da program radi ispravno bez obzira na kojoj poziciji se nalazi najmanji broj). Primjer:

    UNOS
    Unesite 1. broj: 3.4
    Unesite 2. broj: 7.8
    Unesite 3. broj: 2.2
    ISPIS
    Najmanji broj: 2.2
*/

#include <iostream>
using namespace std;

int main (){

double a, b, c;
cout << "Unesi prvi broj" << endl; 
cin >> a;

cout << "Unesi drugi broj" << endl;
cin >> b; 

cout << "Unesi treci broj" << endl;
cin >> c; 

if (a < b && a < c) {
    cout << "Najmanji broj: " << a << "." << endl; 
} else if (b < a && b < c) {
    cout << "Najmanji broj: " << b << "." << endl; 
} else {
    cout << "Najmanji broj: " << c << "." << endl; 
}
return 0; 
}


/*  Zadatak 23. Omogućite korisniku unos 2 cjelobrojne vrijednosti, x i y. Ako je prvi broj paran, a drugi broj neparan tada ispišite x * y, u protivnom ispišite x + y. Primjeri:

UNOS

Unesite vrijednost x: 4

Unesite vrijednost y: 7

ISPIS

x * y = 28

P.S. Za vrijednosti x = 5 i y = 7 trebalo bi ispisati

x + y = 12
*/

#include <iostream>
using namespace std;

int main (){

int x; 
cout << "Unesi vrijednost x: "  << endl; 
cin >> x; 

int y;
cout << "Unesi vrijednost y: " << endl; 
cin >> y; 

if (x % 2 == 0 && y % 2 != 0) {
    cout <<  "Prvi broj je paran, a drugi neparan." << " Ispisujem: " << x * y << "." << endl; 
} else {
    cout << " Ispisujem: " << x + y << "." << endl;
}
return 0; 
}

/*  Zadatak 24. Omogućite korisniku unos 3 cjelobrojne vrijednosti, x, y i z. Ako je x > y ili y > z tada ispišite unesene brojeve, u protivnom im promijenite predznak te ih tada ispišite. Primjer:

    UNOS
    Unesite vrijednost x: -3
    Unesite vrijednost y: 1
    Unesite vrijednost z: 4
    ISPIS
    x: -3 y: 1 z: 4

    P.S. Za vrijednosti x = 5 i y = 2 i z = -1 trebalo bi ispisati
    x: -5 y: -2 z: 1
*/

#include <iostream>
using namespace std;

int main() {

    int x, y, z;

    cout << "Unesi prvi broj" << endl;
    cin >> x;

    cout << "Unesi drugi broj" << endl;
    cin >> y;

    cout << "Unesi treci broj" << endl;
    cin >> z;

    if (x > y || y > z) {
        cout << "Ispisujem unesene brojeve, ali im mijenjam predznak. "
             << "x: " << -x << " y: " << -y << " z: " << -z << endl;
    } else {
        cout << "Ispisujem unesene brojeve kako su upisani. "
             << "x: " << x << " y: " << y << " z: " << z << endl;
    }

    return 0;
}


/*  Zadatak 25. Omogućite korisniku unos dva cijela broja. Ispišite je li manji broj od dva unesena pozitivan ili negativan. Primjer:

    UNOS
    Unesite 1. broj: 5
    Unesite 2. broj: -2
    ISPIS
    Manji broj je negativan.

    P.S. Za vrijednosti brojeva 5 i 2 trebalo bi se ispisati
    Manji broj je pozitivan.
*/

#include <iostream>
using namespace std;

int main (){

int a; 
cout << "Unesi prvi broj: " << endl; 
cin >> a; 

int b;
cout << "Unesi drugi broj" << endl; 
cin >> b; 

int manjibroj;

if (a < b) {
    cout << "Prvi broj je manji!" <<  endl; 
    manjibroj = a;
} else if (b < a) {
    cout << "Drugi broj je manji!" <<  endl;
    manjibroj = b;
}

if (manjibroj > 0) {
    cout << "Taj broj je pozitivan." << endl; 
} else if (manjibroj < 0) {
    cout << "Taj broj je negativan." << endl; 
}
    return 0; 
}   


/*  Zadatak 26. Omogućite korisniku unos cijene (decimalni broj) i postotka sniženja cijene (cjelobrojna vrijednost). Ako je postotak sniženja veći od 60% ispišite „SUPER AKCIJA”, ako je postotak sniženja između 40 i 59% ispišite „ODLIČNA AKCIJA” a ako je postotak sniženja manji od toga ispišite „AKCIJA”. Na kraju ispišite novu cijenu nakon sniženja. Formula: https://www.calculat.org/hr/postotak/

Primjer:

    UNOS
    Unesite cijenu artikla: 75.60
    Unesite postotak snizenja cijene: 45
    ISPIS
    ODLICNA AKCIJA - nova cijena: 41.58

    P.S. Za vrijednosti cijene 122 i postotka 70 trebalo bi se ispisati
    SUPER AKCIJA - nova cijena: 36.6
*/

#include <iostream>
using namespace std;

int main (){

#include <iostream>
using namespace std;

int main (){

double cijena; 
cout << "Unesi cijenu: " << endl; 
cin >> cijena; 

int snizenje;
cout << "Unesi postotak snizenja: " << endl; 
cin >> snizenje; 

double novacijena = cijena - (snizenje / 100.0  * cijena); 

if (snizenje > 60) {
    cout << "SUPER AKCIJA!" << " Nova cijena je: " << novacijena << "." << endl;
} else if (snizenje > 40 && snizenje < 59) {
    cout << "ODLICNA AKCIJA!" << " Nova cijena je: " << novacijena << "." << endl;
} else {
    cout << "AKCIJA!" << " Nova cijena je: " << novacijena << "." << endl;
}

return 0; 

}

}

// ===== Zadatci sa selekcijama - izbornik =====

/*  Zadatak 27. Omogućite upis stranica pravokutnika, a i b. Ispišite izbornik: „1. Opseg pravokutnika” i u drugom redu „2. Površina pravokutnika”. Omogućite korisniku odabir, 1 ili 2 (npr. cjelobrojna varijabla izbor). Ako je korisnik odabrao opciju 1 ispišite opseg pravokutnika a ako je korisnik odabrao opciju 2 ispišite površinu pravokutnika. Formule: https://www.calculat.org/hr/povrsina-opseg/pravokutnik.html

Primjer:

    Unesite stranicu a: 5
    Unesite stranicu b: 7
    Izbornik:
    1. Opseg pravokutnika
    2. Povrsina pravokutnika
    Odabir: 2
    Povrsina pravokutnika: 35
*/

#include <iostream>
using namespace std;

int main (){

int a, b; 
cout << "Unesi stranicu a: " << endl; 
cin >> a; 

cout << "Unesi stranicu b: " << endl; 
cin >> b; 

cout << "Izbornik: " << endl; 
cout << "1 - Opseg" << endl;
cout << "2 - Povrsina" << endl;
cout << "Odaberi jednu od opcija" << endl;

int opcija;
cin >> opcija; 

int opseg = 2 * (a + b);
int povrsinapravokutnika = (a * b); 

if (opcija == 1) {
    cout << "Odabrao si opseg. " << " Izracun je: " << opseg << "." << endl; 
} else if (opcija == 2) {
    cout  << "Odabrao si povrsinu. " << " Izracun je: " << povrsinapravokutnika << "." << endl;
}
return 0; 
}

/*  Zadatak 28. Omogućite upis radijusa kruga (cjelobrojni podatak). Ispišite izbornik: „1. Opseg kruga” i u drugom redu „2. Površina kruga”. Omogućite korisniku odabir, 1 ili 2 (npr. cjelobrojna varijabla izbor). Ako je korisnik odabrao opciju 1 ispišite opseg kruga a ako je korisnik odabrao opciju 2 ispišite površinu kruga. Formule: https://www.calculat.org/hr/povrsina-opseg/krug.html

Primjer:

    Unesite radijus r: 5
    Izbornik:
    1. Opseg kruga
    2. Povrsina kruga
    Odabir: 1
    Opseg kruga: 31.42
*/

#include <iostream>
#include <cmath>
using namespace std;

int main (){

int radijuskruga;
cout << "Unesi radijus kruga: " << endl; 
cin >> radijuskruga; 

cout << "Izbornik: " << endl; 
cout << "1. Opseg kruga " << endl; 
cout << "2. Povrsina kruga " << endl; 
cout << "Odaberi jedno od ponudenoga." << endl; 

double odabir;
cin >> odabir;

double const PI = 3.14;
double opsegkruga = 2.0 * PI * radijuskruga;
double povrsinakruga = PI * pow(radijuskruga, 2.0); 

if (odabir == 1) {
    cout << "Odabrao si opseg, a on je: " << opsegkruga << "." << endl; 
} else if (odabir == 2) {
    cout << "Odabrao si povrsinu kruga, a ona je: " << povrsinakruga << "." << endl; 
}

}

/*  Zadatak 29. Omogućite upis dužine stranice kocke (cjelobrojni podatak). Ispišite izbornik: „1. Oplošje kocke” i u drugom redu „2. Volumen kocke”. Omogućite korisniku odabir, 1 ili 2 (npr. cjelobrojna varijabla izbor). Ako je korisnik odabrao opciju 1 ispišite oplošje kocke a ako je korisnik odabrao opciju 2 ispišite volumen kocke. Formule: https://www.calculat.org/hr/volumen-oplosje/kocka.html

Primjer:

    Unesite dužinu stranice a: 4
    Izbornik:
    1. Oplosje kocke
    2. Volumen kocke
    Odabir: 2
    Volumen kocke: 64
*/

#include <iostream>
using namespace std;

int main (){

int duzina;
cout << "Unesi duzinu stranice kocke." << endl; 
cin >> duzina; 

cout << "Izbornik: " << endl; 
cout << "1. Oplosje kocke " << endl; 
cout << "2. Volumen kocke " << endl; 
cout << "Odaberi jedno od ponudenoga." << endl;

double odabir;
cin >> odabir; 

int oplosje = 6 * duzina * duzina; 
int volumen = duzina * duzina * duzina; 

if (odabir == 1) {
    cout << "Odabrao si oplosje." << " Ono iznosi: " << oplosje << "." << endl; 
} else if (odabir == 2) {
    cout << "Odabrao si volumen." << " Ono iznosi: " << volumen << "." << endl;  
}
return 0; 

}

/*  Zadatak 30. Omogućite upis radijusa kugle (cjelobrojni podatak). Ispišite izbornik: „1. Oplošje kugle” i u drugom redu „2. Volumen kugle”. Omogućite korisniku odabir, 1 ili 2 (npr. cjelobrojna varijabla izbor). Ako je korisnik odabrao opciju 1 ispišite oplošje kugle a ako je korisnik odabrao opciju 2 ispišite volumen kugle. Formule: https://www.calculat.org/hr/volumen-oplosje/kugla.html

Primjer:

    Unesite radijus r: 7
    Izbornik:
    1. Oplosje kugle
    2. Volumen kugle
    Odabir: 1
    Volumen kugle: 615.75
*/

#include <iostream>
using namespace std;

int main (){

int radijus;
cout << "Unesi radijus kugle" << endl;
cin >> radijus; 

cout << "Izbornik: " << endl; 
cout << "1. Oplosje kugle" << endl; 
cout << "2. Volumen kugle " << endl; 
cout << "Odaberi jedno od ponudenoga." << endl;

int izbor;
cin >> izbor;

double const PI = 3.14;
double oplosje = 4 * PI * radijus * radijus; 
double volumen = 4/3 * PI * radijus * radijus * radijus; 

if (izbor == 1) {
    cout << "Odabrao si oplosje kugle." << " Oplosje je: " << oplosje << "." << endl; 
} else if (izbor == 2) {
    cout << "Odabrao si volumen kugle." << " Oplosje je: " << volumen << "." << endl; 
}
return 0; 
}

