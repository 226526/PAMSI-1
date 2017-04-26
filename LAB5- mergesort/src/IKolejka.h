/*
 * IKolejka.h
 *
 *  Created on: 2 kwi 2017
 *      Author: michal
 */

#ifndef IKOLEJKA_H_
#define IKOLEJKA_H_
#include "IKontener.h"

namespace std {

class IKolejka: public IKontener {
public:
	IKolejka();
	virtual ~IKolejka();
	virtual void dodaj(int element)=0; 		// realizuje push, dodaje element na początek kolejki
	virtual void usun()=0;      			// realizuje pop, pobiera ostatni element kolejki
	virtual int rozmiar()=0;           		// podaje aktualny rozmiar kolejki
	virtual bool czy_pusta()=0;		  		// sprawdza czy kolejka jest pusta
	virtual int pierwszy()=0;            	// zwraca wartość pierwszego elementu
	virtual int wyszukaj(int klucz)=0; 		// szuka elementu o podanym kluczu w kolejce
 	virtual int zdejmij()=0;
};

} /* namespace std */

#endif /* IKOLEJKA_H_ */
