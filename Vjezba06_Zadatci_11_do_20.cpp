// Vježba 6 – polja i strukture

// ===== Strukture - osnovni zadatci =====

/*  Zadatak 11. Kreirajte strukturu u kojoj ćete deklarirati 4 znakovne varijable. Kreirajte strukturnu varijablu, generirajte 4 nasumična velika slova engleske abecede u znakovne varijable. Ispišite njihove vrijednosti u jednom redu bez razmaka. Primjer:

    Ispis znakova: DOSL
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 12. Kreirajte strukturu u kojoj ćete deklarirati 4 cjelobrojne vrijednosti. Kreirajte strukturnu varijablu, omogućite korisniku unos vrijednosti u te varijable. Ispišite prosječnu vrijednost unesenih brojeva (Pomoć: prosjek se računa tako da zbrojite vrijednosti i podijelite s količinom brojeva koje ste zbrojili). Primjer:

    Unesite 1. broj: 2
    Unesite 2. broj: 7
    Unesite 3. broj: 5
    Unesite 4. broj: 3
    Prosjek: 4.25
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 13. Kreirajte strukturu u kojoj ćete deklarirati jednu cjelobrojnu, jednu decimalnu, jednu znakovnu i jednu logičku varijablu. Kreirajte dvije strukturne varijable. Omogućite korisniku unos vrijednosti u prvu strukturnu varijablu te onda te podatke kopirajte u drugu strukturnu varijablu. Na kraju ispišite vrijednosti iz druge strukturne varijable. Primjer:

    Unesite jedan cijeli broj: 7
    Unesite jedan decimalni broj: 3.51
    Unesite jedan znak: f
    Unesite jednu logičku vrijednost: 1
    Ispis brojeva druge strukturne varijable:
    7
    3.51
    f
    1
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 14. Kreirajte strukturu u kojoj ćete deklarirati 3 cjelobrojne vrijednosti. Kreirajte 2 strukturne varijable. U prvoj generirajte 3 nasumična broja u rasponu od 11 do 99. Kopirajte te vrijednosti u drugu strukturnu varijablu umanjene za 1. Na kraju ispišite vrijednosti iz obje strukturne varijable. Primjer:

    Generirani brojevi:
    77
    36
    48
    Brojevi umanjeni za jedan:
    76
    35
    47
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 15. Kreirajte strukturnu varijablu u kojoj ćete deklarirati 2 decimalne vrijednosti. Kreirajte strukturnu varijablu i omogućite korisniku unos vrijednosti ta dva decimalna broja. Ispišite korisniku zbroj, razliku, kvocijent i umnožak između prvog i drugog broja. Primjer:

    Unesite 1. decimalni broj: 7.23
    Unesite 2. decimalni broj: 3.61
    Zbroj: 10.84
    Razlika: 3.62
    Kvocijent: 2.0027
    Umnozak: 26.1003
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 16. Kreirajte strukturnu varijablu u kojoj ćete deklarirati 5 logičkih varijabli. Kreirajte strukturnu varijablu te generirajte 5 nasumičnih logičkih vrijednosti (0 ili 1) u ove varijable. Ispišite vrijednosti tih logičkih varijabli u jednom redu odvojene razmakom. Primjer:

    Generirane logicke vrijednosti: 0 1 0 0 1
*/

#include <iostream>
using namespace std;

int main (){



}

// ===== Polja i strukture - nastavak =====

/*  Zadatak 17. Kreirajte 2 polja veličine 10 brojeva. Generirajte u prvo polje nasumične brojeve u rasponu od 10 do 50 u sve elemente polja. Funkcijom memcpy kopirajte brojeve iz prvog polja u u drugo polje. Ispišite sadržaj oba polja, svako u jednom retku, brojevi odvojeni razmakom. Primjer:

    Ispis 1. polja:
    12 36 22 41 47 17 25 31 39 29
    Ispis 2. polja:
    12 36 22 41 47 17 25 31 39 29
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 18. Kreirajte 2 polja veličine 5 brojeva. Omogućite korisniku unos cjelobrojnih vrijednosti u prvo polje. Kopirajte "ručno" broj po broj iz prvog polja u drugo polje, ali pritom svaki broj uvećajte za jedan. Ispišite korisniku drugo polje. Primjer:

    Unesite 1. broj: 35
    Unesite 2. broj: 512
    Unesite 3. broj: 12
    Unesite 4. broj: 48
    Unesite 5. broj: 931
    Ispis 2. polja:
    36 513 13 49 932
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 19. Kreirajte strukturu za unos/pohranu stranica (a, b), opsega i površine pravokutnika. Kreirajte polje čiji će elementi biti definirana struktura, polje od 3 elementa. Omogućite korisniku unos stranica za 3 pravokutnika u polju. Izračunajte za te pravokutnike opseg i površinu. Nakon svakog unosa ispišite opseg i površinu unesenog pravokutnika. Primjer:

    Unesite stranicu a: 5
    Unesite stranicu b: 8
    Opseg: 26
    Povrsina: 40
    Unesite stranicu a: 10
    Unesite stranicu b: 14
    Opseg: 48
    Povrsina: 140
    Unesite stranicu a: 7
    Unesite stranicu b: 22
    Opseg: 58
    Povrsina: 154
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 20. Kreirajte polje veličine 2 elementa. Omogućite korisniku unos 2 cjelobrojne vrijednosti u polje. Ako je prvi broj u polju manji od drugog broja, zamijenite im vrijednosti u polju (neka veći broj bude na 0. indeksu a manji na 1. indeksu). Ako je prvi broj veći od drugog, nije potrebno napraviti ništa. Ispišite polje. Primjer:

    Unesite 1. broj: 2
    Unesite 2. broj: 5
    Ispis:
    0: 5
    1: 2

Dodatni primjer:

    Unesite 1. broj: 7
    Unesite 2. broj: 4
    Ispis:
    0: 7
    1: 4
*/

#include <iostream>
using namespace std;

int main (){



}
