/*  Simulacija 3 – predavanja 1–6

Opcije izbornika: 1. Polje brojeva, 2. Pravokutnici, 3. Rotacija polja, 4. Posebni izazov – ucestalost brojeva, 9. Izlaz iz programa. Strukturu deklariraj izvan main. Pazi da varijable ne deklariraš i inicijaliziraš izravno u case (vidi Česte zamke).

Zadatak 1 – Polje brojeva. Napravi polje od 10 cijelih brojeva i omogući korisniku unos svih 10 brojeva. Ispiši polje unatrag, prosjek kao decimalni broj i sve elemente veće od prosjeka zajedno s indeksom.

    Unesite 1. broj: 4
    Unesite 2. broj: 17
    Unesite 3. broj: 8
    Unesite 4. broj: -3
    Unesite 5. broj: 12
    Unesite 6. broj: 9
    Unesite 7. broj: 0
    Unesite 8. broj: 21
    Unesite 9. broj: 6
    Unesite 10. broj: 10
    Polje unatrag: 10 6 21 0 9 12 -3 8 17 4
    Prosjek: 8.4
    Veci od prosjeka:
    1: 17
    4: 12
    5: 9
    7: 21
    9: 10

Zadatak 2 – Pravokutnici. Napravi strukturu s_pravokutnik s članovima a, b, opseg i povrsina (decimalni). Napravi polje od 3 takve strukture. Za svaki pravokutnik omogući unos stranica; stranica mora biti veća od 0, inače ispiši poruku i traži ponovni unos. Izračunaj opseg i površinu u strukturu. Ispiši sve pravokutnike i redni broj onog s najvećom površinom.

    1. pravokutnik
    Unesite stranicu a: 5
    Unesite stranicu b: 8
    2. pravokutnik
    Unesite stranicu a: 0
    Stranica mora biti veca od 0.
    Unesite stranicu a: 10
    Unesite stranicu b: 14
    3. pravokutnik
    Unesite stranicu a: 7
    Unesite stranicu b: 22
    1. pravokutnik: a = 5, b = 8, O = 26, P = 40
    2. pravokutnik: a = 10, b = 14, O = 48, P = 140
    3. pravokutnik: a = 7, b = 22, O = 58, P = 154
    Najveca povrsina: 3. pravokutnik (154)

Zadatak 3 – Rotacija polja. U polje od 10 elemenata generiraj nasumične brojeve od 1 do 9. Funkcijom memcpy kopiraj ga u drugo polje. Omogući unos broja k (1–9, ponovni unos ako je izvan raspona). Kopiju rotiraj ulijevo za k mjesta: pri svakom pomaku prvi element ide na kraj, ostali se pomiču za jedno mjesto ulijevo. Ispiši izvorno polje i rotiranu kopiju.

    Za koliko mjesta rotirati (1-9)? 12
    Neispravan unos.
    Za koliko mjesta rotirati (1-9)? 3
    Izvorno polje: 1 8 5 9 4 5 6 4 5 2
    Rotirana kopija: 9 4 5 6 4 5 2 1 8 5

Posebni izazov – Učestalost brojeva. Generiraj 30 nasumičnih brojeva od 1 do 9 u polje i ispiši ga. Pomoću drugog polja (polja brojača) prebroji koliko se puta pojavio svaki broj. Ispiši za svaki broj koliko se puta pojavio i isto toliko zvjezdica. Na kraju ispiši najučestaliji broj.

    Polje: 7 3 3 7 4 2 9 6 8 1 7 1 7 7 8 3 9 3 3 9 8 1 7 3 9 9 5 3 1 9
    1: 4 ****
    2: 1 *
    3: 7 *******
    4: 1 *
    5: 1 *
    6: 1 *
    7: 6 ******
    8: 3 ***
    9: 6 ******
    Najcesci broj: 3 (7 puta)
*/

#include <iostream>
using namespace std;

int main (){



}
