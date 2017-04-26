/*
 * IProgram.cpp
 *
 *  Created on: 25 kwiecien 2017
 *      Author: Artur
 */

#ifndef IKONTENER_H_
#define IKONTENER_H_


class IKontener{ // Interface
  public:
  virtual void dodaj(int wartosc_dodana)=0;	// podana wartosc dodaje do kontenera
  virtual int zdejmij()=0;				// pobiera wartosc elementu kontenera (zaleznie od tego jaki to jest typ kontenera)
  virtual int rozmiar()=0;				// zwraca rozmiar kontenera
  virtual int wyszukaj(int szukana_wartosc)=0;	// zwraca szukana wartosc (jesli jest ona w kontenerze)	
  virtual void wyswietl()=0;
  virtual void wypelniam(int ilosc_elementow)=0;



  virtual ~IKontener(){};

};

#endif /* IKontener_H_ */
