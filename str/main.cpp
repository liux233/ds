/*
 *
 *  Edit History:
 *
 *    06/21/2019 - Created by liux
 *
 */
#include <stdio.h>
#include "brute_force.h"
#include "kmp.h"

int main() {
    const char * str = "abcdabd";
    const char * sub = "abd";

    int ret = findStrBruteForce(str, sub, 0);
    printf("ret:%d\n", ret);

    ret = findStrKmp(str, sub, 0);
    printf("ret:%d\n", ret);
    return 0;
}

