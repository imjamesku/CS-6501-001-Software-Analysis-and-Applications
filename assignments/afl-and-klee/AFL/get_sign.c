/*
 * Correct get sign example for AFL
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int get_sign(int x) {

    if (x < 0) {
        return -1;
    } else if (x > 0) {
        return 1;
    }
    if (x == 0) {
        abort();
        return 0;
    }
}

int main(int argc, char **argv) {
    int input;
    scanf("%d", &input);
    printf("%d\n", get_sign(input));
}
