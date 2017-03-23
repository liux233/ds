#include "common.h"

void swap(DataType *num1, DataType *num2) {
    DataType temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
