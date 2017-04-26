/*
 * Tablica.h
 *
 *  Created on: 17 mar 2017
 *      Author: michal
 */

#ifndef TABLICA_H_
#define TABLICA_H_
#include "IProgram.h"
#include <iostream>
#include <cstdlib>

class Tablica: public IProgram { 
public:
	Tablica(int r = 10); // konstruktor - domyślnie rozmiar = 10
	~Tablica(); // dekonstruktor
	int przypisanie(int pozycja, int wartosc); // przypisanie indeksowi tablicy sprecyzowaniej wartości
	int odczytanie(int pozycja); // zwraca wartosc elementu przypisanego do indeksu tablicy
	int wypelnienie();  // zwraca zapelnienie tablicy
	void wyswietlanie();
	void algorytm_n1(int ilosc);
	void algorytm_2n(int ilosc);
	void mierz_czas_merg(int ilosc_powtorzen);

	void merge( Tablica* temp, int lewo, int piwot, int prawo);
	void merge_sort(  Tablica* temp, int lewo, int prawo);

	int rozmiar();                           


	virtual void wykonaj_obliczenia(int typ_alg, int ilosc); // zapisuje podaną ilość elementów do tablicy (konkretnym algorytmem)
private:
	int ROZMIAR; // pole przechowuje informację na temat aktualnego rozmiaru tablicy
	int WYPELNIENIE;  // aktualne wypełnienie tablicy
	int *TABLICA;  // wskaźnik na tablicę

	int *powieksz_tablice(int rozmiar, int stara_tablica[]); // powiększa tablicę o zadaną wielkość
	int *zmniejsz_tablice(int rozmiar, int wypelnienie, int stara_tablica[]); // usuwa pustą przestrzeń w tablicy
};

#endif /* TABLICA_H_ */
