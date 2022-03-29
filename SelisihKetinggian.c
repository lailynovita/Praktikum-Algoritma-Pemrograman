/* Nama File    : SelisihKetinggian.c */
/* Deskripsi    : Menghitung dan menampilkan besarnya selisih ketinggian terbesar puncak bukut dengan lembah bukit atau sebaliknya */
/* Nama         : Laily Novita Sari */
/* NIM          : 24060121130056 */

#include <stdio.h>
#include <math.h>

int main(){
    /* Kamus */
    int N, i, max, min, sel;

    /* Algoritma */
    printf("Menghitung Selisih Ketinggian Puncak Bukit dan Lembah dalam Array T\n");
    printf("\nJumlah data pada jalur lintasan : ");
    scanf("%d", &N);

    int T[N];
    for(i = 0; i < N; i++){
        printf("\nNilai data pada indeks ke - %d : ", i);
        scanf("%d", &T[i]);
    }

    min = max = T[0];

    for(i = 0; i < N; i++){
        if(max < T[i]){
            max = T[i];
        }

    }
    for(i = 0; i < N; i++){
        if(min > T[i]){
            min = T[i];
        }
    }

    printf("\nKetinggian terbesar : %d\n", max);
    printf("\nKetinggian terendah: %d\n", min);
    sel = max - min;
    printf("\nSelisih ketinggian : %d\n", sel);
    return 0;
}
