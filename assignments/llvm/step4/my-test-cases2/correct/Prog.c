#include <stdio.h>

int main(void) {
    int number;
    scanf("%d", &number);
    if (isPrime(number)) {
        printf("%d is a prime number", number);
    } else {
        printf("%d is not a prime number", number);
    }
    return 0;
}

int isPrime(int number) {
    for (int i = 0; i < number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}