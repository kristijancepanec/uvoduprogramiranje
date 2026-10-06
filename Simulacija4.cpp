/*  Simulacija 4 – predavanje 7

Opcije izbornika: 1. Dvodimenzionalno polje, 2. Analiza recenice, 3. Dvije rijeci, 4. Posebni izazov – palindrom, 9. Izlaz iz programa. Prije cin.getline ili getline nakon cin >> izbor pozovi cin.ignore(), inače se unos preskoči.

Zadatak 1 – Dvodimenzionalno polje. Napravi polje 4 × 4 i generiraj u njega nasumične brojeve od 1 do 9. Ispiši polje, zbroj svakog retka i zbroj glavne dijagonale (koordinate (0,0), (1,1), (2,2), (3,3)). Ispiši najveći element i njegove koordinate; ako ih je više, prvi na koji naiđeš.

    Polje:
    7 8 8 3
    1 9 3 5
    7 2 7 2
    6 3 9 9
    Zbroj 1. retka: 26
    Zbroj 2. retka: 18
    Zbroj 3. retka: 18
    Zbroj 4. retka: 27
    Zbroj glavne dijagonale: 32
    Najveci element: 9 na (1, 1)

Zadatak 2 – Analiza rečenice. Napravi znakovni niz od 100 znakova i omogući unos rečenice s razmacima (cin.getline). Ispiši broj znakova (strlen), broj samoglasnika (a, e, i, o, u, mala i velika), broj riječi i rečenicu u kojoj svaka riječ počinje velikim slovom. Malo slovo pretvori u veliko oduzimanjem 32 (ASCII tablica).

    Unesite recenicu: danas je divan dan za programiranje
    Broj znakova: 35
    Broj samoglasnika: 12
    Broj rijeci: 6
    Velika pocetna slova: Danas Je Divan Dan Za Programiranje

Zadatak 3 – Dvije riječi. Napravi dva znakovna niza od 30 znakova i omogući unos dviju riječi (malim slovima, bez razmaka). Funkcijom strcmp ispiši jesu li iste ili koja je abecedno prva. U treći niz funkcijama strcpy i strcat spoji ih s crticom između. Ispiši spoj i njegovu duljinu.

    Unesite prvu rijec: marko
    Unesite drugu rijec: matko
    Abecedno prva: marko
    Spojeno: marko-matko
    Duljina spoja: 11

    Unesite prvu rijec: ana
    Unesite drugu rijec: ana
    Rijeci su iste.
    Spojeno: ana-ana
    Duljina spoja: 7

Posebni izazov – Palindrom. Omogući unos rečenice u varijablu tipa string (getline). Napravi novi string samo od slova rečenice: razmake preskoči, velika slova pretvori u mala. Napravi i obrnuti string te ispiši je li rečenica palindrom.

    Unesite recenicu: Ana voli Milovana
    Bez razmaka: anavolimilovana
    Obrnuto: anavolimilovana
    Recenica je palindrom.

    Unesite recenicu: Dobar dan
    Bez razmaka: dobardan
    Obrnuto: nadrabod
    Recenica nije palindrom.
*/

#include <iostream>
using namespace std;

int main (){



}
