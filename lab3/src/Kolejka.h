/*
 * Kolejka.h
 *
 *  Created on: 30 mar 2017
 *      Author: michal
 */

#ifndef KOLEJKA_H_
#define KOLEJKA_H_
#include "Program.h"

namespace std {

class Kolejka {
public:
	Kolejka();
	virtual ~Kolejka();
	virtual void dodaj (int element); // realizuje push, dodaje element na początek kolejki
	virtual int* pobierz ();          // realizuje pop, pobiera ostatni element kolejki
	virtual int rozmiar ();           // podaje aktualny rozmiar kolejki
	virtual int* wyszukaj (int klucz);// zwraca wskaźnik na element o podanym kluczu
	int* ostatni ();                  // zwraca wskaźnik na ostatni element kolejki
};

} /* namespace std */

#endif /* KOLEJKA_H_ */
