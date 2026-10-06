/*  Simulacija 6 – predavanje 9 (polje struktura)

Ovo je isti obrazac kao primjer „polje trokuta“ s kraja predavanja 9, koji prema predavanju objedinjuje većinu dosadašnjeg gradiva. Opcije izbornika: 1. Unos artikla, 2. Ispis svih artikala, 3. Pretrazivanje po nazivu, 4. Artikli ispod zadane kolicine, 5. Posebni izazov – brisanje artikla, 9. Izlaz iz programa.

Globalno deklariraj strukturu s_artikl (naziv string, cijena float, kolicina int, vrijednost float) i polje od 5 takvih struktura. U main drži brojač br_unesenih i prosljeđuj ga potprogramima. Polje je namjerno malo da možeš testirati i grananje „Polje je puno.“.

Zadatak 1 – Unos i ispis. Opcija 1 unosi naziv (bez razmaka), cijenu (veća od 0) i količinu (ne smije biti negativna), uz ponovni unos kod greške. Vrijednost (cijena · količina) izračunaj odmah u strukturu. Ako je polje puno, ispiši „Polje je puno.“. Opcija 2 ispisuje sve artikle i ukupnu vrijednost skladišta; prazno polje ispisuje „Nema unesenih artikala.“.

    Artikl br. 2
    Naziv: kruh
    Cijena: 0
    Cijena mora biti veca od 0.
    Cijena: 2.10
    Kolicina: 15

    1. mlijeko | cijena: 1.29 EUR | kolicina: 40 | vrijednost: 51.6 EUR
    2. kruh | cijena: 2.1 EUR | kolicina: 15 | vrijednost: 31.5 EUR
    3. jaja | cijena: 3.5 EUR | kolicina: 0 | vrijednost: 0 EUR
    Ukupna vrijednost skladista: 83.1 EUR

Zadatak 2 – Pretraživanje po nazivu. Korisnik upisuje naziv; ispiši artikl ako postoji, inače „Artikl nije pronaden.“. Koristi logičku varijablu pronaden, kao u predavanju.

    Unesite trazeni naziv: kruh
    2. kruh | cijena: 2.1 EUR | kolicina: 15 | vrijednost: 31.5 EUR

    Unesite trazeni naziv: sir
    Artikl nije pronaden.

Zadatak 3 – Artikli ispod zadane količine. Korisnik upisuje granicu; ispiši sve artikle s količinom manjom od nje. Ako ih nema, ispiši „Nema takvih artikala.“.

    Unesite granicu kolicine: 20
    2. kruh | cijena: 2.1 EUR | kolicina: 15 | vrijednost: 31.5 EUR
    3. jaja | cijena: 3.5 EUR | kolicina: 0 | vrijednost: 0 EUR

    Unesite granicu kolicine: 0
    Nema takvih artikala.

Posebni izazov – Brisanje artikla. Napravi funkciju bool obrisi(int &n, string naziv). Kad pronađe artikl, sve iza njega pomakne za jedno mjesto ulijevo i smanji n preko reference. Vraća je li brisanje uspjelo.

    Naziv za brisanje: kruh
    Artikl obrisan.

    Naziv za brisanje: kruh
    Artikl nije pronaden.

    1. mlijeko | cijena: 1.29 EUR | kolicina: 40 | vrijednost: 51.6 EUR
    2. jaja | cijena: 3.5 EUR | kolicina: 0 | vrijednost: 0 EUR
    Ukupna vrijednost skladista: 51.6 EUR
*/

#include <iostream>
using namespace std;

int main (){



}
