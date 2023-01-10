#include <stdio.h>
#include <stdlib.h>
#include "Konstanten.h"
#define anzahl 10
int arrayy[anzahl];

int main()
{
	//srand();
	rand();
	einlesen(arrayy);
	sortieren(arrayy, anzahl);
	ausgabe(arrayy, anzahl);

	return 0;
}