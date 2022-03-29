/* Nama File    : NBArray.c */
/* Deskripsi    : Menghitung dan menampilkan hasil penjumlahan sub array/tabel T */
/* Nama         : Laily Novita Sari 8/
/* NIM          : 24060121130056 */

#include <stdio.h>

int main (){
	/* Kamus */
	int i,j,N,NBArray;

    /* Algoritma */
    printf("Membuat Program Menghitung Array\n");
    scanf("%d", &N);
    int T[N];
    NBArray = 0;

    for (i = 0; i < N; i++) scanf("%d", &T[i]);

    for (i = 0; i < N; i++) {
        for (j = i; j < N; j++) {
            NBArray += T[j];
        }
    }
    printf("%d", NBArray);

    return 0;
}
