/*  Simulacija 8 – predavanja 10–11 (vezana lista)

Format je isti kao vježba 11: ponavljajući izbornik i 3 mogućnosti nad vezanom listom. Opcije: 1. Dodavanje filma, 2. Ispis svih filmova, 3. Pretrazivanje po godini, 4. Brisanje po nazivu, 5. Posebni izazov – brisanje losih filmova, 9. Izlaz iz programa.

Napravi strukturu s_film (naziv string, godina int, ocjena float, pokazivač sljedeci). Glavu liste alociraj u main i postavi glava->sljedeci = NULL. Svaka operacija je potprogram koji prima pokazivač na glavu.

Zadatak 1 – Dodavanje i ispis. Opcija 1 dodaje film na kraj liste. Dok tražiš zadnji element, prebroji elemente i ispiši koliko ih je u listi prije dodavanja. Ocjena mora biti 1–10 (ponovni unos). Opcija 2 ispisuje sve filmove i prosječnu ocjenu; za praznu listu ispiši „Lista je prazna.“.

    Broj filmova u listi: 2
    Naziv: Shrek
    Godina: 2001
    Ocjena (1-10): 12
    Ocjena (1-10): 8.0

    Inception (2010) - 9.1
    Avatar (2009) - 7.8
    Shrek (2001) - 8
    Up (2009) - 6.5
    Prosjecna ocjena: 7.85

Zadatak 2 – Pretraživanje po godini. Korisnik upisuje godinu; ispiši sve filmove iz te godine, ne samo prvi. Ako ih nema, ispiši „Nema filmova iz te godine.“.

    Trazena godina: 2009
    Avatar (2009) - 7.8
    Up (2009) - 6.5

    Trazena godina: 1999
    Nema filmova iz te godine.

Zadatak 3 – Brisanje po nazivu. Napravi funkciju bool izbrisi(s_film *glava, string naziv) s pokazivačima tekuci i prethodni, kao u predavanju 11. Prije delete poveži prethodni element sa sljedećim.

    Naziv za brisanje: Shrek
    Obrisan!

    Naziv za brisanje: Shrek
    Nije pronaden!

Posebni izazov – Brisanje loših filmova. Obriši sve filmove s ocjenom manjom od zadane i ispiši koliko ih je obrisano. Pazi: kad obrišeš element, prethodni ostaje na mjestu. Kod izlaska iz programa (opcija 9) dealociraj sve elemente liste, uključujući glavu.

    Obrisi filmove s ocjenom manjom od: 7
    Obrisano filmova: 1

    Inception (2010) - 9.1
    Avatar (2009) - 7.8
    Prosjecna ocjena: 8.45
*/

#include <iostream>
using namespace std;

int main (){



}
