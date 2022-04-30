// Nama 		: Laily Novita Sari
// NIM 			: 24060121130056
// Nama file 	: selection_sort.c
// Tanggal 		: 30 April 2022
// Deskripsi 	: Membuat algoritma pengurutuan dengan cara mencari nilai terendah / tertinggi di dalam array

#include <stdio.h>
#include "fungsi_arr.c"

void selectionSort(int arr[], int n){
    //Kamus lokal
    int i, j, min;

    //Algoritma
    for (i = 0; i < n-1; i++){
        for (j = i+1; j < n; j++){
            min = i;
            if (arr[j] < arr[min]){
                min = j;
            }
            swap(&arr[i], &arr[min]);
        }
    }
}

int main(){
    //Kamus
    int arr[]={10,6,12,4,18,22,2,14,30,16};
    int n;

    //Algoritma
    n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    selectionSort(arr, n);
    printArr(arr, n);

    return 0;
}
