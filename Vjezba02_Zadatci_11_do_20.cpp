// Vježba 2 – selekcije if i switch

// ===== Zadatci sa selekcijama =====

/*  Zadatak 11. Omogućite korisniku unos cjelobrojne vrijednosti broja bodova (od 0 do 100). Ispišite riječima ocjenu ovisno o broju bodova (0-49 = nedovoljan, 50-59 = dovoljan, 60-74 = dobar, 75-89 = vrlo dobar, 90-100 = izvrstan). Ako je unesen broj bodova van zadanog raspona, ispišite „Krivi unos broja bodova.” Primjer:

    UNOS
    Unesite broj bodova (0-100): 77
    ISPIS
    Vaša ocjena: vrlo dobar
*/

#include <iostream>
using namespace std;

int main (){

int bodovi;
cout << "Unesi broj bodova!" << endl; 
cin >> bodovi; 

if (bodovi >= 90) {
    cout << "Bravo pet!" << endl;
} else if (bodovi >= 75) {
    cout << "Nije lose, cetvorka!" << endl;
} else if (bodovi >= 60) {
    cout << "Dobra trojka!" << endl;
} else if (bodovi >= 49) {
    cout << "Potrudi se malo vise" <<  endl;
} else {
    cout << "Nazalost pao si." << endl; 
}

}

/*  Zadatak 12. Omogućite korisniku unos 2 cjelobrojne vrijednosti. Ispišite je li zbroj upisanih brojeva troznamenkasti broj ili ne. Primjer:

    UNOS
    Unesite 1. broj: 46
    Unesite 2. broj: 73
    ISPIS
    Zbroj brojeva 46 i 73 iznosi 119 i to je troznamenkasti broj.

    P.S. Za unos brojeva 22 i 71 trebalo bi se ispisati
    Zbroj brojeva 22 i 71 iznosi 93 i to nije troznamenkasti broj.
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

int zbroj = broj1 + broj2;

if (zbroj >= 100 && zbroj <= 999) {
    cout << "Zbroj brojeva " << broj1 << " i " << broj2 << " je " << zbroj << " ,to je troznamenkasti broj!" << endl;
} else {
    cout << "Zbroj brojeva " << broj1 << " i " << broj2 << " je " << zbroj << " ,to nije troznamenkasti broj!" << endl;
}

}

/*  Zadatak 13. Omogućite korisniku unos cjelobrojne vrijednosti u rasponu od 0 do 99999. Ispišite je li uneseni broj jednoznamenkast, dvoznamenkast, troznamenkast, četveroznamenkast ili peteroznamenkast. Ako korisnik unese vrijednost van zadanog raspona, ispišite „Uneseni broj je izvan zadanog raspona.” Primjer:

    UNOS
    Unesite broj (0-99999): 583
    ISPIS
    Unijeli ste troznamenkasti broj.
*/

#include <iostream>
using namespace std;

int main (){

int broj;
cout << " Unesite broj (0-99999)" << endl;
cin >> broj;

if (broj >= 1 && broj <= 9) {
    cout << "Unijeli ste jednoznamenkast broj" << endl;
} else if (broj >= 10 && broj <= 99)  {
    cout << "Unijeli ste dvoznamenkast broj" << endl;
} else if (broj >= 100 && broj <= 999) {
    cout << "Unijeli ste troznamenkast broj" << endl;
} else if (broj >= 1000 && broj <= 9999) {
    cout << "Unijeli ste cetveroznamenkast broj" << endl; 
} else if (broj >= 10000 && broj <= 99999) {
    cout << "Unijeli ste peteroznamenkast broj" << endl;
}
return 0;
}


/*  Zadatak 14. Omogućite korisniku unos 3 cjelobrojne vrijednosti - duljine stranica trokuta. Provjerite mogu li unesene dužine stranica činiti trokut, tj. vrijedi li da je zbroj duljina svake dvije stranice veća od duljine treće stranice (za sve kombinacije stranica: a + b > c, b + c > a, c + a > b). Ako da, ispišite da unesene stranice čine trokut a ako ne, tada ispišite da unesene stranice ne čine trokut. Primjer:

    UNOS
    Unesite duljinu stranice a: 4
    Unesite duljinu stranice b: 6
    Unesite duljinu stranice c: 7
    ISPIS
    Unesene stranice 4, 6 i 7 cine trokut.
*/


#include <iostream>
using namespace std;

int main (){

int prva;
cout << "Unesi duljinu stranice a: " << endl;
cin >> prva;

int druga;
cout << "Unesi duljinu stranice b: " << endl;
cin >> druga;

int treca;
cout << "Unesi duljinu stranice c: " << endl;
cin >> treca;

if (prva + druga > treca && druga + treca > prva && treca + prva > druga) {
    cout << "Ovo je trokut!" << endl;
} else {
    cout << "Ove stranice ne cine trokut!" << endl;
}
return 0;
}

/*  Zadatak 15. Omogućite korisniku unos 2 cjelobrojne vrijednosti, x i y. Ako je prvi broj veći od drugog (ili jednak) tada oba broja uvećaj za 3, ako je drugi broj veći od prvog tada oba broja umanji za 3. Na kraju ispišite nove vrijednosti x i y. Primjer:

    UNOS
    Unesite x: 7
    Unesite y: 3
    ISPIS
    x = 10 y = 6

    P.S. Primjerice, za unos brojeva 2 i 8 trebalo bi se ispisati
    x = -1 y = 5
*/


#include <iostream>
using namespace std;

int main (){

int x;
cout << "Unesi prvi broj" << endl;
cin >> x;

int y;
cout << "Unesi drugi broj" << endl;
cin >> y;

if (x > y || x == y) {
    cout << "Nove vrijednosti:" << " x: " << x + 3 << " y: " << y + 3 << endl; 
} else if (y > x) {
     cout << "Nove vrijednosti:" << " x: " << x - 3 << " y: " << y - 3 << endl; 
}
 return 0; 
}


/*  Zadatak 16. Omogućite korisniku unos 2 cjelobrojne vrijednosti. Ispišite rezultat jednadžbe: |a| - |b| (apsolutna vrijednost broja a minus apsolutna vrijednost broja b). Primjer:

    UNOS
    Unesite broj a: -4
    Unesite broj b: -7
    ISPIS
    Razlika apsolutnih vrijednosti brojeva -4 i -7 iznosi -3.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a, b;

    cout << "Unesite broj a: ";
    cin >> a;

    cout << "Unesite broj b: ";
    cin >> b;

    int rezultat = abs(a) - abs(b);

    cout << "Razlika apsolutnih vrijednosti brojeva " << a << " i " << b 
         << " iznosi " << rezultat << "." << endl;


}

/*  Zadatak 17. Omogućite korisniku unos cjelobrojne vrijednosti. Ispišite je li uneseni broj pozitivan ili negativan i je li broj paran ili neparan. Primjer:

    UNOS
    Unesite broj: 9
    ISPIS
    Broj 9 je pozitivan neparan broj.
*/

#include <iostream>
using namespace std;

int main (){

int a; 
cout << "Unesi broj" << endl;
cin >> a; 

if (a > 0 && a % 2 == 0) {
    cout << "Ovaj broj je  pozitivan i paran!" << endl;
} else if (a < 0 && a % 2 != 0) {
    cout << "Ovaj broj je negativan i neparan!" << endl; 
}
return 0; 
}

/*  Zadatak 18. Imamo dva reda cigli. U prvom redu imamo x cigli koje su duljine d1 a u drugom redu imamo y cigli koje su duljine d2. Omogućite korisniku unos broja cigli za svaki red (x i y) a također i unos vrijednosti za duljine cigli (d1 i d2). Ispišite duljinu kraćeg reda cigli. Primjer:

    UNOS
    Unesite broj cigli u 1. redu (x): 10
    Unesite duljinu cigle 1. reda (d1): 3
    Unesite broj cigli u 2. redu (y): 20
    Unesite duljinu cigle 2. reda (d2): 2
    ISPIS
    Duljina kraceg reda cigli iznosi 30.

    P.S. U ovom primjeru duljina prvo reda je 30 (10 puta 3) a duljina drugog 40 (20 puta 2)
*/


#include <iostream>
using namespace std;

int main (){

int prvired;
cout << "Unesi broj cigli u 1. redu" << endl; 
cin >> prvired; 

int duljinacigli1;
cout << "Unesi duljinu cigli 1. reda" << endl; 
cin >> duljinacigli1; 

int drugired;
cout << "Unesi broj cigli u 2. redu" << endl; 
cin >> drugired; 

int duljinacigli2;
cout << "Unesi duljinu cigli 2. reda" << endl; 
cin >> duljinacigli2; 

int prvecigle = prvired * duljinacigli1;
int drugecigle = drugired * duljinacigli2;;

if (prvecigle < drugecigle) {
    cout << "Duljina kraceg reda cigli iznosi: " << prvecigle << endl; 
} else {
        cout << "Duljina kraceg reda cigli iznosi: " << drugecigle << endl;
}

return 0; 
}

/*  Zadatak 19. Omogućite korisniku unos vrijednosti koordinata x i y u koordinatom sustavu. Na temelju unesenih vrijednosti x i y ispišite u kojem kvadrantu se točka (x,y) nalazi. Primjer:

    UNOS
    Unesite koordinatu x: -2
    Unesite koordinatu y: 5
    ISPIS
    Tocka (-2,5) se nalazi u 2. kvadrantu.
    1. kvadrant
    (+, +)
    2. kvadrant
    (-, +)
    3. kvadrant
    (-, -)
    4. kvadrant
    (+, -)
    +
    +
    -
    -
*/

#include <iostream>
using namespace std;

int main (){

int x;
cout << "Unesi kordinatu x: " << endl; 
cin >> x; 

int y; 
cout << "Unesi kordinatu y: " << endl; 
cin >> y; 

if (x > 0 & y > 0) {
    cout << "Te tocke su u prvom kvadrantu" << endl;
} else if (x < 0 & y > 0) {
    cout << "Te tocke su u drugom kvadrantu" << endl;
} else if (x < 0 & y < 0) {
    cout << "Te tocke su u trecem kvadrantu" << endl;
} else {
    cout << "Te tocke su u cetvrtom kvadrantu" << endl; 
}
return 0; 
}

/*  Zadatak 20. Omogućite korisniku unos cjelobrojne vrijednosti u rasponu od 1 do 15. Ovisno o unesenom broju, ispišite toliko nula u jednom redu odvojene razmakom. Ako je upisana vrijednost izvan zadanog raspona, ispišite „Neispravna ulazna vrijednost.” Primjer:

    UNOS
    Unesite broj: 9
    ISPIS
    0 0 0 0 0 0 0 0 0



    P.S. Postoji elegantno rješenje korištenjem selekcije switch bez korištenja naredbe break, pokušajte vidjeti možete li kreirati takvo rješenje
*/

#include <iostream>
using namespace std;

int main() {

    int broj;

    cout << "Unesite broj: ";
    cin >> broj;

    switch (broj) {
        case 15:
            cout << "0 ";
        case 14:
            cout << "0 ";
        case 13:
            cout << "0 ";
        case 12:
            cout << "0 ";
        case 11:
            cout << "0 ";
        case 10:
            cout << "0 ";
        case 9:
            cout << "0 ";
        case 8:
            cout << "0 ";
        case 7:
            cout << "0 ";
        case 6:
            cout << "0 ";
        case 5:
            cout << "0 ";
        case 4:
            cout << "0 ";
        case 3:
            cout << "0 ";
        case 2:
            cout << "0 ";
        case 1:
            cout << "0 ";
            break;

        default:
            cout << "Neispravna ulazna vrijednost.";
    }

    return 0;
}