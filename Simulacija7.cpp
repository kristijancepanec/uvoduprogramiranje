/*  Simulacija 7 – predavanje 10 (pokazivači)

Opcije izbornika: 1. Dinamicke varijable, 2. Dinamicko polje, 3. Dinamicka struktura, 4. Posebni izazov – polje studenata, 9. Izlaz iz programa. Svaka opcija je potprogram. Sve što alociraš s new dealociraj prije izlaska iz potprograma: delete za varijablu, delete [] za polje.

Zadatak 1 – Dinamičke varijable. Dinamički alociraj dvije cjelobrojne varijable i omogući unos u njih. Napravi funkciju void uzlazno(int *x, int *y) koja preko pokazivača zamijeni vrijednosti ako je prva veća od druge. Ispiši vrijednosti nakon poziva i adrese obiju varijabli u dekadskom obliku ((size_t)).

    Unesite prvi broj: 42
    Unesite drugi broj: 17
    Uzlazno: 17 42
    Adresa prve: 94549653269200
    Adresa druge: 94549653269232

Zadatak 2 – Dinamičko polje. Korisnik upisuje veličinu polja n (1–50, ponovni unos ako je izvan raspona). Dinamički alociraj polje od n cijelih brojeva i generiraj u njega brojeve od 10 do 99. Ispiši polje. Napravi funkciju int brojVecihOd(int *p, int n, int granica) i ispiši koliko je elemenata veće od granice koju upiše korisnik.

    Koliko elemenata (1-50)? 0
    Neispravan unos.
    Koliko elemenata (1-50)? 8
    Polje: 93 83 70 53 59 38 39 47
    Unesite granicu: 50
    Vecih od 50: 5

Zadatak 3 – Dinamička struktura. Napravi strukturu s_tocka s decimalnim članovima x i y. Dinamički alociraj dvije točke, A i B, i omogući unos koordinata (pristup s ->). Ispiši udaljenost A i B: korijen iz (xB − xA)² + (yB − yA)².

    Tocka A (x y): 1 2
    Tocka B (x y): 4 6
    Udaljenost AB: 5

Posebni izazov – Polje studenata. Napravi strukturu s_student (ime string, ocjena int). Korisnik upisuje broj studenata n (1–20); dinamički alociraj polje od n struktura. Za svakog studenta unesi ime i ocjenu 1–5 (ponovni unos ocjene ako je izvan raspona). Ispiši prosjek ocjena i imena svih studenata s najboljom ocjenom.

    Broj studenata (1-20): 3
    Ime 1. studenta: Ana
    Ocjena (1-5): 5
    Ime 2. studenta: Ivan
    Ocjena (1-5): 7
    Ocjena (1-5): 3
    Ime 3. studenta: Marko
    Ocjena (1-5): 5
    Prosjek: 4.33333
    Najbolja ocjena (5): Ana Marko
*/

#include <iostream>
using namespace std;

int main (){



}
