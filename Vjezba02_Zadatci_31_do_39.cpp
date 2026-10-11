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

int broj1, broj2, broj3, broj4;
cout << "Unesite prvi broj: " << endl; 
cin >> broj1; 

cout << "Unesite drugi broj: " << endl; 
cin >> broj2; 

cout << "Unesite treci broj: " << endl; 
cin >> broj3; 

cout << "Unesite cetvrti broj: " << endl; 
cin >> broj4; 

int suma_pozitivnih = 0; // gdje god se nesto mora zbrajati, dobro je staviti varijablu na 0, jer ako stavis nesto drugo, onda ce ti se to dodavati na pocetnu vrijednost i nece ti biti tocno.
int suma_negativnih = 0; // gdje god se nesto mora zbrajati, dobro je staviti varijablu na 0, jer ako stavis nesto drugo, onda ce ti se to dodavati na pocetnu vrijednost i nece ti biti tocno.

if (broj1 > 0)
{
   
    suma_pozitivnih = suma_pozitivnih + broj1; // ovo zbraja od nule plus prvi broj
} if (broj2 > 0) {
  
     suma_pozitivnih = suma_pozitivnih + broj2; // ovo zbraja prvi broj i drugi koji se upise, sumira se onda 
} if (broj3 > 0) {
    
     suma_pozitivnih = suma_pozitivnih + broj3; // ovo zbraja prvi broj, drugi i treci koji se upise, sumira se onda 
}  if (broj4 > 0) {
    
    suma_pozitivnih = suma_pozitivnih + broj4; // ovo zbraja sve brojeve, a cout ti mora biti izvan if-a. 
    
    
}
cout <<  "Zbroj pozitivnih brojeva: " << suma_pozitivnih << endl;  

if (broj1 < 0)
{
   
    suma_negativnih = suma_negativnih + broj1;
} if (broj2 < 0) {
  
     suma_negativnih = suma_negativnih + broj2;
} if (broj3 < 0) {
    
     suma_negativnih = suma_negativnih + broj3;
}  if (broj4 < 0) {
    
    suma_negativnih = suma_negativnih + broj4;
}
 cout <<  "Zbroj negativnih brojeva: " << suma_negativnih << endl;  

return 0;
}

/*  Zadatak 35. Omogućite korisniku unos 4 cjelobrojne vrijednosti. Ispišite posebno umnožak parnih brojeva a posebno umnožak neparnih brojeva (Pomoć: kreirajte pomoćne varijable - umnozak_parnih i umnozak_neparnih - pripazite da ako množite onda početna vrijednost tim varijablama treba biti 1 a ne 0). Primjer:

    UNOS
    Unesite 1. broj: 4
    Unesite 2. broj: -3
    Unesite 3. broj: 2
    Unesite 4. broj: 5
    ISPIS
    Umnozak parnih brojeva: 8
    Umnozak neparnih brojeva: -15 // ista prica kao i kod zadatka gore,  moras spremati umnozak svakog broja u pomocne varijable i onda ga ispisati VAN samog IF-a
*/

#include <iostream>
using namespace std;

int main (){

int broj1, broj2, broj3, broj4;
cout << "Unesite prvi broj: " << endl; 
cin >> broj1; 

cout << "Unesite drugi broj: " << endl; 
cin >> broj2; 

cout << "Unesite treci broj: " << endl; 
cin >> broj3; 

cout << "Unesite cetvrti broj: " << endl; 
cin >> broj4; 

int umnozak_parnih  = 1;
int umnozak_neparnih = 1; 

if (broj1 % 2 == 0) {
        umnozak_parnih = umnozak_parnih * broj1;
} 

if (broj2 % 2 == 0) {
        umnozak_parnih = umnozak_parnih * broj2;
}

if (broj3 % 2 == 0) {
        umnozak_parnih = umnozak_parnih * broj3;
}

if (broj4 % 2 == 0) {
      umnozak_parnih = umnozak_parnih * broj4;
}

cout << "Umnozak parnih brojeva je: " << umnozak_parnih << "." << endl; 


if (broj1 % 2 != 0) {
     umnozak_neparnih = umnozak_neparnih * broj1;
}

if (broj2 % 2 != 0) {
     umnozak_neparnih = umnozak_neparnih * broj2;
}


if (broj3 % 2 != 0) {
     umnozak_neparnih = umnozak_neparnih * broj3;
}


if (broj4 % 2 != 0) {
     umnozak_neparnih = umnozak_neparnih * broj4;
}
cout << "Umnozak neparnih brojeva je: " << umnozak_neparnih << "." << endl; 
return 0; 
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

int main() {

    double a, b, c;

    cout << "Unesi prvi broj:" << endl;
    cin >> a;

    cout << "Unesi drugi broj:" << endl;
    cin >> b;

    cout << "Unesi treci broj:" << endl;
    cin >> c;

    cout << "Brojevi od najveceg prema najmanjem:" << endl;

    if (a > b && a > c) {
        cout << a << endl;

        if (b > c) {
            cout << b << endl;
            cout << c << endl;
        } else {
            cout << c << endl;
            cout << b << endl;
        }
    }

    if (b > a && b > c) {
        cout << b << endl;

        if (a > c) {
            cout << a << endl;
            cout << c << endl;
        } else {
            cout << c << endl;
            cout << a << endl;
        }
    }

    if (c > a && c > b) {
        cout << c << endl;

        if (a > b) {
            cout << a << endl;
            cout << b << endl;
        } else {
            cout << b << endl;
            cout << a << endl;
        }
    }

    return 0;
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

int a;
cout << "Unesi cjelobrojnu vrijednost od 1 do 10: " << endl; 
cin >> a; 

int zbrajanje = 0; 
int i;

for (i = 1; i <= a; i++) {
     zbrajanje = zbrajanje + i; 
}

if (a > 0 && a < 10) {
    cout << "Zbroj brojeva: " << zbrajanje << "." << endl; 
} else {
    cout << "Pogrešna ulazna vrijednost." << endl; 
}
return 0; 
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

int a;
cout << "Unesi troznamenkasti pozitivni broj: " << endl; 
cin >> a; 

int jedinice = a % 10; 
int desetice = (a /10) % 10;
int stotice = a / 100; 

cout << "Stotice: " << stotice << endl; 
cout << "Desetice: " << desetice << endl; 
cout << "Jedinice: " << jedinice << endl; 
cout << "Uneseni broj: " << stotice << desetice << jedinice << endl; 

switch (stotice) {
    case 1:
        cout << "Sto ";
        break;
    case 2:
        cout << "Dvjesto ";
        break;
    case 3:
        cout << "Tristo ";
        break;
    case 4:
        cout << "Cetiristo ";
        break;
    case 5:
        cout << "Petsto ";
        break;
    case 6:
        cout << "Seststo ";
        break;
    case 7:
        cout << "Sedamsto ";
        break;
    case 8:
        cout << "Osamsto ";
        break;
    case 9:
        cout << "Devetsto ";
        break;
    default:
        break;
}

switch (desetice) {
    case 1:
        if (jedinice == 0)
            cout << "deset ";
        else if (jedinice == 1)
            cout << "jedanaest ";
        else if (jedinice == 2)
            cout << "dvanaest ";
        else if (jedinice == 3)
            cout << "trinaest ";
        else if (jedinice == 4)
            cout << "cetrnaest ";
        else if (jedinice == 5)
            cout << "petnaest ";
        else if (jedinice == 6)
            cout << "sesnaest ";
        else if (jedinice == 7)
            cout << "sedamnaest ";
        else if (jedinice == 8)
            cout << "osamnaest ";
        else
            cout << "devetnaest ";
        break;

    case 2:
        cout << "dvadeset ";
        break;
    case 3:
        cout << "trideset ";
        break;
    case 4:
        cout << "cetrdeset ";
        break;
    case 5:
        cout << "pedeset ";
        break;
    case 6:
        cout << "sezdeset ";
        break;
    case 7:
        cout << "sedamdeset ";
        break;
    case 8:
        cout << "osamdeset ";
        break;
    case 9:
        cout << "devedeset ";
        break;
    default:
        break;
}



switch (jedinice) {
      case 1:
        cout << "jedan";
        break;
    case 2:
        cout << "dva";
        break;
    case 3:
        cout << "tri";
        break;
    case 4:
        cout << "cetiri";
        break;
    case 5:
        cout << "pet";
        break;
    case 6:
        cout << "sest";
        break;
    case 7:
        cout << "sedam";
        break;
    case 8:
        cout << "osam";
        break;
    case 9:
        cout << "devet";
        break;
    default:
        break;
}
return 0; 

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

#include <iostream>
using namespace std;

int main (){

char a;
int b;

    cout << "Unesite znak: ";
    cin >> a;

    cout << "Unesite broj: ";
    cin >> b;
    
    
  if (b < 5 || b > 10) {
        cout << "Nedozvoljena ulazna vrijednost." << endl;
        return 0;
    }
    
      for (int i = b; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << a;
        }
        cout << endl;
    }

    return 0;

}