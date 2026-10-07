// Vježba 2 – selekcije if i switch

// ===== Zadatci sa selekcijama =====

/*  Zadatak 01. Omogućite korisniku unos cjelobrojne vrijednosti u varijablu a. Ako je uneseni broj paran, ispišite „Broj je paran”, a ako je neparan, ispišite „Broj je neparan.”. Primjer:

    UNOS
    Unesite broj: 5
    ISPIS
    Broj 5 je neparan broj.
*/

#include <iostream>
using namespace std;

int main (){

    int a;
    cout << "Unesi varijablu a" << endl;
    cin >> a; 
    
    if (a % 2 == 0) {
        cout << "Ovaj broj je paran" << endl;
    } else {
        cout << "Ovaj broj je neparan" << endl; 
    }

}

/*  Zadatak 02. Omogućite korisniku unos cjelobrojne vrijednosti. Ako je uneseni broj pozitivan, ispišite taj broj, a ako je broj negativan, promijenite mu predznak te ga ispišite. Primjer:

    UNOS
    Unesite broj: -5
    ISPIS
    Promjena predznaka: 5
*/

#include <iostream>
using namespace std;

int main (){

int a;
cout << "Unesi vrijednost" << endl; 
cin >> a; 

if (a > 0) {
    cout << "Ovaj broj je pozitivan" << endl; 
} else {
    cout << "Ovaj broj je negativan, " << "pretvaram mu predznak: " << -a << endl;
}

}

/*  Zadatak 03. Omogućite korisniku unos 2 cjelobrojne vrijednosti. Ispišite razliku manjeg broja od većeg. Primjer:

    UNOS
    Unesite 1. broj: 3
    Unesite 2. broj: 7
    ISPIS
    Razlika manjeg broja od veceg: -4
*/

#include <iostream>
using namespace std;

int main (){

int a;
cout << "Unesi prvu vrijednost" << endl; 
cin >> a; 

int b;
cout << "Unesi drugu vrijednost" << endl;
cin >> b; 

 if (a > b) {
     cout << "Razlika manjeg broja od veceg: " << b - a << endl;
 } else {
     cout << "Razlika manjeg broja od veceg: " << a - b << endl;
 }
 return 0;
}

/*  Zadatak 04. Omogućite korisniku unos cjelobrojne vrijednosti u rasponu od 0 do 59 (broj minuta). Ispišite na temelju unesene vrijednosti jesmo li u prvoj ili drugoj polovici sata (vrijednosti 0-29 su prva polovica, 30-59 su druga polovica). Ako korisnik unese vrijednost van zadanog raspona, ispišite „Krivi unos sati.” Primjer:

    UNOS
    Trenutno vrijeme u minutama: 52
    ISPIS
    52 min. = druga polovica sata
*/

#include <iostream>
using namespace std;

int main (){

    int broj_minuta;
    cout << "Unesi broj minuta" << endl; 
    cin >> broj_minuta; 
    
    if (broj_minuta >= 0 && broj_minuta <= 29) {
        cout << "U prvoj si polovici sata!" << endl;
    } else if  (broj_minuta > 29 && broj_minuta <= 59) {
        cout << "U drugoj si polovici sata!" << endl;
    } else {
        cout << "Krivi unos sati!" << endl;
    }

}

/*  Zadatak 05. Omogućite korisniku unos cjelobrojne vrijednosti u rasponu od 1 do 12. Ispišite naziv mjeseca u godini koji odgovara upisanom broju. Ako korisnik unese vrijednost van zadanog raspona, ispišite „Krivo unesen broj mjeseca u godini.” Primjer:

    UNOS
    Unesite redni broj mjeseca u godini: 7
    ISPIS
    Mjesec: Srpanj
*/

#include <iostream>
using namespace std;

int main () {

	int a;
	cout << "Upisi redni broj mjeseca u godini: " << endl;
	cin >> a;

	if (a == 1) {
		cout << "Sijecanj" << endl;
	} else if (a == 2) {
		cout << "Veljaca" << endl;
	} else if (a == 3) {
		cout << "Ozujak" << endl;
	}
	else if (a == 4) {
		cout << "Travanj" << endl;
	}
	else if (a == 5) {
		cout << "Svibanj" << endl;
	}  else if (a == 6) {
		cout << "Lipanj" << endl;
	} else if (a == 7) {
		cout << "Srpanj" << endl;
	} else if (a == 8) {
		cout << "Kolovoz" << endl;
	} else if (a == 9) {
		cout << "Rujan" << endl;
	} else if (a == 10) {
		cout << "Listopad" << endl;
	}
	else if (a == 11) {
		cout << "Studeni" << endl;
	}
	else if (a == 12) {
		cout << "Prosinac" << endl;
	}   else {
	        cout << "Krivo si unesel vrijednost!" << endl;
	}
}

/*  Zadatak 06. Omogućite korisniku unos cjelobrojne vrijednosti. Ispišite je li broj djeljiv s 3, 5, 7 i 9. Primjer:

    UNOS
    Unesite broj: 45
    ISPIS
    Broj 45 je djeljiv s 3.
    Broj 45 je djeljiv s 5.
    Broj 45 nije djeljiv sa 7.
    Broj 45 je djeljiv s 9.
*/

#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Unesite broj: ";
    cin >> a;

    if (a % 3 == 0)
        cout << "Broj " << a << " je djeljiv s 3." << endl;
    else
        cout << "Broj " << a << " nije djeljiv s 3." << endl;

    if (a % 5 == 0)
        cout << "Broj " << a << " je djeljiv s 5." << endl;
    else
        cout << "Broj " << a << " nije djeljiv s 5." << endl;

    if (a % 7 == 0)
        cout << "Broj " << a << " je djeljiv sa 7." << endl;
    else
        cout << "Broj " << a << " nije djeljiv sa 7." << endl;

    if (a % 9 == 0)
        cout << "Broj " << a << " je djeljiv s 9." << endl;
    else
        cout << "Broj " << a << " nije djeljiv s 9." << endl;

    return 0;
}

/*  Zadatak 07. Omogućite korisniku unos 2 logičke vrijednosti, A i B. Ispišite negaciju od A te vrijednosti (A I B) te (A ILI B). Ispis neka bude u formatu prema primjeru. Primjer:

    UNOS
    Unesite A: 1
    Unesite B: 0
    ISPIS
    Ako je logicki podatak A = 1 tada je suprotno od A 0
    Za A = 1 i B = 0, (A I B) = 0
    Za A = 1 i B = 0, (A ILI B) = 1
*/

#include <iostream>
using namespace std;

int main() {
    bool a, b;

    cout << "Unesite A: ";
    cin >> a;
    cout << "Unesite B: ";
    cin >> b;

    cout << "Ako je logicki podatak A = " << a << " tada je suprotno od A " << !a << endl;
    cout << "Za A = " << a << " i B = " << b << ", (A I B) = " << (a && b) << endl;
    cout << "Za A = " << a << " i B = " << b << ", (A ILI B) = " << (a || b) << endl;

    return 0;
}
    


/*  Zadatak 08. Omogućite korisniku unos cjelobrojne vrijednosti, Ako je upisana vrijednost jednoznamenkasti broj, ispišite „Upisan je jednoznamenkasti broj”, ako je upisana vrijednost dvoznamenkasti broj, ispišite „Upisan je dvoznamenkasti broj”, u protivnom ispišite „Upisani broj nije niti jednoznamenkast niti dvoznamenkast.”. Primjer:

    UNOS
    Unesite broj: 45
    ISPIS
    Upisani broj je dvoznamenkast.

    P.S. Primjerice, za unos broja 352 treba se ispisati
    Upisani broj nije niti jednoznamenkast niti dvoznamenkast.
*/

#include <iostream>
using namespace std;

int main (){

int a;
cout << "Unesi cjelobrojnu vrijednost!" << endl;
cin >> a;

if (a >= 0 && a <= 9) {
    cout << "Upisan je jednoznamenkasti broj" << endl;
} else if (a >= 10 && a <= 99)  {
    cout << "Upisan je dvoznamenkast broj" << endl;
} else {
    cout << "Upisani broj nije niti jednoznamenkast niti dvoznamenkast." << endl;
}
return 0; 
}

/*  Zadatak 09. Omogućite korisniku unos 3 cjelobrojne vrijednosti ocjena. Ako je zbroj ocjena veći od 13 tada ispišite „Jako dobar uspjeh”, ako je zbroj manji od 8 tada ispišite „Poprilično loš uspjeh” a za sve ostale vrijednosti zbroja ispišite „Prosječan uspjeh”. Primjer:

    UNOS
    Unesite 1. ocjenu: 5
    Unesite 2. ocjenu: 2
    Unesite 3. ocjenu: 3
    ISPIS
    Ostvarili ste prosjecan uspjeh.

    P.S. Za unos ocjena 5, 4, 5 trebalo bi se ispisati
    Ostvarili ste jako dobar uspjeh.
*/

#include <iostream>
using namespace std;

int main (){

 int ocjena1;
 cout << "Unesi prvu ocjenu" << endl;
 cin >> ocjena1;
 
  int ocjena2;
 cout << "Unesi drugu ocjenu" << endl;
 cin >> ocjena2;
 
  int ocjena3;
 cout << "Unesi trecu ocjenu" << endl;
 cin >> ocjena3;

 if (ocjena1 + ocjena2 + ocjena3 > 13) {
     cout << "Jako dobar uspjeh!" << endl;
 } else if (ocjena1 + ocjena2 + ocjena3 < 8) {
      cout << "Poprilično loš uspjeh" << endl;
 } else {
     cout << "Prosjecan uspjeh" << endl;
 }
return 0;
}

/*  Zadatak 10. Omogućite korisniku unos znakovne vrijednosti (slovo). Zatražite upis jednog samoglasnika. Ako korisnik unese neispravnu vrijednost, ispišite „Krivi unos”. Za ispravnu vrijednost, ispišite redni broj samoglasnika (za „a” ispišite 1, za „e” ispišite 2, za „i” ispišite 3, za „o” ispišite 4 i za „u” ispišite 5). Primjer:

    UNOS
    Unesite samoglasnik: e
    ISPIS
    Slovo e je 2. samoglasnik.

    P.S. Za unos slova g trebalo bi se ispisati
    Krivi unos.
*/

#include <iostream>
using namespace std;

int main (){

#include <iostream>
using namespace std;

int main (){

char slovo;
cout << "Upisi jedan samoglasnik" << endl;
cin >> slovo; 

if (slovo == 'a')  {
    cout << "Slovo a je prvi samoglasnik" << endl;
}
 else if (slovo == 'e') {
     cout << "Slovo e je drugi samoglasnik" << endl;
}
 else if (slovo == 'i') {
    cout << "Slovo i je treci samoglasnik" << endl;
} else if (slovo == 'o') {
    cout << "Slobo o je cetvrti samoglasnik" << endl;
} else if (slovo == 'u') {
    cout << "Slobo u je peti samoglasnik" << endl;
} else {
    cout << "To nije samoglasnik" << endl;
}
return 0;
}
}
