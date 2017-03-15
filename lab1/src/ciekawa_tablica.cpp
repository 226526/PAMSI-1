//============================================================================
// Name        : ciekawa_tablica.cpp
// Author      : Michał Wieczorek
// Version     : 1.0
// Copyright   : Not apply
// Description : Creating non sized Table, Ansi-style
//============================================================================
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Moja_tablica{
public:
	int przypisanie (int pozycja, int wartosc);
	int odczytanie (int pozycja);
	int rozmiar ();
	int wypelnienie ();

	Moja_tablica (int r=10);
private:
	int ROZMIAR;
	int WYPELNIENIE;
	int *TABLICA;

	int *powieksz_tablice (int rozmiar, int stara_tablica[]);
	int *zmniejsz_tablice (int rozmiar, int wypelnienie, int stara_tablica[]);
};

// Konstruktor
Moja_tablica::Moja_tablica (int r){
	TABLICA = new int[r];
	ROZMIAR = r;
	WYPELNIENIE = 0;
}
// Przypisanie wartosci do konkretnego miejsca w tablicy
int Moja_tablica::przypisanie (int pozycja, int wartosc){
	// jeżeli podano pozycję w zakresie tablicy
	if (pozycja < rozmiar()){
		return TABLICA [pozycja] = wartosc;
	}
	//jeżeli podano nieprawodłową - ujemną pozycję
	else if (pozycja < 0){
		cout << "BŁĄD: Nieprawidlowy indeks do zapisu liczby" << endl;
		return 0; // błąd domyślnie będzie zwracać 0;
	}
	// jeżeli podano pozycję poza zakresem tablicy -> powieksz tablice
	else {
		//cout << "Uwaga: ROZSZERZENIE OBSZARU PAMIECI" << endl;
		TABLICA = Moja_tablica::powieksz_tablice (pozycja+1, TABLICA); // do ostatniego elementu powiekszonej tablicy
		ROZMIAR = pozycja+1;                                           // wpisuje podaną mu wartosc
		return TABLICA [pozycja] = wartosc;
	}
}
// Odczytanie wartosci z konkretnego miejsca w tablicy
int Moja_tablica::odczytanie (int pozycja){
	// jeżeli indeks zawiera się w rozmiare tablicy, możemy wypisać jej komórkę
	if (pozycja < rozmiar()){
		return TABLICA [pozycja];
	}
	else {
		cout << "BLAD: ODWOLANIE DO NIEISTNIEJACEGO OBSZARU PAMIECI" << endl;
		return 0; // błąd odczytu jeśli podano pozycję poza zakresem tablicy
	}
}
// Odczytanie aktualnego rozmiaru tablicy
int Moja_tablica::rozmiar (){
	if (ROZMIAR >= 0){
		return ROZMIAR;
	}
	else{
		cout << "BLAD: NIEPRAWIDLOWY ROZMIAR TABLICY" << endl;
		return 0; // błąd który nie powinien się pojawić
	}
}
// Zwraca ilość wypełnionych komórek tablicy
int Moja_tablica::wypelnienie (){
	if (WYPELNIENIE >= 0){
		return WYPELNIENIE;
	}
	else{
		cout << "BLAD: NIEPRWIDLOWY ROZMIAR TABLICY" << endl;
		return 0;
	}
}

// Metody prywatne
// Tworzy nową tablicę, która jest większa o tyle elementów ile podano
int *Moja_tablica::powieksz_tablice (int rozmiar, int stara_tablica[]){
	int i;
	int *nowa_tablica = new int[rozmiar];

	for(i=0; i<ROZMIAR; i++){
		nowa_tablica[i] = stara_tablica[i]; // jednoczenieśnie odbywa się jednorazowe kopiowanie tablicy
	}
	delete [] stara_tablica;
	return nowa_tablica;
}
// Zmniejsza tablicę, w zależności od jej wypełnienia (można użyć <=> gdy wypelnienie < rozmiaru)
int * Moja_tablica::zmniejsz_tablice (int rozmiar, int wypelnienie, int stara_tablica[]){
	int i;
	int *nowa_tablica = new int[wypelnienie];

	for(i=0; i<wypelnienie; i++){
		nowa_tablica[i] = stara_tablica[i]; // tu również przpisuje się tablicę, jednak teraz do mniejszej
	}
	delete [] stara_tablica;
	return nowa_tablica;
}

int main(){
	int i;
	int ilosc = 10000; // przechowuje informację na temat ilosci powtorzen petli zapisującej liczby do tablicy
	Moja_tablica *tab = new Moja_tablica[10]; // tworzenie obiektu
	int rozmiar = tab->rozmiar(); // początkowy rozmiar tablicy
	int rozmiar_poprz = 0; //poprzedni rozmiar tablicy (potrzebyny do algorytmu 2n)
	int wypelnienie = tab->wypelnienie(); // początkowe wypełnienie tablicy
	double roznica; // zmienna do obliczenia czasu trwania algorytmu

	// konfiguracja zegara
	cout.setf(ios::fixed); // notacja liczbowa
	cout.precision(4); // liczba miejsc po przecinku
	clock_t start, koniec; // inicjacja zmiennych zegarowych

	cout << "Ilosc elementow do zapisu: " << ilosc << endl;

	start=clock(); //zapisanie czasu startu mierzenia

	// algorytm N+1 ******************************************************************************
	for (i=0; i<ilosc; i++){
		tab->przypisanie(i, 1+rand()%9); // po każdym kroku, następuje nadpisanie tablicy i jeden element
	}
	koniec = clock(); //zapis konca mierzenia
	roznica = (koniec - start) / (double)CLOCKS_PER_SEC; //obliczenie czasu wykonania
	cout << "Czas wykonania N+1: "<< roznica <<endl;

	start = clock(); //zapisanie czasu startu mierzenia

	// Algorytm 2*N (nowy) ***********************************************************************
	while (rozmiar < ilosc){ //jeżeli ilosc docelowa elementow > od  aktualnego rozmiaru to zapisuje
		for(i=rozmiar; i>rozmiar_poprz; i--){ // petla zapisuje w odwrotnym kierunku, gdyż najpierw tworzy ostatni element
			tab->przypisanie (i, 1+rand()%9); // nowej tablicy, a później wypełnia pusty obszar poniżej liczbami pseudolosowymi
			wypelnienie++;
		}
		rozmiar_poprz = rozmiar; //zapis poprzedniego rozmiaru tablicy w którym korzysta w kolejnym kroku
		rozmiar = 2*rozmiar; // dwukrotne zwiększenie aktualnej tablicy
	}
	tab->przypisanie (rozmiar, 0);       // w ostatnim kroku następuje poszerzenie tablicy, ale jest ona większa od docelowego
	for (i=ilosc; i>rozmiar_poprz; i--){ // rozmiaru, dlatego ostatnia pętla nadpisuje elementy do docelowej ilosci elementow
		tab->przypisanie (i, 1+rand()%9);// pozostała przestrzeń pozostaje pusta
		wypelnienie++;
	}

	koniec = clock(); //zapis konca mierzenia
	roznica = (koniec - start) / (double)CLOCKS_PER_SEC;//obliczenie czasu wykonania
	cout << "Czas wykonania 2*N: " << roznica << endl;
	//cout << "Wypelnienie: " << wypelnienie << endl;

	delete [] tab; //zwolnienie pamięci przydzielonej do obiektu

	return 0;
}
