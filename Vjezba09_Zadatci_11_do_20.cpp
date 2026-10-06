// Vježba 9 – potprogrami, statičke varijable, reference, biblioteke

// ===== Statička lokalna varijabla i referenca =====

/*  Zadatak 11. Kreirajte potprogram koji ima statičku lokalnu varijablu i inicijalizirajte ju na vrijednost 0. Potprogramu proslijedite jednu cjelobrojnu vrijednost. Ako je vrijednost argumenta paran broj, tada statičku lokalnu varijablu povećajte za jedan. Potprogram kao povratnu vrijednost treba vratiti vrijednost statičke lokalne varijable. U glavnom potprogramu (main/izbornik) omogućite korisniku unos cjelobrojne vrijednosti i proslijedite ju kreiranom potprogramu, a povratnu vrijednost ispišite na ekran. (Ako ste dobro sve napravili uvijek bi se trebalo ispisati koliko ste unijeli parnih brojeva). Primjer:

    Unesite broj: 500
    Kolicina parnih brojeva: 1
    Unesite broj: 637
    Kolicina parnih brojeva: 1
    Unesite broj: 372
    Kolicina parnih brojeva: 2
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 12. Kreirajte potprogram koji ima statičku lokalnu varijablu i inicijalizirajte ju na vrijednost 3. U potprogramu u statičku lokalnu varijablu upišite njenu vrijednost pomnoženu sa samom sobom (prvi izračun: 3 * 3). Povratna vrijednost potprograma treba biti vrijednost statičke varijable. U glavnom potprogramu (main/izbornik) pozovite kreirani potprogram 5 puta a povratnu vrijednost ispišite na ekran. Primjer:

    Staticka varijabla: 9
    Staticka varijabla: 27
    Staticka varijabla: 729
    Staticka varijabla: 531441
    Staticka varijabla: 282429536481
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 13. U glavnom potprogramu (main/izbornik) kreirajte dvije varijable, a i b, i omogućite korisniku unos vrijednosti u te varijable. Kreirajte potprogram koji prima dva argumenta kao reference. U potprogramu prvi argument povećajte za 5, a drugi smanjite za 5. Potprogram nema povratnu vrijednost. U glavnom potprogramu (main/izbornik) pozovite kreirani potprogram i proslijedite unesene vrijednosti, a i b, te nakon izvršavanja potprograma ispišite vrijednost varijabli a i b. Primjer:

    Unesite 1. broj: 7
    Unesite 2. broj: 14
    Prvi broj + 5: 12
    Drugi broj - 5: 9
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 14. U glavnom potprogramu (main/izbornik) kreirajte dvije varijable, a i b, i omogućite korisniku unos vrijednosti u te varijable. Kreirajte potprogram koji prima dva argumenta kao reference. U potprogramu u prvi argument izračunajte zbroj proslijeđenih argumenata a u drugi umnožak proslijeđenih argumenata (a * b). (Oprez: Trebat ćete neku pomoćnu varijablu kako ne biste prilikom izračuna izgubiti proslijeđeni argument). Potprogram nema povratnu vrijednost. U glavnom potprogramu (main/izbornik) pozovite kreirani potprogram i proslijedite unesene vrijednosti, a i b, te nakon izvršavanja potprograma ispišite vrijednost varijabli a i b. Primjer:

    Unesite 1. broj: 7
    Unesite 2. broj: 12
    Zbroj: 19
    Umnozak: 84
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 15. Kreirajte potprogram koji će primati jedan logički argument kao referencu i jedan cjelobrojni argument. Ako je cjelobrojni argument negativna vrijednost, tada trebate promijeniti vrijednost logičkog argumenta (istinu u laž ili obrnuto). Ako je cjelobrojni argument pozitivna vrijednost, tada nemojte mijenjati vrijednost logike varijable. U glavnom potprogramu (main/izbornik) kreirajte logičku i cjelobrojnu varijablu te omogućite korisniku unos u te varijable. Unesene vrijednosti proslijedite potprogramu. Nakon izvođenja potprograma ispišite na ekran vrijednost logičke varijable. Primjer:

    Unesite logicku vrijednost: 1
    Unesena cjelobrojna vrijednost: -5
    Nova vrijednost logicke varijable: 0

    Unesite logicku vrijednost: 1
    Unesena cjelobrojna vrijednost: 7
    Nova vrijednost logicke varijable: 1
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 16. Kreirajte potprogram koji će primiti cjelobrojnu vrijednost kao referencu (a) i još jednu cjelobrojnu vrijednost (b). Potprogram treba u argument imena a izračunati a na potenciju b, a u argument imena b izračunati a dijeljeno b (Oprez: trebat će vam pomoćna varijabla da prilikom izračuna ne izgubite izvornu vrijednost argumenta). U glavnom potprogramu (main/izbornik) kreirajte dvije varijable i omogućite korisniku unos vrijednosti u te varijable. Zatim pozovite kreirani potprogram i proslijedite mu unesene vrijednosti u varijable kao argumente. Na kraju ispišite vrijednosti prve i druge varijable koje su proslijeđene kao reference. Primjer:

    Unesite broj a: 7
    Unesite broj b: 4
    7 na 4 iznosi: 2401
    7 dijeljeno 4 iznosi: 1.75
*/

#include <iostream>
using namespace std;

int main (){



}

// ===== Vlastite biblioteke =====

/*  Važna napomena:

Kod rješavanja zadataka kod kojih izrađujete vlastitu biblioteku i tu biblioteku morate prenijeti na sustav (Moodle) kao dio rješenja - bez biblioteke programsko rješenje neće raditi.

Stoga, osim prijenosa .cpp i _test.cpp datoteka vašeg programskog rješenja morate na sustav prenijeti i biblioteku koju ste izradili.

Vaša biblioteka mora imati ime u sljedećem formatu:

<naziv_glavne_programske_datoteke>.cc

Znači, ime biblioteke treba biti identično imenu datoteke vašeg programskog rješenja samo treba imati ekstenziju .cc

Primjer naziva datoteka:

Konecki_Mladen_Vjezba_09.cpp

Konecki_Mladen_Vjezba_09_test.cpp

Konecki_Mladen_Vjezba_09.cc
*/

/*  Zadatak 17. Kreirajte biblioteku te u njoj kreirajte potprogram koji prima 4 broja a vraća njihov umnožak. Biblioteku snimite u direktorij gdje se nalazi Verifikator. U glavnom programu uključite kreiranu biblioteku te omogućite korisniku unos 4 cjelobrojne vrijednosti te pozovite kreiranu funkciju iz vaše biblioteke te joj proslijedite upisane vrijednosti. Povratnu vrijednost ispišite na ekran u glavnom programu (main/izbornik). Primjer:

    Unesite 1. broj: 5
    Unesite 2. broj: 8
    Unesite 3. broj: 4
    Unesite 4. broj: 10
    Umnozak: 1600
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 18. Kreirajte biblioteku te u njoj kreirajte potprogram koji prima 5 brojeva, a vraća njihov zbroj. Biblioteku snimite u direktorij gdje se nalazi Verifikator. U glavnom programu uključite kreiranu biblioteku te omogućite korisniku unos 5 cjelobrojnih vrijednosti te pozovite kreiranu funkciju iz vaše biblioteke te joj proslijedite upisane vrijednosti. Povratnu vrijednost ispišite na ekran u glavnom programu (main/izbornik). Primjer:

    Unesite 1. broj: 7
    Unesite 2. broj: 2
    Unesite 3. broj: 5
    Unesite 4. broj: 3
    Unesite 5. broj: 9
    Zbroj: 26
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 19. Kreirajte biblioteku te u njoj kreirajte potprogram koji prima dva decimalna argumenta, a vraća manji broj od dva argumenta. Biblioteku snimite u direktorij gdje se nalazi Verifikator. U glavnom programu uključite kreiranu biblioteku te omogućite korisniku unos 2 decimalne vrijednosti te pozovite kreiranu funkciju iz vaše biblioteke te joj proslijedite upisane vrijednosti. Povratnu vrijednost ispišite na ekran u glavnom programu (main/izbornik). Primjer:

    Unesite 1. decimalni broj: 5.24
    Unesite 2. decimalni broj: 3.94
    Manji broj: 3.94
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 20. Kreirajte biblioteku te u njoj kreirajte potprogram koji prima jednu cjelobrojnu vrijednost, a vraća taj broj umanjen za 1. Biblioteku snimite u direktorij gdje se nalazi Verifikator. U glavnom programu uključite kreiranu biblioteku te omogućite korisniku unos jedne cjelobrojne vrijednosti te pozovite kreiranu funkciju iz vaše biblioteke te joj proslijedite upisanu vrijednost. Povratnu vrijednost ispišite na ekran u glavnom programu (main/izbornik). Primjer:

    Unesite cjelobrojnu vrijednost: 12
    Broj umanjen za 1: 11
*/

#include <iostream>
using namespace std;

int main (){



}
