/* Nama File    : HargaDiskon.c*/
/* Deskripsi    : Menghitung besarnya harga setelah diskon berdasarkan jenisnya masing-masing*/
/* Nama         : Laily Novita Sari*/
/* NIM          : 24060121130056*/

#include <stdio.h>

int main() {
    /* Kamus */
    int H;
	float d,A;
	char D;

    /* Algoritma */
    printf("Program harga diskon \n");
	printf("Harga awal produk : ");
	scanf("%d", &H);
	printf("Masukan jenis diskon : ");
	scanf(" %c", &D);

	switch(D){
		case 'A' :
			d = 0.1;
			A = H - (H * d);
			printf("Harga akhir produk adalah %.2f", A);
			break;

		case 'B' :
			d = 0.15;
			A = H - (H * d);
			printf("Harga akhir produk adalah %.2f", A);
			break;

		case 'C' :
			d = 0.2;
			A = H - (H * d);
			printf("Harga akhir produk adalah %.2f", A);
			break;

	}
	return 0;
}
