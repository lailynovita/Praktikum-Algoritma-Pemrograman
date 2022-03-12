/* Nama File    : BiayaParkir.c*/
/* Deskripsi    : Menghitung besarnya biaya parkir berdasarkan lamanya parkir*/
/* Nama         : Laily Novita Sari*/
/* NIM          : 24060121130056*/

#include <stdio.h>

int main() {
    /* Kamus */
    int p,t;

    /* Algoritma */
    printf("Membuat program biaya parkir \n");
	printf("Jam lamanya parkir : ");
	scanf("%d", &p);

	if ( p > 2) {
		t = 2000 + (p-2) * 500 ;
		printf(" Biaya parkir sebesar: %d", t);
    }
	else{
		t = 2000;
		printf(" Biaya parkir sebesar: %d", t);
	}
	return 0;
}
