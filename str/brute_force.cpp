/*
 *
 *  Edit History:
 *
 *    06/21/2019 - Created by liux
 *
 */
#include <string.h>
#include <stdio.h>


int findStrBruteForce(const char * str, const char * sub, int start) {
    int i = start, j = 0;
    while(i < strlen(str) && j < strlen(sub)) {
        if(str[i] == sub[j]) {
            i++;
            j++;
        }
        else {
            i = i - j + 1;
            j = 0;
        }
    }

    if(j == strlen(sub)) 
        return i - strlen(sub);
    else
        return -1;
}


