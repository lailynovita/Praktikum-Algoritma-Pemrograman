//Nama File		: sequential.c
//Nama Pembuat	: Laily Novita Sari
//NIM			: 24060121130056
//Lab			: B1
//Tugas			: Membuat soal tentang searching, bebas akan menggunakan algoritma yang mana (sequential atau binary) dengan minimal jumlah elemen arraynya 10.

//Membuat soal searching
//Soal			: N = 10, T berisi {1,2,4,6,8,10,12,14,16,18} X = 14
// 				Pemeriksaan dilakukan terhadap {1,2,4,6,8,10,12,14}
//				Output: IX = 7
//Deskripsi		: Mencari angka 14 pada Tabel T [1..N] secara sequential mulai dari T1.
// 				Hasilnya adalah indeks IX dimana Tix = X (i terkecil).
//				IX = 0 jika tidak ketemu.
//				Skema pencarian tanpa boolean.


#include <stdio.h>
#include "sequential.h"

void SEQSearchX1(int T[], int N, int *IX, int X)
{
	//Kamus Lokal
	int i;
	
	//Algoritma
	i = 0;
    while (i < N-1 && X != T[i]) 
	{
        i += 1;
    }
    if (T[i] == X)
	{
        *IX = i;
    }
	else
	{
        *IX = -1;
    }
}



