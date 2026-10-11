// Vježba 2 – selekcije if i switch

// ===== Posebni izazov =====

/*  Zadatak 31. Omogućite korisniku unos 2 cjelobrojne vrijednosti, trenutni dan u mjesecu i redni broj mjeseca u godini. Ispišite koliko je dana preostalo u trenutnom mjesecu do kraja mjeseca (Broj dana po mjesecima: Siječanj 31, Veljača 28, Ožujak 31, Travanj 30, Svibanj 31, Lipanj 30, Srpanj 31, Kolovoz 31, Rujan 30, Listopad 31, Studeni 30, Prosinac 31). Nije potrebno raditi nikakvu provjeru ispravnosti ulaznih podataka, pretpostavka je da će korisnik unijeti ispravne vrijednosti. Primjer:

    UNOS
    Unesite datum (dani): 17
    Unesite broj mjeseca: 3
    ISPIS
    Trenutni mjesec: Ožujak
    Broj dana do kraja mjeseca: 14
*/

#include <iostream>
using namespace std;

int main (){

int a;
cout << "Unesi prvi cjelobrojnu vrijednost (dan u mjesecu)" << endl; 
cin >> a; 

int b;
cout << "Unesi drugu cjelobrojnu vrijednost (redni broj mjeseca)" << endl; 
cin >> b;

/*
Ovaj zadatak nisam najbolje znao pa ga ovdje pojasnjavam. Znaci najlakse je koristiti switch koliko sam skuzio jer su ovo sve neke ocekivane vrijednosti i onda je
lakse strukturirati program nego da to radimo sa if i else. Za if else bi trebali napraviti puno svega i svacega i izgledalo bi sve bez veze, odnosno teze je za citanje.
Uglavnom u slucaju kada je prvi mjesec / case 1 / ispisuje se sijecanja i ujedino ostatak dana do kraja.  
*/

switch (b) {
        case 1:
            cout << "Trenutni mjesec: Sijecanj" << endl;
            cout << "Broj dana do kraja mjeseca: " << 31 - a;
            break;

        case 2:
            cout << "Trenutni mjesec: Veljaca" << endl;
            cout << "Broj dana do kraja mjeseca: " << 28 - a;
            break;

        case 3:
            cout << "Trenutni mjesec: Ozujak" << endl;
            cout << "Broj dana do kraja mjeseca: " << 31 - a;
            break;

        case 4:
            cout << "Trenutni mjesec: Travanj" << endl;
            cout << "Broj dana do kraja mjeseca: " << 30 - a;
            break;

        case 5:
            cout << "Trenutni mjesec: Svibanj" << endl;
            cout << "Broj dana do kraja mjeseca: " << 31 - a;
            break;

        case 6:
            cout << "Trenutni mjesec: Lipanj" << endl;
            cout << "Broj dana do kraja mjeseca: " << 30 - a;
            break;

        case 7:
            cout << "Trenutni mjesec: Srpanj" << endl;
            cout << "Broj dana do kraja mjeseca: " << 31 - a;
            break;

        case 8:
            cout << "Trenutni mjesec: Kolovoz" << endl;
            cout << "Broj dana do kraja mjeseca: " << 31 - a;
            break;

        case 9:
            cout << "Trenutni mjesec: Rujan" << endl;
            cout << "Broj dana do kraja mjeseca: " << 30 - a;
            break;

        case 10:
            cout << "Trenutni mjesec: Listopad" << endl;
            cout << "Broj dana do kraja mjeseca: " << 31 - a;
            break;

        case 11:
            cout << "Trenutni mjesec: Studeni" << endl;
            cout << "Broj dana do kraja mjeseca: " << 30 - a;
            break;

        case 12:
            cout << "Trenutni mjesec: Prosinac" << endl;
            cout << "Broj dana do kraja mjeseca: " << 31 - a;
            break;
}

return 0; 

}

/*  Zadatak 32. Omogućite korisniku unos decimalne vrijednosti. Ako je prva znamenka nakon točke 5 ili veća, tada broj zaokružite na veću vrijednost a ako je prva znamenka nakon točke 4 ili manja tada broj zaokružite na manju vrijednost. Na kraju ispišite zaokruženi broj (Pomoć: Kako biste izolirali znamenku iza točke probajte koristiti množenje i modulo). Primjer:

    UNOS
    Unesite decimalni broj: 3.7
    ISPIS
    Zaokruzeni broj: 4

    P.S. Za unos broja 7.2 trebalo bi se ispisati
    Zaokruzeni broj: 7
*/

#include <iostream>
#include <cmath>
using namespace std;

int main (){

double a; 
cout << "Unesi decimalnu vrijednost: " << endl; 
cin >> a; 

double zadnjaznamenka = (int) (a * 10) % 10; // ovo funkcionira na nacin da pretvori ovo u int, cijeli broj. Dalje, imam a * 10 sto onda baca jedno decimalno mjesto natrag, a % 10 nam baca zadnju znamenku. 

if (zadnjaznamenka >= 5) {
    cout << "Unio si broj kojema ju prva znamenka nakon tocke pet ili veca, dajem rezultat; " << ceil (a) << endl; // najlakse je koristiti cmath library jer vec postoje ove funkcije za zaokruzivanje :)
} else if (zadnjaznamenka <= 4) {
    cout << "Unio si broj kojema ju prva znamenka nakon tocke 4 ili manja, dajem rezultat; " << floor (a) << endl; // najlakse je koristiti cmath library jer vec postoje ove funkcije za zaokruzivanje :)
}

return 0; 
}

/*  Zadatak 33. Omogućite korisniku unos decimalne vrijednosti (jedna decimala). Ispišite je li uneseni broj cijeli broj ili decimalni broj (Pomoć: Morate otkriti je li znamenka iza točke jednaka 0, pokušajte koristiti množenje i modulo kako biste došli do te vrijednosti). Primjer:

    UNOS
    Unesite decimalni broj: 2.5
    ISPIS
    Uneseni broj je decimalni broj.

    P.S. Za unos broja 7 trebalo bi se ispisati
    Uneseni broj je cijeli broj.
*/

#include <iostream>
using namespace std;

int main (){

double decimalna;
cout << "Unesi cjelobrojnu decimalnu vrijednost" << endl; 
cin >> decimalna;

double decimalnibroj = (int) (decimalna * 10) % 10; // funkcionira isto kao i u proslom zadatku na nacin da 3.6 prvo pretvori u 3 (int) / dalje uzima 3 * 10 kaj je 30 / onda ide 30 % 10 - ispituje kaj ti ostane? u kutiju od 30 mozes staviti 3 necega od 10, ostao si bez icega (0) / tako zapravo onda znas da ti je broj cijeli. ako stavis 3.1 ostalo ti bude jedan bombon na zadnjem koraku i ispisat ce ti program da imas 0.1 jos kaj je zapravo decimala. 

if (decimalnibroj == 0) {
    cout << "Ovo je cijeli broj!" << endl;
} else {
    cout << "Ovo je decimalni broj!" << endl;
}

return 0; 

}

/*  Zadatak 34. Omogućite korisniku unos 4 cjelobrojne vrijednosti. Ispišite posebno zbroj pozitivnih brojeva a posebno zbroj negativnih brojeva (Pomoć: kreirajte pomoćne varijable - suma_pozitivnih i suma_negativnih). Primjer:

    UNOS
    Unesite 1. broj: -5
    Unesite 2. broj: 3
    Unesite 3. broj: -8
    Unesite 4. broj: 7
    ISPIS
    Zbroj pozitivnih brojeva: 10
    Zbroj negativnih brojeva: -13
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 35. Omogućite korisniku unos 4 cjelobrojne vrijednosti. Ispišite posebno umnožak parnih brojeva a posebno umnožak neparnih brojeva (Pomoć: kreirajte pomoćne varijable - umnozak_parnih i umnozak_neparnih - pripazite da ako množite onda početna vrijednost tim varijablama treba biti 1 a ne 0). Primjer:

    UNOS
    Unesite 1. broj: 4
    Unesite 2. broj: -3
    Unesite 3. broj: 2
    Unesite 4. broj: 5
    ISPIS
    Umnozak parnih brojeva: 8
    Umnozak neparnih brojeva: -15
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 36. Omogućite korisniku unos 3 decimalna broja. Ispišite upisane brojeve poredane od najvećeg prema najmanjem. Primjer:

    UNOS
    Unesite 1. broj: 3.7
    Unesite 2. broj: 2.6
    Unesite 3. broj: 7.4
    ISPIS
    Brojevi od najveceg prema najmanjem:
    7.4
    3.7
    2.6
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 37. Omogućite korisniku unos cjelobrojne vrijednosti od 1 do 10. Ispišite zbroj brojeva od 1 do unesene vrijednosti. Ako nije upisana ispravna ulazna vrijednost, ispišite „Pogrešna ulazna vrijednost.” (Pomoć: Treba li koristiti naredbu break? Možda samo na jednom mjestu…) Primjer:

    UNOS
    Unesite broj: 7
    ISPIS
    Zbroj brojeva od 1 do 7: 28
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 38. Omogućite korisniku unos troznamenkastog pozitivnog cijelog broja. Ispišite taj broj riječima (Pomoć: Potrebno je prvo izolirati znamenke (to je moguće učiniti korištenjem dijeljenja i modula) a nakon toga ovisno o vrijednostima znamenki ispisati odgovarajući niz nakova). Primjer:

    UNOS
    Unesite broj: 777
    ISPIS
    Uneseni broj: Sedamsto sedamdeset sedam
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 39. Omogućite korisniku unos znakovne vrijednosti a i cjelobrojne vrijednosti b u rasponu od 5 do 10. Ako je unesena kriva brojčana vrijednost, ispišite „Nedozvoljena ulazna vrijednost.” Ako je upisana ispravna vrijednost, u prvom retku se treba ispisati znak a i to b puta, u drugom redu znak a i to b-1 puta, u trećem redu znak a i to b-2 puta itd. sve do ispisa znaka a samo jednom (Pomoć: Treba li koristiti break?). Primjer:

    UNOS                ISPIS
    Unesite znak: c     ccccccc
    Unesite broj: 7     cccccc
                    ccccc
                    cccc
                    ccc
                    cc
                    c
*/

#include <iostream>
using namespace std;

int main (){



}
