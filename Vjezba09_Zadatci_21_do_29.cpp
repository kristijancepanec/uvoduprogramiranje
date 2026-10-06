// Vježba 9 – potprogrami, statičke varijable, reference, biblioteke

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

/*  Zadatak 21. Kreirajte biblioteku te u njoj kreirajte potprogram koji prima 2 cjelobrojne vrijednosti. Ako je prva veća od druge, tada potprogram ispisuje brojeve od manje do veće vrijednosti argumenata, a ako je prva vrijednost manja od druge, tada potprogram ispisuje brojeve od veće do manje vrijednosti argumenata. Potprogram nema povratnu vrijednost. Biblioteku snimite u direktorij gdje se nalazi Verifikator. U glavnom programu uključite kreiranu biblioteku te omogućite korisniku unos 2 cjelobrojne vrijednosti te pozovite kreiranu funkciju iz vaše biblioteke te joj proslijedite upisane vrijednosti. Primjer:

    Unesite 1. broj: 5
    Unesite 2. broj: 13
    Ispis brojeva: 13 12 11 10 9 8 7 6 5
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 22. Kreirajte biblioteku te u njoj kreirajte potprogram koji prima jednu cjelobrojnu vrijednost. Ako je argument u rasponu od 1 do 26, tada ispišite malo slovo engleske abecede koje odgovara unesenom rednom broju slova u abecedi. Ako je vrijednost argumenta van zadanog raspona, tada ispišite "Neispravan unos.". Potprogram nema povratnu vrijednost. Biblioteku snimite u direktorij gdje se nalazi Verifikator. U glavnom programu uključite kreiranu biblioteku te omogućite korisniku unos jedne cjelobrojne vrijednosti te pozovite kreiranu funkciju iz vaše biblioteke te joj proslijedite upisanu vrijednost. Primjer:

    Unesite redni broj slova: 11
    11. slovo engleske abecede: k
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 23. Kreirajte biblioteku te u njoj kreirajte potprogram koji prima jednu cjelobrojnu vrijednosti. Ako je proslijeđena cjelobrojna vrijednost negativan, potprogram treba vratiti logičku istinu, a ako je proslijeđena cjelobrojna vrijednost pozitivna, tada potprogram treba vratiti logičku laž. Biblioteku snimite u direktorij gdje se nalazi Verifikator. U glavnom programu uključite kreiranu biblioteku te omogućite korisniku unos jedne cjelobrojne vrijednosti te pozovite kreiranu funkciju iz vaše biblioteke te joj proslijedite upisanu vrijednost. Povratnu vrijednost ispišite na ekran u glavnom programu (main/izbornik). Primjer:

    Unesite broj: -5
    Negativan? 1

    Unesite broj: 12
    Negativan? 0
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 24. Kreirajte biblioteku te u njoj kreirajte potprogram koji prima jednu cjelobrojnu vrijednost, a vraća kvadrat proslijeđene vrijednosti (broj pomnožen sam sa sobom). Biblioteku snimite u direktorij gdje se nalazi Verifikator. U glavnom programu uključite kreiranu biblioteku te omogućite korisniku unos jedne cjelobrojne vrijednosti te pozovite kreiranu funkciju iz vaše biblioteke te joj proslijedite upisanu vrijednost. Povratnu vrijednost ispišite na ekran u glavnom programu (main/izbornik). Primjer:

    Unesite broj: 3
    Kvadrat: 9
*/

#include <iostream>
using namespace std;

int main (){



}

// ===== Posebni izazov =====

/*  Zadatak 25. Kreirajte polje od 10 elemenata za unos podataka o krugovima. Kreirajte i strukturu u koju ćete zapisati naziv (string), radijus (float), opseg (float) i površinu (float) kruga. U izborniku omogućite sljedeće opcije:

4.  Unos novog kruga u polje krugova (unose se naziv i radijus, izračunavaju se opseg i površina)

5.  Ispis svih krugova iz polja

6.  Ispis na temelju naziva kruga

Formule krug:

https://www.calculat.org/hr/povrsina-opseg/krug.html
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 26. Kreirajte polje od 10 elemenata za unos podataka o pravokutnicima. Kreirajte i strukturu u koju ćete zapisati naziv (string), stranice pravokutnika (int), opseg (int) i površinu (int) pravokutnika. U izborniku omogućite sljedeće opcije:

4.  Unos novog pravokutnika u polje pravokutnika (unose se naziv i stranice pravokutnika, izračunavaju se opseg i površina)

5.  Ispis svih pravokutnika iz polja

6.  Ispis na temelju naziva pravokutnika

Formule pravokutnik:

https://www.calculat.org/hr/povrsina-opseg/pravokutnik.html
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 27. Kreirajte polje od 10 elemenata za unos podataka o pravokutnim trokutima. Kreirajte i strukturu u koju ćete zapisati naziv (string), stranice pravokutnog trokuta (float), opseg (float) i površinu (float) pravokutnog trokuta. U izborniku omogućite sljedeće opcije:

4.  Unos novog pravokutnog trokuta u polje pravokutnih trokuta (unose se naziv i stranice pravokutnog trokuta, izračunavaju se opseg i površina)

5.  Ispis svih pravokutnih trokuta iz polja

6.  Ispis na temelju naziva pravokutnog trokuta

Formule pravokutni trokut:

https://www.calculat.org/hr/povrsina-opseg/pravokutni-trokut.html
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 28. Kreirajte polje od 10 elemenata za unos podataka o kuglama. Kreirajte i strukturu u koju ćete zapisati naziv (string), radijus kugle (flaot), obujam (float) i oplošje (float) kugle. U izborniku omogućite sljedeće opcije:

4.  Unos nove kugle u polje kugli (unose se naziv i radijus kugle, izračunavaju se obujam i oplošje)

5.  Ispis svih kugli iz polja

6.  Ispis na temelju naziva kugle

Formule kugla:

https://www.calculat.org/hr/volumen-oplosje/kugla.html
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 29. Kreirajte polje od 10 elemenata za unos podataka o kockama. Kreirajte i strukturu u koju ćete zapisati naziv (string), stranicu kocke (int), obujam (int) i oplošje (int) kocke. U izborniku omogućite sljedeće opcije:

4.  Unos nove kocke u polje kocaka (unose se naziv i stranica kocke, izračunavaju se obujam i oplošje)

5.  Ispis svih kocki iz polja

6.  Ispis na temelju naziva kocke

Formule kocka:

https://www.calculat.org/hr/volumen-oplosje/kocka.html
*/

#include <iostream>
using namespace std;

int main (){



}
