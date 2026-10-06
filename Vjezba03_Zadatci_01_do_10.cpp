// Vježba 3 – tipovi podataka, ispis, bitovni operatori, for

// ===== Tipovi podataka =====

/*  Zadatak 01. Omogućite korisniku unos u varijablu znakovnog tipa veliko slovo engleske abecede. Ako korisnik ne unese veliko slovo, ispišite „Krivi unos znaka.” (Pomoć: Provjeru ćete raditi na temelju numeričke vrijednosti - pogledajte koje su to dozvoljene numeričke vrijednost za mala slova abecede u ASCII tablici znakova. Ispišite taj znak i numeričku vrijednost tog znaka iz ASCII tablice znakova. ASCII tablica. Primjer:

    Unesite slovo: G
    Slovo G ima ASCII vrijednost 71.

Dodatni primjeri:

    Ulaz: N  Izlaz: 78
    Ulaz: Y  Izlaz: 89
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 02. Ispišite izbornik sa svakom stavkom u novom redu: 1. int, 2. float, 3. char, 4. bool. Omogućite korisniku unos cjelobrojne vrijednosti u rasponu od 1 do 4. Za odabranu mogućnost ispišite korištenjem operatora sizeof veličinu tog tipa podatka. Ako korisniku unese vrijednost van zadanog raspona ispišite „Neispravan odabir.” Primjer:

    1. int
    2. float
    3. char
    4. bool
    Odaberite opciju (1-4): 1
    Tip podatka int zauzima 4B u memoriji.

Dodatni primjeri:

    Ulaz: 3  Izlaz: 1B
    Ulaz: 2  Izlaz: 4B
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 03. Omogućite korisniku unos četveroznamenkastog cijelog broja. Ako korisnik ne unese četveroznamenkasti broj, ispišite „Neispravna ulazna vrijednost.” Ispišite izbornik, svaka stavka u novom redu: 1. Tisucica, 2. Stotica, 3. Desetica, 4. Jedinica. Omogućite korisniku unos cjelobrojne vrijednosti u rasponu od 1 do 4. Ako korisnik unese vrijednost van raspona, ispišite „Neispravan odabir.” Ovisno o odabiru, ispišite tisućicu, stoticu, deseticu ili jedinicu unesenog broja. Primjer:

    Unesite cetveroznamenkasti broj (1000-9999): 3573
    1. Tisucica
    2. Stotica
    3. Desetica
    4. Jedinica
    Odaberite opciju (1-4): 2
    Stotica broja 3573 je 5.
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 04. Omogućite korisniku unos četveroznamenkastog cijelog broja. Ako korisnik ne unese četveroznamenkasti broj, ispišite „Neispravna ulazna vrijednost.” Ispišite zbroj znamenki unesenog broja. Primjer:

    Unesite cetveroznamenkasti broj (1000-9999): 3724
    Zbroj znamenki broja 3724 iznosi 16.

Dodatni primjeri:

    Ulaz: 1231  Izlaz: 7
    Ulaz: 5897  Izlaz: 29
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 05. Omogućite korisniku unos decimalnog broja na 4 znamenke. Ispišite decimalni dio broja kao cjelobrojnu vrijednost. Primjer:

    Unesite decimalni broj: 7.3285
    Decimalni dio: 3285

Dodatni primjeri:

    Ulaz: 54.8311  Izlaz: 8311
    Ulaz: 2.7794   Izlaz: 7794
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 06. Omogućite korisniku unos 2 decimalna broja. Ispišite njihov kvocijent (prvi broj dijeljeno drugi broj). Rezultat ispišite s preciznošću na tri decimale bez zaokruživanja. Primjer:

    Unesite 1. decimalni broj: 5.72
    Unesite 2. decimalni broj: 2.54
    Kvocijent: 2.251

Dodatni primjeri:

    Ulaz: 88.43 28.31  Izlaz: 3.123
    Ulaz: 155.04 22.31  Izlaz: 6.949
*/

#include <iostream>
using namespace std;

int main (){



}

// ===== Vrste ispisa i bitovni operatori =====

/*  Zadatak 07. Omogućite korisniku unos 2 cijela broja. Ispišite njihov umnožak u dekadskom, oktalnom i heksadekadskom brojevnom sustavu. Primjer:

    Unesite 1. cijeli broj: 25
    Unesite 2. cijeli broj: 73
    Umnozak u dekadskom: 1825
    Umnozak u oktalnom: 3441
    Umnozak u heksadekadskom: 721

Dodatni primjeri:

    Ulaz: 55 21  Izlaz: 1155 2203 483
    Ulaz: 96 42  Izlaz: 4032 7700 FC0
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 08. Omogućite korisniku unos 2 cijela broja: prvi treba biti u oktalnom a drugi u heksadekadskom brojevnom sustavu (pretpostavit ćemo da će korisnik upisati ispravne vrijednosti). (Pomoć: Za unos broja u oktalnom i heksadekadskom sustavu modifikatore trebate koristiti kod korištenja objekta cin). Usporedite ova dva broja i ispišite koji je manji te taj broj ispišite u istom brojevnom sustavu u kojem je i unesen). Primjer:

    Unesite oktalni broj: 077
    Unesite heksadekadski broj: 0x4d
    Manji broj je 77.

Dodatni primjeri:

    Ulaz: 0253 0x3f  Izlaz: 3F
    Ulaz: 0325 0xff  Izlaz: 325
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 09. Omogućite korisniku unos cijelog četveroznamenkastog broja. Ako korisnik ne unese ispravnu vrijednost ispišite „Neispravan unos broja.” Znamenke ispišite u obrnutom redoslijedu u navodnicima. (Pomoć: Za ispis znamenki u obrnutom redoslijedu treba izolirati pojedine znamenke i onda ih jednostavno ispisati u željenom redoslijedu). Primjer:

    Unesite cetveroznamenkasti broj (1000-9999): 3859
    Broj 3859 ispisan unatrag je „9583".

Dodatni primjeri:

    Ulaz: 8311  Izlaz: "1138"
    Ulaz: 2994  Izlaz: "4992"
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 10. Omogućite korisniku unos 4 decimalna broja. U prvom redu ispišite te brojeve odvojene tabulatorom a u drugom redu ispišite cjelobrojni dio tih brojeva također odvojene tabulatorom. Napomena: Za prelazak u novi red ne smijete koristiti konstantu endl. Primjer:

    Unesite 1. decimalni broj: 5.73
    Unesite 2. decimalni broj: 8.21
    Unesite 3. decimalni broj: 3.97
    Unesite 4. decimalni broj: 1.32
    5.73    8.21    3.97    1.32
    5       8       3       1

Dodatni primjer:

    Ulaz: 1.23 7.73 9.33 5.52
    Izlaz:
    1.23    7.73    9.33    5.52
    1       7       9       5
*/

#include <iostream>
using namespace std;

int main (){



}
