// Vježba 4 – konstante, nasumični brojevi, while i do...while

// ===== While/do...while petlje =====

/*  Zadatak 21. Omogućite korisniku unos dva cijela broja, donju granicu i gornju granicu. Do...while petljom prebrojite u rasponu od unesene donje granice do unesene gornje granice koliko ima brojeva koji nisu djeljivi sa 4. (Pomoć: Kreirajte dodatnu varijablu (osim brojača) putem koje ćete prebrojiti koliko ima takvih brojeva. Početna vrijednost brojača petlje treba biti unesena vrijednost donje granice, a u logičkom uvjetu iz petlje treba izaći kada brojač premaši unesenu vrijednost gornje granice. Brojevi koji nisu djeljivi sa 4? Broj % 4 != 0). Primjer:

    Donja granica: 10
    Gornja granica: 50
    Koliko ima brojeva u rasponu od 10 do 40 koji nisu djeljivi sa 4?
    Odgovor: 31

Dodatni primjeri:

    Ulaz:  50 100  Izlaz: 38
    Ulaz: 500 700  Izlaz: 150
*/

#include <iostream>
using namespace std;

int main (){



}

// ===== While/do...while petlje - dodatno =====

/*  Zadatak 22. While petljom izračunajte sumu svih neparnih brojeva u rasponu od 1 do 100. Primjer:

    Suma svih neparnih brojeva u rasponu od 1 do 100: 2500
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 23. Do...while petljom izračunajte sumu svih parnih brojeva u rasponu od 1 do 100. Primjer:

    Suma svih parnih brojeva u rasponu od 1 do 100: 2550
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 24. Kreirajte do...while petlju kojom ćete ispisati kubove brojeva od 1 do 10 (1³, 2³, 3³ itd.). (Pomoć: Za izračun trebate koristiti vrijednost brojača. Kub = brojač pomnožen sam sa sobom dva puta). Primjer:

    Ispis kubova brojeva od 1 do 10:
    1
    8
    27
    64
    125
    216
    343
    512
    729
    1000
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 25. While ili do...while petljom ispišite sve znakove ASCII tablice odvojene razmakom (vrijednosti od 0 do 127). (Pomoć: Kreirajte varijablu tipa char. Kreirajte petlju kod koje će brojač ići od 0 do 127. Vrijednost brojača dodijelite char varijabli. Ispišite char varijablu - ispisat će se znak umjesto numeričke vrijednosti). Primjer:

    Ispis ASCII znakova (0-127):
     ☺ ☻ ♥ ♦ ♣ ♠
     ♫ ☼ ► ◄ ↕ ‼ ¶ § ▬ ↨ ↑ ↓ → ← ∟ ↔ ▲ ▼   ! " # $ % & ' ( ) * + , - . / 0 1 2 3 4 5 6 7 8 9 : ; < = > ? @ A B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ \ ] ^ _ ` a b c d e f g h i j k l m n o p q r s t u v w x y z { | } ~ ⌂
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 26. Omogućite korisniku unos donje granice, gornje granice i broja a. Petljom while ili do...while ispišite sve brojeve od donje do gornje granice koji su djeljivi s brojem a. (Pomoć: Početna vrijednost brojača treba biti donja granica. Petlja se treba zaustaviti s izvođenjem kada brojač dođe preko gornje granice. Je li brojač djeljiv s brojem a? brojac % a == 0). Primjer:

    Donja granica: 10
    Gornja granica: 50
    Broj a: 4
    Ispis brojeva od 10 do 50 koji su djeljivi sa 4:
    12 16 20 24 28 32 36 40 44 48
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 27. Napravite petlju koja će generirati nasumični broj u rasponu od 1 do 10 i ispisati ga. Neka se petlja izvršava sve dok se ne izgenerira broj 10. (Pomoć: Unutar petlje treba u neku varijablu generirati broj u rasponu od 1 do 10 i ispisati ju. Logički uvjet petlje: sve dok je generirani broj != 10). Primjer:

    Ishod (1-10): 3
    Ishod (1-10): 7
    Ishod (1-10): 1
    Ishod (1-10): 4
    Ishod (1-10): 5
    Ishod (1-10): 8
    Ishod (1-10): 10
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 28. Omogućite korisniku unos cjelobrojne vrijednosti n. Napišite program koji izračunava sumu sljedećeg niza:

1/1 + 1/2 + 1/3 + 1/4 + 1/5 + ... + 1/n

(Pomoć: Slično kao izračun broja PI. Predznak je uvijek + stoga ne treba pratiti predznak. Petlja treba ići od 1 do n (uneseni broj). Brojač se treba povećavati za 1. Kumulativno zbrajanje - sve je fiksno osim nazivnika (nazivnik će biti vrijednost brojača). Ne zaboravite da radimo s decimalnim brojevima - potrebna je eksplicitna konverzija tipa podatka). Primjer:

    Unesite n: 5
    Suma prvih 5 clanova niza: 2.28333

Dodatni primjeri:

    Ulaz: 10  Izlaz: 2.92897
    Ulaz: 100 Izlaz: 5.18738
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 29. Omogućite korisniku zbrajanje cjelobrojnih vrijednosti. - Koliko? Koliko god korisnik želi. Radite kumulativno zbrajanje svih brojeva koje korisnik unese. Tek kada korisnik unese broj 0 tada izađite iz petlje i ispišite sumu svih unesenih brojeva. (Pomoć: U petlji omogućite korisniku unos broja u varijablu i vrijednost te varijable kumulativno zbrajajte u varijablu sume. Uvjet ponavljanja petlje: sve dok je uneseni broj različit od 0). Primjer:

    Unesite broj: 5
    Unesite broj: 3
    Unesite broj: 8
    Unesite broj: 3
    Unesite broj: 7
    Unesite broj: 0
    Suma: 26
*/

#include <iostream>
using namespace std;

int main (){



}

// ===== Posebni izazov =====

/*  Zadatak 30. Univerzalna gravitacijska konstanta (G) iznosi 6.67·10⁻¹¹. Gravitacijska sila (F) između dvaju tijela masa m₁ i m₂ i udaljenosti r se računa prema formuli:

F = G · m₁ · m₂ / r²

Omogućite korisniku unos masa m₁ i m₂ i njihove udaljenosti r. Ispišite rezultat gravitacijske sile (F) između ta dva tijela. (Pomoć: Potrebno je definirati konstantu G koja ima vrijednost 6.67·10⁻¹¹. Kako biste upisali tu vrijednost u varijablu morate koristiti znanstveni zapis: const float G = 6.67e-11;). Primjer:

    Unesite m1: 1
    Unesite m2: 5.97e24
    Unesite udaljenost r: 6.371e6
    Gravitacijska sila između m1 i m2: 9.81036 N

Zanimljivost: U ovom primjeru računamo gravitacijsku silu između objekta težine 1kg i Zemlje čija je težina 5,97·10²⁴ kg. Polumjer Zemlje je 6371km (6,371·10⁶ m). Objekt se nalazi na zemlji. Izračunata sila je zapravo sila gravitacije na našoj planeti.
*/

#include <iostream>
using namespace std;

int main (){



}
