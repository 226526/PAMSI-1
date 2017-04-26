//============================================================================
// Name        : main.cpp
// Author      : Michał Wieczorek (ale merga dodal Artur Szafraniak) 
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
	double srednia=0;
	int powtorzenia=20;
	srand( time( NULL ) );
	int ilosc[5]={10,100,1000,10000,100000};
	Stoper mierze;
	IProgram *obiekt=new Tablica(ilosc[0]);
	

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



/*
  srand( time( NULL ) );
  int lewo=0;
  int prawo=20;			// prawo to ogolnie rozmiar; czyli prawy kraniec tablicy

  cout<<"dzialam"<<endl;
  Tablica t1(prawo);
  t1.algorytm_n1(prawo);
  cout<<"przed sortowaniem: ";
  t1.wyswietlanie();
  Tablica* temp=new Tablica(prawo);
  cout<<"po sortowaniu:     ";
  t1.merge_sort(temp,lewo,prawo-1);

  t1.wyswietlanie();
*/
  

	return 0;
}
