/*
 * Stos.h
 *
 *  Created on: 30 mar 2017
 *      Author: michal
 */

#ifndef STOS_H_
#define STOS_H_
#include "Program.h"

namespace std {

class Stos {
public:
	Stos();
	virtual ~Stos();
private:
	virtual void dodaj (int element); // realizuje push, dodaje podany element na górę stosu
	virtual int* pobierz ();          // realizuje pop, pobiera wskaźnik na element z góry stosu
	virtual int rozmiar ();           // zwraca aktualny rozmiar stosu
	virtual int* wyszukaj (int klucz);// zwraca wskaźnik na element o podanym kluczu
	int* pierwszy ();                 // zwraca wskaźnik na pierwszy element stosu
};

} /* namespace std */

#endif /* STOS_H_ */
