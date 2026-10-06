// Vježba 10 – dinamička alokacija, vezana lista

// ===== Dinamička alokacija struktura =====

/*  Zadatak 21. Kreirajte strukturu u kojoj ćete pohraniti jedan podatak tipa string za unos imena i jedan cjelobrojni podatak za unos ocjene. Dinamički alocirajte dvije varijable kreirane strukture. Omogućite korisniku unos imena i ocjene za ove dvije strukturne varijable. Ispišite ime i ocjenu iz one varijable gdje je upisana veća ocjena. Ako su u obje varijable upisane iste ocjene, ispišite podatke iz obje strukturne varijable. Dealocirajte varijable strukturnog tipa koje ste kreirali. Primjer:

    Unesite 1. ime: Mladen
    Unesite ocjenu: 3
    Unesite 2. ime: Ana
    Unesite ocjenu: 4
    Bolji rezultat:
    Ime: Ana
    Ocjena: 4
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 22. Kreirajte strukturu u kojoj ćete pohraniti dva cjelobrojna podatka, stranice pravokutnika. Dinamički alocirajte dvije varijable kreirane strukture. U prvu omogućite korisniku unos dužina stranica. U drugu generirajte dužine stranica u rasponu od 10 do 30. Ispišite površinu i opseg za oba pravokutnika. Dealocirajte varijable strukturnog tipa koje ste kreirali. Primjer:

    Unesite duzinu 1. stranice: 4
    Unesite duzinu 2. stranice: 7
    Generirana 1. stranica: 14
    Generirana 2. stranica: 13
    1. pravokutnik - opseg: 22 - povrsina: 28
    2. Pravokutnik - opseg: 54 - povrsina: 182
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 23. Kreirajte strukturu u kojoj ćete pohraniti 3 cjelobrojne vrijednosti. Kreirajte dvije varijable strukturnog tipa: jednu alocirajte statički a drugu dinamički (Pomoć: Ovo nije statička varijabla stoga ne koristite ključnu riječ static, ovo je statička alokacija varijable). Omogućite korisniku unos svih vrijednosti u obje varijable strukturnog tipa. Ispišite ukupan zbroj svih brojeva iz obje strukturne varijable. Dealocirajte strukturnu varijablu koju ste alocirali dinamički. Primjer:

    Unesite 1. broj: 5
    Unesite 2. broj: 7
    Unesite 3. broj: 2
    Unesite 1. broj: 1
    Unesite 2. broj: 9
    Unesite 3. broj: 4
    Zbroj svih brojeva u obje strukturne varijable: 28
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 24. Kreirajte strukturu u kojoj ćete pohraniti jednu cjelobrojnu vrijednost i jednu logičku vrijednost. Kreirajte dvije varijable strukturnog tipa: jednu alocirajte statički a drugu dinamički (Pomoć: Ovo nije statička varijabla stoga ne koristite ključnu riječ static, ovo je statička alokacija varijable). Omogućite korisniku unos cjelobrojne vrijednosti u ove strukturne varijable. Ako korisnik unese cjelobrojnu vrijednost koja je pozitivan broj, tada pripadajuću logičku vrijednost u strukturnoj varijabli postavite na 1, u suprotnom ju postavite na 0. Ispišite i cjelobrojne i logičke vrijednosti iz kreiranih strukturnih varijabli. Dealocirajte strukturnu varijablu koju ste alocirali dinamički. Primjer:

    Unesite broj u 1. strukturni varijablu: 5
    Unesite broj u 2. strukturnu varijablu: -7
    1. varijabla - broj: 5 - logicka vrijednost: 1
    2. varijabla - broj: -7 - logicka vrijednost: 0
*/

#include <iostream>
using namespace std;

int main (){



}

// ===== Posebni izazov =====

/*  Zadatak 25. Kreirajte vezanu listu gdje će element vezane liste biti struktura u kojoj je podatkovni dio dvije cjelobrojne varijable. Kreirajte glavu vezane liste u glavnom potprogramu (main/izbornik). Kreirajte potprograme za unos novog elementa u vezanu listu i potprogram za ispis svih elemenata iz vezane liste. Kod unosa jednostavno omogućite korisniku unos vrijednosti u cjelobrojne varijable elementa liste, a kod ispisa jednostavno za svaki element ispišite unesene cjelobrojne vrijednosti.

    Odabir: 1 (Unos)
    Unesite 1. broj: 5
    Unesite 2. broj: 4
    Odabir: 1 (Unos)
    Unesite 1. broj: 7
    Unesite 2. broj: 8
    Odabir: 2 (Ispis)
    1. Element - 5 4
    2. Element - 7 8
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 26. Kreirajte vezanu listu gdje će element vezane liste biti struktura u kojoj je podatkovni dio tri cjelobrojne varijable. Kreirajte glavu vezane liste u glavnom potprogramu (main/izbornik). Kreirajte potprograme za unos novog elementa u vezanu listu i potprogram za ispis svih elemenata iz vezane liste. Kod unosa u podatkovni dio generirajte 3 nasumične brojčane vrijednosti u rasponu od 100 do 200, a kod ispisa jednostavno ispišite generirane vrijednosti u svakom elementu vezane liste.

    Odabir: 1 (Unos)
    Generiram 3 broja i upisujem u vezanu listu...
    Odabir: 1 (Unos)
    Generiram 3 broja i upisujem u vezanu listu...
    Odabir: 2 (Ispis)
    1. Element - 184 139 192
    2. Element - 195 155 138
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 27. Kreirajte vezanu listu gdje će element vezane liste biti struktura u kojoj je podatkovni dio jedna cjelobrojna varijable. Kreirajte glavu vezane liste u glavnom potprogramu (main/izbornik). Kreirajte potprograme za unos novog elementa u vezanu listu i potprogram za ispis svih elemenata iz vezane liste. Kod unosa u podatkovni omogućite korisniku unos u cjelobrojnu varijablu, a kod ispisa ispišite cjelobrojnu varijablu za svaki element a na kraju, nakon ispisa cijele liste ispišite sumu svih unesenih vrijednosti u vezanoj listi.

    Odabir: 1 (Unos)
    Unesite broj: 5
    Odabir: 1 (Unos)
    Unesite broj: 7
    Odabir: 2 (Ispis)
    Ispis liste: 5 7
    Suma svih brojeva: 12
*/

#include <iostream>
using namespace std;

int main (){



}
