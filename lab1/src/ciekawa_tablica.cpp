//============================================================================
// Name        : ciekawa_tablica.cpp
// Author      : Michał Wieczorek
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

class Moja_tablica{
public:
	int przypisanie (int pozycja, int wartosc, int blad);
	int odczytanie (int pozycja, int blad);
	int rozmiar (int rozmiar, int blad);
private:
	int ROZMIAR;
	int WYPELNIENIE;
	int * TABLICA;

	int * powieksz_tablice (int rozmiar, int stara_tablica[], int blad);
};

// metody publiczne
int Moja_tablica::przypisanie (int pozycja, int wartosc, int blad){
	return TABLICA[pozycja] = wartosc;
}

int Moja_tablica::odczytanie (int pozycja, int blad){
	return TABLICA[pozycja];
}

int Moja_tablica::rozmiar (int rozmiar, int blad){
	return ROZMIAR;
}

// metody prywatne
int * Moja_tablica::powieksz_tablice (int rozmiar, int stara_tablica[], int blad){
	int i;
	int * nowa_tablica = new int[rozmiar];

	for(i=0; i<rozmiar; i++){
		nowa_tablica[i] = stara_tablica[i];
	}
	return nowa_tablica;
}

int main(){
	Moja_tablica tab;

	return 0;
}
