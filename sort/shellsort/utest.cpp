#include <iostream>
#include "shellsort.h"

#define NUM 10
using namespace std;

DataType arr[NUM] = {23, 3, 1, 2, 3, 4, 7, 5, 0, 34};

int main() {
    ShellSort(arr, NUM);
    int i = 0;
    for (; i < NUM; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

