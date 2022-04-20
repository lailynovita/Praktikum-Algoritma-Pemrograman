#include <stdio.h>
#include <stdlib.h>
#include "sequential.h"

int main()
{
	//Kamus Lokal
	int IX;
	int Tabel_T[] = {1,2,4,6,8,10,12,14,16,18};
	int X = 14;
	int N = sizeof(Tabel_T) / sizeof(Tabel_T[0]);

 	//Algoritma
	SEQSearchX1(Tabel_T, N, &IX, X);
    if(IX == -1)
	{
    	printf("\nElemen tidak ditemukan)\n");
    }
	else
	{
		printf("Elemen berada pada index ke-%d", IX);
	}
	return 0;
}

