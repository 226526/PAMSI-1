/*
 * Lista.cpp
 *
 *  Created on: 30 mar 2017
 *      Author: michal
 */

#include <iostream>
#include "Lista.h"

namespace std {

Lista::Lista() {
	pierwszy = 0;
	ostatni = 0;
	Rozmiar = 0;
}

Lista::~Lista() {

}

// dodaje element na początek listy
void Lista::dodaj_poczatek(int liczba) {
	Lista_Elem *nowy = new Lista_Elem;  // tworzy nowy element
	nowy->wartosc = liczba; 			// przypisuje mu wartosć

	if (this->pierwszy == 0) {			// jeśli dodajemy pierwszy element
		this->pierwszy = nowy;			// wskazuje on na piewrszy element listy
	}
	else {
		nowy->nastepny = pierwszy; 		// ostatni element wskazuje na nasz nowy
		this->pierwszy = nowy; 		 	// ostatni nie wskazuje na nic
	}
	Rozmiar++;
}

// zwraca aktualny rozmiar listy
int Lista::rozmiar() {
	return Rozmiar;
}

// zwraca wskaźnik na element o podanym kluczu
Lista_Elem* Lista::wyszukaj(int klucz) {
	Lista_Elem *tmp = this->pierwszy;	// tworzymy tymczasowy skaźnik na pierwszy elem
	while (tmp) {
		if (tmp->wartosc == klucz) { 	// porównujemy wartość każdego elementu z kluczem
			return tmp;
		}
		tmp = tmp->nastepny;			// bierzemy kolejny element
	}
	return tmp;							// zwracamy wskaźnik na znaleziony element
}

// wypełnia listę elementami, a następnie szuka elementu zgodnego z klcuzem
void Lista::wykonaj_obliczenia(int typ_alg, int ilosc) {
	this->dodaj_poczatek(5);
	for (int i = 0; i < ilosc - 1; ++i) {
		this->dodaj_poczatek(1);
	}
/*
	for(int i = 1; i<=Rozmiar; pierwszy = pierwszy->nastepny)
	    cout << "Element #" << i++ << "  wartosc: " << pierwszy->wartosc << endl;
	  cout << endl;
*/
	this->wyszukaj(5);
}

} /* namespace std */
