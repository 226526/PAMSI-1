//============================================================================
// Name        : main.cpp
// Author      : Michał Wieczorek
// Version     : 2.1
// Copyright   :
// Description : Creating interface for calculations, Ansi-style
//============================================================================
#include "Tablica.h"
#include "Stoper.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "IProgram.h"
#include "IStruktura.h"

using namespace std;

int main(){
	int ilosc = 1000000;       // Rozmiar docelowy tablicy
	int typ_alg = 0;        // 0-> n+1; 1-> 2n
	int ile_pom = 20;       // Ilość pomiarów Stoperem

	Stoper pom;  // obiekt do przechowywania czasu
	for (int i=0; i<ile_pom; i++){ // pętla wypisująca pomiary
		Tablica *Pojemnik = new Tablica (10); // tworzenie pojemnika do zapisu danych
		pom.mierz_czas(Pojemnik, typ_alg, ilosc); // pojedynczy pomiar czasu zapełnienia tablicy
		cout << pom.wypisz_czas() << endl; // wypisanie zawartosci
		delete Pojemnik; // usunięcie obiektu
	}

	return 0;
}
