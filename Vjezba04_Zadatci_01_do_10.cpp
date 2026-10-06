// Vježba 4 – konstante, nasumični brojevi, while i do...while

// ===== Konstante i enumeracije =====

/*  Zadatak 01. Kreirajte konstantu PI vrijednosti 3.14159. Od korisnika tražite da upiše radijus kugle. Ispišite promjer, oplošje i obujam kugle za upisani radijus. Rezultat ispišite s preciznošću na 3 decimale. Prilikom izračuna koristite definiranu konstantu PI.

Formule: https://www.calculat.org/hr/volumen-oplosje/kugla.html Primjer:

    Unesite radijus kugle: 5
    Promjer: 10.00
    Oplosje: 314.159
    Obujam: 523.598

Dodatni primjeri:

    Ulaz: 7  Izlaz: 14.00  615.752  1436.750
    Ulaz: 2  Izlaz:  4.00   50.2765   33.510
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 02. Kreirajte konstantu PI vrijednosti 3.14159. Od korisnika tražite da upiše radijus kruga. Ispišite promjer, opseg i površinu kruga za upisani radijus. Rezultat ispišite s preciznošću na 3 decimale. Prilikom izračuna koristite definiranu konstantu PI.

Formule: https://www.calculat.org/hr/povrsina-opseg/krug.html Primjer:

    Unesite radijus kruga: 5
    Promjer: 10.00
    Opseg: 31.415
    Povrsina: 78.539

Dodatni primjeri:

    Ulaz: 8  Izlaz: 16.00  50.265  201.062
    Ulaz: 3  Izlaz:  6.00  18.849   28.274
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 03. Kreirajte konstantu HRK_EUR vrijednosti 7.5345. Ispišite izbornik, svaka stavka u novom redu: 1. HRK -> EUR, 2. EUR -> HRK. Omogućite korisniku odabir opcije 1 ili 2. Ako odabere opciju 1, omogućite unos iznosa u kunama i ispišite taj iznos u eurima. Ako korisnik odabere opciju 2, omogućite unos iznosa u eurima i ispišite taj iznos u kunama. Za izračun koristite definiranu konstantu koja definira devizni tečaj. Primjer:

    1. HRK -> EUR
    2. EUR -> HRK
    Odaberite opciju: 1
    Unesite iznos u kunama (HRK): 700
    Upisani iznos u eurima (EUR): 93.906

Dodatni primjer:

    Opcija: 2 Iznos: 500  Izlaz: 3767.250
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 04. Kreirajte enumeraciju u kojoj su definirane vrijednosti strane svijeta (SJEVER, JUG, ISTOK, ZAPAD). Kreirajte varijablu definirane enumeracije imena „strana_svijeta1” te joj dodijelite vrijednost ZAPAD. Kreirajte i drugu varijablu definirane enumeracije imena „strana_svijeta2” te joj dodijelite vrijednost JUG. Ispišite numeričke vrijednosti varijabli „strana_svijeta1” i „strana_svijeta2”. Primjer:

    Strana svijeta 1: 3
    Strana svijeta 2: 1
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 05. Predprocesorskom instrukcijom #define kreirajte zamjenske izraze: neka izraz PRINT bude zamjenski izraz za cout, neka izraz INPUT bude zamjenski izraz za cin i neka izraz NOVI_RED bude zamjenski izraz za endl. Kreirajte program u kojem se od korisnika traži da unese jedan cijeli broj. Nakon toga ispišite jedan prazan red te nakon toga ispišite vrijednost upisanog broja. Prilikom izrade ovom programskog rješenja koristite zamjenske izraze umjesto naredbi cout, cin i endl. Primjer:

    Unesite jedan cijeli broj: 5

    Upisali ste broj 5.
*/

#include <iostream>
using namespace std;

int main (){



}

// ===== Generiranje nasumičnih brojeva =====

/*  Zadatak 06. Izgenerirajte nasumični broj u rasponu od 1 do 10. Ispišite ocjenu na temelju nasumično generiranog broja (0 - 2 = 1, 3 - 4 = 2, 4 - 6 = 3, 7 - 8 = 4, 9 - 10 = 5). Primjer:

    Generiram broj bodova...
    Izgenerirani broj bodova: 5
    Ocjena: 3

Dodatni primjeri:

    Broj bodova: 9  Ocjena: 5
    Broj bodova: 4  Ocjena: 2
    Broj bodova: 2  Ocjena: 1
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 07. Izgenerirajte nasumični broj u rasponu od 1 do 100. Ispišite ocjenu tekstom na temelju izgenerirane numeričke vrijednosti (0 - 49 = Nedovoljan, 50 - 60 = Dovoljan, 61 - 75 = Dobar, 76 - 90 = Vrlo dobar, 91 - 100 = Izvrstan). Primjer:

    Generiram broj bodova...
    Izgenerirani bodovi: 71
    Ocjena: Dobar

Dodatni primjeri:

    Nasumicna ocjena: 56  Ocjena: Dovoljan
    Nasumicna ocjena: 98  Ocjena: Izvrstan
    Nasumicna ocjena: 41  Ocjena: Nedovoljan
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 08. Izgenerirajte jedan četveroznamenkasti broj. Ispišite zbroj znamenki tog broja. Primjer:

    Generiram cetveroznamenkasti broj...
    Izgenerirani broj: 4961
    Zbroj znamenki broja 4961 iznosi 20.

Dodatni primjeri:

    Nasumicni broj: 2152  Zbroj: 10
    Nasumicni broj: 5201  Zbroj: 8
    Nasumicni broj: 8955  Zbroj: 27
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 09. Izgenerirajte jedan troznamenkasti broj. Ispišite koja znamenka je u broju najveća – storica, desetica ili jedinica. Primjer:

    Generiram troznamenkasti broj...
    Izgenerirani broj: 735
    Najveca znamenka: 7

Dodatni primjeri:

    Nasumicni broj: 381  Izlaz: 8
    Nasumicni broj: 225  Izlaz: 5
    Nasumicni broj: 331  Izlaz: 3
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 10. Izgenerirajte jedan nasumični broj u rasponu od 50 do 100. Ispišite sve brojeve od izgeneriranog broja do 100. Primjer:

    Generiram broj u rasponu od 50 do 100...
    Izgenerirani broj: 82
    Ispis brojeva od 82 do 100:
    82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100
*/

#include <iostream>
using namespace std;

int main (){



}
