/* Nama File    : BiayaParkir.c*/
/* Deskripsi    : Menghitung besarnya tunjangan berdasarkan gaji pokok dan jumlah anak*/
/* Nama         : Laily Novita Sari*/
/* NIM          : 24060121130056*/

#include <stdio.h>

int main() {
    /* Kamus */
	float a,g,t;

    /* Algoritma */
    printf("Membuat program tunjangan anak \n");
	printf("Jumlah anak  : ");
	scanf("%f", &a);
	printf("Gaji pokok  : ");
	scanf("%f", &g);

	if (a < 3) {
		t = a * (0.1 * g);
		printf("Maka Tunjangan yang harus dibayar sebesar  : %.0f", t);
    }
	else{
		t = a * (3/10);
		printf("Maka Tunjangan yang harus dibayar sebesar  : %.0f", t);
	}
	return 0;
}
