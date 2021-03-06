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



int main() 
{
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
  

	return 0;
}
