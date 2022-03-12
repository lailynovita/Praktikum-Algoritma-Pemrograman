/* Nama File    : UpahKerja.c*/
/* Deskripsi    : Menghitung besarnya upah kerja berdasarkan golongan dan jumlah jam kerja*/
/* Nama         : Laily Novita Sari*/
/* NIM          : 24060121130056*/

#include <stdio.h>

int main() {
    /* Kamus */
    int j,g,u;

    /* Algoritma */
    printf("Membuat program upah kerja \n");
	printf("Jam kerja per minggu  : ");
	scanf("%d", &j);
	printf("Golongan Karyawan  : ");
	scanf("%d", &g);

	if ( j < 40) {
		u = j * (1000 + (j-2)*500);
		printf(" Upah kerja sebesar : %d", u);
    }
	else {
		u = j * (1000 + (j-2)*500)*40 + ((j-40)*(1000 + (g-1)*500));
		printf(" Upah kerja sebesar : %d", u);
	}
	return 0;
}
