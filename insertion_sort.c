// Nama 		: Laily Novita Sari
// NIM 			: 24060121130056
// Nama file 	: insertion_sort.c
// Tanggal 		: 30 April 2022
// Deskripsi 	: Membuat algoritma pengurutuan dengan cara membandingkan dan mengurutkan dua data pertama pada array

#include <stdio.h>
#include "fungsi_arr.c"

void insertionSort(int arr[], int n){
    //Kamus lokal
    int i, j, key;

    //Algoritma
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(){
    //Kamus lokal
    int arr[]={10,6,12,4,18,22,2,14,30,16};
    int n;

    //Algoritma
    n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    insertionSort(arr, n);
    printArr(arr, n);

    return 0;
}
