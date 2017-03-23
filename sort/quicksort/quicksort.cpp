#include "quicksort.h"

static void SelectPivot(int low, int high) {
    //
}

static int Partition(DataType arr[], int low, int high) {
    DataType temp = arr[low];
    int i = low;
    int j = high;

    while(i < j) {
        while((i < j) && (arr[j] > temp)) {
            j--;
        }
        if(i < j) {
            arr[i] = arr[j];
            i++;
        }
        while((i < j) && (arr[i] < temp)) {
            i++;
        }
        if(i < j) {
            arr[j] = arr[i];
            j--;
        }
    }
    arr[i] = temp;
    return i;
}

static void Quick_sort(DataType arr[], int low, int high) {
    int pivot;
    if(high <= low) {
        return ;
    }
    //SelectPivot(low, high);
    pivot = Partition(arr, low, high);
    Quick_sort(arr, low, pivot -1);
    Quick_sort(arr, pivot + 1, high);
}

void QuickSort(DataType arr[], int n) {
    Quick_sort(arr, 0, n -1);
}
