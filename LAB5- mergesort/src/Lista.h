/*
 * Lista.h
 *
 *  Created on: 30 mar 2017
 *      Author: michal
 */

#ifndef LISTA_H_
#define LISTA_H_
#include "IProgram.h"
#include "ILista.h"
#include "Lista_Elem.h"

namespace std {

class Lista: public ILista, public IProgram{
public:
	Lista();
	virtual ~Lista();
	// ILista
	virtual void dodaj(int liczba);         // dodaje nowy element na poczatek listy
	virtual int rozmiar();                           // zwraca aktualny rozmiar listy
	virtual int wyszukaj (int klucz);        // zwraca wskaźnik na element o podanym kluczu
	//IProgram
	virtual void wykonaj_obliczenia(int typ_alg, int ilosc); // nadpisuje listę danymi, a następnie wyszukuje element
private:
	Lista_Elem* pierwszy;  // wskaźnik na pierwszy element listy
	Lista_Elem* ostatni;   // wskaźnik na ostatni element listy
	int Rozmiar;           // pole przechowuje rozmiar listy
};

} /* namespace std */

#endif /* LISTA_H_ */
