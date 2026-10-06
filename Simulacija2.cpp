/*  Simulacija 2 – predavanja 1–5

Isti izbornik kao u simulaciji 1, s ovim opcijama: 1. Prosti brojevi, 2. Statistika unosa, 3. Tablica mnozenja, 4. Posebni izazov – Collatzov niz, 9. Izlaz iz programa. Ovdje se bodovi gube na logici petlji, ne na sintaksi.

Zadatak 1 – Prosti brojevi. Omogući unos broja N u rasponu 2–500 (ponovni unos ako je izvan raspona). Ispiši sve proste brojeve od 2 do N u jednom redu i koliko ih ima. Za svaki broj ugniježđenom petljom traži djelitelj; čim ga nađeš, izađi naredbom break.

    Unesite N (2-500): 1
    Neispravan unos.
    Unesite N (2-500): 30
    Prosti brojevi: 2 3 5 7 11 13 17 19 23 29
    Broj prostih brojeva: 10

Zadatak 2 – Statistika unosa. Korisnik unosi cijele brojeve sve dok ne unese 0 (do...while). Broj izvan raspona −100 do 100 preskoči naredbom continue uz poruku „Broj je izvan raspona.“. Na kraju ispiši koliko je valjanih brojeva uneseno (nula se ne broji), prosjek kao decimalni broj, najmanji i najveći. Ako nije unesen nijedan valjani broj, ispiši „Nije unesen nijedan broj.“.

    Unesite broj (0 za kraj): 12
    Unesite broj (0 za kraj): -5
    Unesite broj (0 za kraj): 250
    Broj je izvan raspona.
    Unesite broj (0 za kraj): 40
    Unesite broj (0 za kraj): 0
    Uneseno brojeva: 3
    Prosjek: 15.6667
    Najmanji: -5
    Najveci: 40

    Unesite broj (0 za kraj): 0
    Nije unesen nijedan broj.

Zadatak 3 – Tablica množenja. Omogući unos broja n u rasponu 1–9 (ponovni unos ako je izvan raspona). Ispiši tablicu množenja n × n, vrijednosti odvojene tabulatorom (\t). Na dijagonali (redak jednak stupcu) umjesto broja ispiši *.

    Unesite n (1-9): 12
    Neispravan unos.
    Unesite n (1-9): 4
    *       2       3       4
    2       *       6       8
    3       6       *       12
    4       8       12      *

Posebni izazov – Collatzov niz. Omogući unos pozitivnog broja (ponovni unos ako nije). Dok broj nije 1: ako je paran, podijeli ga s 2, inače ga pomnoži s 3 i dodaj 1. Ispiši cijeli niz, broj koraka i najveći broj u nizu.

    Unesite pozitivan broj: 0
    Neispravan unos.
    Unesite pozitivan broj: 6
    6 3 10 5 16 8 4 2 1
    Broj koraka: 8
    Najveci broj u nizu: 16
*/

#include <iostream>
using namespace std;

int main (){



}
