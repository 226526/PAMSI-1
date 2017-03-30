/*
 * Program.h
 *
 *  Created on: 17 mar 2017
 *      Author: michal
 */

#ifndef PROGRAM_H_
#define PROGRAM_H_

class Program{ // Interface
public:
	Program();  // Konstruktor
	virtual ~Program();  // Destruktor
	virtual void wykonaj_obliczenia(int typ_alg, int ilosc); // wirtualna metoda pozwala na zapełnienie dowolnego pojemnika z danymi

private: // wspólne metody dla struktur danych: stos, kolejka, lista
	// dodaj odpowiada za dodanie elementu do struktury danych
	virtual void dodaj (int element);
	// pobierz zwraca wskaźnik elementu ze struktury danych
	virtual int* pobierz ();
	// rozmiar zwraca aktualny rozmiary struktury
	virtual int rozmiar ();
	// wyszukaj zwraca wskaźnik na element o podanej wartości
	virtual int* wyszukaj (int klucz);
};

#endif /* PROGRAM_H_ */
