//============================================================================
// Name        : main.cpp
// Author      : Implementacja na kodzie kolegi (Michala Wieczorka) przez Artura Szafraniaka 
// Version     : 4.1
// Copyright   :
// Description : Mergesort - implementacja na dynamicznej tablicy 
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





int main() 
{
	srand( time( NULL ) );
	double srednia=0;
	int powtorzenia=20;
	srand( time( NULL ) );
	int ilosc[5]={10,100,1000,10000,100000};
	Stoper mierze;
	Tablica *obiekt=new Tablica(ilosc[0]);
	


	for (int i=0; i<5; ++i)
	{
		for (int j=0; j<powtorzenia; ++j)
		{
			obiekt->wykonaj_obliczenia(0,ilosc[i]);
			mierze.mierz_czas(obiekt,2,ilosc[i]);
			srednia+=mierze.wypisz_czas();
		}
		srednia=srednia/powtorzenia;
		cout<<"OTO JEST SREDNIA: " <<srednia<<endl;
	}
	delete obiekt;
	return 0;
}
