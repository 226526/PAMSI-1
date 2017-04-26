/*
 * ILista.h
 *
 *  Created on: 30 mar 2017
 *      Author: michal
 */

#ifndef ILISTA_H_
#define ILISTA_H_
#include "IProgram.h"
#include "Lista_Elem.h"
#include "IKontener.h"

namespace std {

// ILista zawiera
class ILista: public IKontener{
public:
	ILista();
	virtual ~ILista();
	virtual void dodaj(int liczba)=0;	// dodaje nowy element na początek listy
	virtual int rozmiar()=0;               		// zwraca aktualny rozmiar listy
	virtual int wyszukaj(int klucz)=0;	// zwraca wartosc wyszukanego
	virtual int zdejmij()=0;
};

} /* namespace std */

#endif /* ILISTA_H_ */
