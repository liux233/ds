/*
 *
 *  Edit History:
 *
 *    06/21/2019 - Created by liux
 *
 */
#include <string.h>

int get_next(const char * sub, int next[]) {
    int j = 1, k =0;
    next[0] = -1;
    next[1] = 0;
    while(j < (strlen(sub) - 1)) {
        if(sub[j] == sub[k]) {
            next[j + 1] = k + 1;
            j++;
            k++;
        }
        else if(k == 0){
            next[j + 1] = 0;
            j++;
        }
        else {
            k = next[k];
        }

    }
}

int kmpFind(const char * str, const char * sub, int start, int * next) {
    int i = start, j = 0;
    while(i < strlen(str) && j < strlen(sub)) {
        if(str[i] == sub[i]) {
            i++;
            j++;
        }
        else if(j == 0) {
            i++;
        }
        else {
            j = next[j];
        }
    }

    if(j == strlen(sub))
        return i - strlen(sub);
    else
        return -1;
}

int findStrKmp(const char * str, const char * sub, int start) {
    int m = strlen(sub);
    int * next = new int[m];
    get_next(sub, next);

    int v = kmpFind(str, sub, start, next);
    delete []next;

    return v;
}
