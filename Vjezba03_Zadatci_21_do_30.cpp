// Vježba 3 – tipovi podataka, ispis, bitovni operatori, for

// ===== Iteracija for - modifikacija =====

/*  Zadatak 21. Omogućite korisniku unos dvije cjelobrojne vrijednosti. Ispišite sve brojeve u rasponu od prvog broja do drugog broja. Napomena: Program treba raditi i u slučaju kada je prvi broj veći od drugog i kada je prvi broj manji od drugog. Za to vam treba selekcija. Primjeri:

Unesite 1. broj: 5 Unesite 1. broj: 10

Unesite 2. broj: 9 Unesite 2. broj: 6

Ispis brojeva od 5 do 9: Ispis brojeva od 10 do 6:

5 10

6 9

7 8

8 7

9 6

Kraj ispisa. Kraj ispisa.
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 22. Omogućite korisniku unos cjelobrojne vrijednosti N. Ispišite koliko iznosi 3^N (3 na potenciju N). (Pomoć: Kako biste izračunali ovaj rezultat, potrebno je N puta pomnožiti broj 3 sa samim sobom. S obzirom da se množi, inicijalna vrijednost varijable u koju računate rezultat treba biti 1 a ne 0). Primjer:

    Unesite potenciju broja 3: 5
    3 ^ 5 iznosi 243.

Dodatni primjeri:

    Ulaz: 0   Izlaz: 1
    Ulaz: 1   Izlaz: 3
    Ulaz: 2   Izlaz: 9
    Ulaz: 3   Izlaz: 27
    Ulaz: 10  Izlaz: 59049
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 23. Omogućite korisniku unos dvije pozitivne cjelobrojne vrijednosti - gornje granice i koraka promjene brojača. Koristeći iteraciju for, napravite ispis svih brojeva od 0 do unesenog broja prema zadanom koraku promjene brojača. Ako korisnik unese negativnu vrijednost za gornju granicu ili korak promjene, ispišite „Neispravna ulazna vrijednost.” Primjer:

    Unesite gornju granicu: 25
    Unesite korak promjene brojaca: 4
    Ispis brojeva od 0 do 25 - svaki 4. broj:
    0
    4
    8
    12
    16
    20
    24
    Kraj ispisa.
*/

#include <iostream>
using namespace std;

int main (){



}

// ===== Posebni izazov =====

/*  Zadatak 24. Omogućite korisniku unos cijelog broja u rasponu od -10 milijardi do 10 milijardi. Ispišite koji tip podataka je dostatan za njegov upis (koristite tipove podataka s predznakom). Ako korisnik unese vrijednost van zadanog raspona, ispišite „Unos van zadanog raspona”. Primjer:

    Unesite cijeli broj u rasponu od -10 do 10 milijardi: 25812
    Za unos broja 25812 potreban vam je short.

Dodatni primjeri:

    Ulaz: 100         Izlaz: char
    Ulaz: 1573873521  Izlaz: int
    Ulaz: 5947287123  Izlaz: long long
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 25. Omogućite korisniku unos malog slova u znakovnu varijablu. Ispišite dva slova koja prethode upisanom slovu i ispišite dva slova koja slijede nakon upisanog slova (engleska abeceda). Ako se nađete na početku abecede - neka z bude prethodnik slova a. Ako se nađete na kraju abecede - neka nakon z dođe slovo a. (Pomoć: Programsku logiku treba raditi na temelju numeričke vrijednosti varijable. Ako želite izbjeći posebne slučajeve, tada ćete morati koristiti modulo za izračun prethodnika/sljedbenika rubnih slova). Primjer:

    Unesite slovo: i
    Slova koja prethode: g h
    Slova koja slijede: j k

Dodatni primjeri:

    Ulaz: a  Prethodi: y z  Slijedi: b c
    Ulaz: b  Prethodi: z a  Slijedi: c d
    Ulaz: z  Prethodi: x y  Slijedi: a b
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 26. Ispišite brojeve, velika i mala slova engleska abecede korištenjem iteracije for. Kreirajte znakovnu varijablu kojoj ćete mijenjati numeričku vrijednost i time dobivati ispis odgovarajućeg znaka. Napomena: Za ispis morate koristiti iteracije for. Primjer:

    Ispis brojeva: 0 1 2 3 4 5 6 7 8 9
    Velika slova: A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
    Mala slova: a b c d e f g h i j k l m n o p q r s t u v w x y z
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 27. Omogućite korisniku unos dva cjelobrojna broja - to će biti raspon brojeva. Omogućite unos i trećeg broja. Putem iteracije for, ispišite sve brojeve u zadanom rasponu koji su djeljivi s treće upisanim brojem. Primjer:

    Donja granica raspona: 10
    Gornja granica raspona: 40
    Broj djeljivosti: 7
    Ispis brojeva od 10 do 30 koji su djeljivi sa 7:
    14 21 28 35

Dodatni primjeri:

    Ulaz: 0 30 5  Izlaz: 0 5 10 15 20 25 30
    Ulaz: 100 200 15  Izlaz: 105 120 135 150 165 180 195
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 28. Upitati korisnika koliko brojeva želi unijeti. Omogućiti unos toliko brojeva koliko je korisni odredio (ispis rednog broja kod svakog unosa). Ispisati koliko unesenih brojeva je pozitivno a koliko negativno. Primjer:

    Koliko brojeva zelite upisati: 5
    Unos 1. broja: 7
    Unos 2. broja: -3
    Unos 3. broja: 10
    Unos 4. broja: 4
    Unos 5. broja: -8
    Pozitivnih brojeva: 3
    Negativnih brojeva: 2
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 29. Korisnik unosi jedno veliko slovo engleske abecede. Napravite ispis svih slova od prvog slova do unesenog slova i u drugom redu ispis svih slova od unesenog slova do kraja abecede. Ako korisnik ne unese ispravnu vrijednost ispišite „Neispravan unos slova.” Primjer:

    Unesite veliko slovo: G
    Slova prije: A B C D E F
    Slova poslije: H I J K L M N O P Q R S T U V W X Y Z
*/

#include <iostream>
using namespace std;

int main (){



}

/*  Zadatak 30. Korisnik unosi jednu cjelobrojnu vrijednost N, u rasponu od 1 do 26. U prvom redu ispišite prvih N malih slova engleske abecede a u drugom redu prvih N velikih slova engleske abecede. Ako korisnik unese broj van raspona, ispišite „Neispravna vrijednost.” Primjer:

    Unesite broj (1-26): 14
    Mala slova (14): a b c d e f g h i j k l m n
    Velika slova (14): A B C D E F G H I J K L M N
*/

#include <iostream>
using namespace std;

int main (){



}
