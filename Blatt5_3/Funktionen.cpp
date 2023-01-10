#include <stdio.h>
#include <stdlib.h>
#include"Konstanten.h"
#define anzahl 11

int array[anzahl];


void einlesen(int array[])
{
	for (int i = 0; i < 10; i++)
	{
		//srand(time(NULL));
		array[i] = rand() % 10;
		printf_s("%d\n", array[i]);
		
	}

	
}
void sortieren(int array[], int size)
{


	for (int step = 0; step < size - 1; ++step)
	{
		int swapped = 0;

		for (int i = 0; i < size - step - 1; ++i)
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				swapped = 1;
				
			}
		}
		if (swapped == 0) {
			break;
		}
	}
	
}

void ausgabe(int array[], int size)
{
	for (int i = 0; i < size; ++i) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}
