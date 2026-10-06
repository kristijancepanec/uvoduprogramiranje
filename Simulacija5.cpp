/*  Simulacija 5 – predavanja 8–9

Opcije izbornika: 1. Povrsine likova, 2. Polje i reference, 3. Moja biblioteka, 4. Posebni izazov – sortiranje, 9. Izlaz iz programa. Svaka opcija je zaseban potprogram, a switch u main sadrži samo pozive. Sve potprograme definiraj ispod main i iznad njega napiši njihove proslijeđene deklaracije.

Zadatak 1 – Površine likova. Napravi tri preopterećene funkcije povrsina: s jednim argumentom za krug, s dva za pravokutnik i s tri za trokut. Trokut računaj Heronovom formulom; ako stranice ne čine trokut, funkcija vraća −1. Napravi i funkciju potencija(float baza, int eksponent = 2) i pozovi je bez drugog argumenta za r² u površini kruga. Broj π = 3.14159 drži u globalnoj konstanti. Podrazumijevani argument napiši samo u deklaraciji, ne i u definiciji.

    Odaberite lik (k - krug, p - pravokutnik, t - trokut): k
    r = 2
    Povrsina kruga: 12.5664

    Odaberite lik (k - krug, p - pravokutnik, t - trokut): t
    a = 3
    b = 4
    c = 5
    Povrsina trokuta: 6

    Odaberite lik (k - krug, p - pravokutnik, t - trokut): t
    a = 1
    b = 2
    c = 10
    Stranice ne cine trokut.

Zadatak 2 – Polje i reference. Napravi potprograme generiraj(int p[], int n) (brojevi 1–100), ispisi(int p[], int n) i minMax(int p[], int n, int &min, int &max), koji najmanji i najveći broj vraća preko referenci. Napravi i funkciju sa statičkom lokalnom varijablom koja vraća koliko je puta opcija pokrenuta. Opcija ispisuje redni broj pokretanja, polje, najmanji i najveći broj.

    Ovo je 1. pokretanje opcije.
    Polje: 32 36 18 84 42 21 30 54 69 19
    Najmanji: 18
    Najveci: 84

    Ovo je 2. pokretanje opcije.
    Polje: 63 39 24 30 67 63 87 70 87 23
    Najmanji: 23
    Najveci: 87

Zadatak 3 – Moja biblioteka. Napravi biblioteku s funkcijama zamjena(int &a, int &b), nzd(int a, int b) (najveći zajednički djelitelj, npr. Euklidovim algoritmom s while) i nzv(int a, int b) (najmanji zajednički višekratnik = a / nzd · b). Uključi je s #include "ime.cc". Opcija traži dva pozitivna broja (ponovni unos inače); ako je prvi veći, zamijeni ih pozivom zamjena. Ispiši ih uzlazno, zatim NZD i NZV.

    Unesite dva pozitivna broja: 0 5
    Neispravan unos.
    Unesite dva pozitivna broja: 36 24
    Uzlazno: 24 36
    NZD: 12
    NZV: 72

Prema uputama vježbe 9: biblioteka mora imati isto ime kao glavna datoteka, samo s nastavkom .cc (npr. Prezime_Ime_Vjezba_09.cc). Spremi je u mapu Verifikatora i predaj zajedno s .cpp i _test.cpp.

Posebni izazov – Sortiranje. Napravi potprogram sortiraj(int p[], int n) koji polje složi uzlazno metodom mjehurića (uspoređuj susjedne elemente i zamijeni ih pozivom zamjena iz svoje biblioteke). Generiraj 10 brojeva, ispiši ih prije i poslije sortiranja. Sortiranje je u izvedbenom planu predmeta, ali ga nema u predavanjima 1–11.

    Prije: 51 5 53 15 7 71 23 33 80 80
    Poslije: 5 7 15 23 33 51 53 71 80 80
*/

#include <iostream>
using namespace std;

int main (){



}
