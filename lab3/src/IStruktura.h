/*
 * IStruktura.h
 *
 *  Created on: 30 mar 2017
 *      Author: michal
 */

#ifndef ISTRUKTURA_H_
#define ISTRUKTURA_H_
#include "IProgram.h"

namespace std {

// IStruktura zawiera
class IStruktura: public IProgram{
public:
	IStruktura();
	virtual ~IStruktura();
private:
	virtual void dodaj (int element); // dodaje nowy element na koniec listy
	virtual int* pobierz ();          // pobiera wskaźnik na element z końca listy
	virtual int rozmiar ();           // zwraca aktualny rozmiar listy
	virtual int* wyszukaj (int klucz);// zwraca wskaźnik na element o podanym kluczu
};

} /* namespace std */

#endif /* ISTRUKTURA_H_ */
