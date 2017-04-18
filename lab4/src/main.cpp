//============================================================================
// Name        : main.cpp
// Author      : Michał Wieczorek
// Version     : 4.1
// Copyright   :
// Description : Szybkie sortowanie danych
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Tablica.h"
#include "Stoper.h"
#include "Lista.h"
#include "Stos.h"
#include "Kolejka.h"
#include "Sort_szybkie.h"

using namespace std;

int main() {
	int j = 0;
	int ilosc[11] = { 10, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000 };  // Ilość danych do posortowania
	int typ_alg[3] = { 0, 1, 2 };        // 0 - wypełnienie randomowe
										 // 1 - wypełnienie rosnąco
										 // 2 - wypełnienie malejąco
	int typ_pivot[3] = { 0, 1, 2 };	     // 0 - pierwszy element
										 // 1 - środkowy element
										 // 2 - ostatni element
	int ile_pom = 50;       // Ilość pomiarów Stoperem
	Stoper Pomiar;
	double suma = 0;

	for (int n = 0; n < 3; n++) {
		cout << "typ" << n << endl;
		for (int k = 0; k < 3; k++) {
			cout << "pivot" << k << endl;
			for (j = 0; j < 11; j++) {
				for (int i = 0; i < ile_pom; i++) { // pętla wypisująca pomiary
					Sort_szybkie *tab = new Sort_szybkie(ilosc[j], typ_alg[n],
							typ_pivot[k]);
					Pomiar.mierz_czas(tab, typ_alg[n], ilosc[j]); // pojedynczy pomiar czasu zapełnienia tablicy
					suma += Pomiar.wypisz_czas(); // wypisanie zawartosci
					delete tab; // usunięcie obiektu
				}
				// średnia z pomiarów
				cout << suma / ile_pom << endl;
				suma = 0;
			}
		}
	}

	return 0;
}
