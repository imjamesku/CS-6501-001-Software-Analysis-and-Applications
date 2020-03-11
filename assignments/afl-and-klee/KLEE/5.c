#include "klee/klee.h"
#include <stdio.h>
#define ARR_LEN 5

int minval(int *A, int n) {
    int currmin;

    for (int i = 0; i < n; i++)
        if (A[i] < currmin)
            currmin = A[i];
    return currmin;
}

int main() {
    int arr[ARR_LEN];
    // for (int i = 0; i < ARR_LEN; i++) {
    //     scanf("%d", arr + i);
    // }
    klee_make_symbolic(arr, sizeof(arr), "arr");
    // printf("min: %d", minval(arr, ARR_LEN));
    return 0;
}