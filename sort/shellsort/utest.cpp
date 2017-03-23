#include <iostream>
#include "shellsort.h"

#define NUM 10
using namespace std;

DataType arr[NUM] = {23, 3, 1, 2, 3, 4, 7, 5, 0, 34};

int main() {
    int dst[NUM];
    int n = NUM;
    int numOfD = D(dst, n); 
    ShellSort(arr, NUM, dst, numOfD);
    int i = 0;
    for (; i < NUM; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

