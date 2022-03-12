/* Nama File    : TarifPLN.c*/
/* Deskripsi    : Menghitung besarnya tarif PLN berdasarkan golongan dan pemakaian daya listrik*/
/* Nama         : Laily Novita Sari*/
/* NIM          : 24060121130056*/

#include <stdio.h>

int main() {
    /* Kamus */
    int i,g,t;

    /* Algoritma */
    printf("Membuat Program Tarif PLN \n");
	printf("Jumlah daya listrik yang dipakai  : ");
	scanf("%d", &i);
	printf("Golongan Tarif  : ");
	scanf("%d", &g);

	if ( i < 100 ) {
		t = g * 1000 * 100;
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", t);
    }
	else if ( i >= 1000 ) {
		t = (g * 1000 * i) * 1.1;
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", t);
	}
	else {
		t = g * 1000 * i;
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", t);
	}
	return 0;
}
