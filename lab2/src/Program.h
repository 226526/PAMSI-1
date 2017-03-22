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
};

#endif /* PROGRAM_H_ */
