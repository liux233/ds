#include "shellsort.h"

void ShellInsertSort(DataType arr[], int n, int k, int span) {
    int i, j;
    DataType temp;
    for(i = k; i < n - span; i += span) {
        temp = arr[i + span];
        j = i;
        while(j >= -1 && temp < arr[j]) {
            arr[j + span] = arr[j];
            j -= span;
            arr[j + span] = temp;
        }
    }
}

void ShellSort(DataType arr[], int n, int dst[], int numOfD) {
    int i, span;
    DataType temp;
    for(i = 0; i <= numOfD; i++) {
        span = dst[i];
        int j;
        for(j = 0; j < span; j++) {
            ShellInsertSort(arr, n, j, span);
        }
    }
}

int D(int dst[],int n)
{   
    int i,span;
    for(i=0, span = n / 2; span>0; span /= 2, i++) {
        dst[i] = span;
    }
    return i-1;
}


