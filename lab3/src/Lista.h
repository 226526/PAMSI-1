/*
 * Lista.h
 *
 *  Created on: 30 mar 2017
 *      Author: michal
 */

#ifndef LISTA_H_
#define LISTA_H_
#include "Program.h"

namespace std {

class Lista: public Program{
public:
	Lista();
	virtual ~Lista();
private:
	virtual void dodaj (int element); // dodaje nowy element na koniec listy
	virtual int* pobierz ();          // pobiera wskaźnik na element z końca listy
	virtual int rozmiar ();           // zwraca aktualny rozmiar listy
	virtual int* wyszukaj (int klucz);// zwraca wskaźnik na element o podanym kluczu
	int* nastepny ();                 // zwraca wskaznik na nastepny element listy
	int* poprzedni ();                // zwraca wskaźnik na poprzedni element listy
};

} /* namespace std */

#endif /* LISTA_H_ */
