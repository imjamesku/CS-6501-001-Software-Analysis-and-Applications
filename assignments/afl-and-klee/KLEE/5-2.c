#include "klee/klee.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    //scanf("%d", &a);
    klee_make_symbolic(&a, sizeof(a), "a");
    if (a > 0) {
       // printf("larger than 0\n");
    } else {
        //printf("less than or equal to 0\n");
        free((void *)0x11111111);
    }

    return 0;
}
