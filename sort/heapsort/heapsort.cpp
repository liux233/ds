#include "heapsort.h"

static void HeapAdjustDown(DataType arr[], int n, int h) {
    int i = h;
    int j = i * 2 + 1;
    DataType temp = arr[i];
    
    while(j < n) {
        if(j < (n - 1) && arr[j] < arr[j + 1]){
            j++;
        }
        if(temp > arr[j]) {
            break;
        }
        else {
            arr[i] = arr[j];
            i = j;
            j = 2 * i + 1;
        }
    }
    arr[i] = temp;
}

static void BuildHeap(DataType arr[], int n) {
    int i;
    for(i = n / 2 - 1; i >= 0; i--) {
        HeapAdjustDown(arr, n, i);
    }
}

void HeapSort(DataType arr[], int n) {
    int i;
    DataType temp;
    //build heap
    BuildHeap(arr, n);
    //for(i = n / 2 - 1; i >= 0; i--) {
    //    HeapAdjustDown(arr, n, i);
    //}
    for(i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        HeapAdjustDown(arr, i, 0);
    }
}
