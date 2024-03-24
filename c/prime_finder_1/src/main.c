#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int currentAnalized = 2;
    int size = 1000;
    int *primes = malloc(sizeof(int) * size);
    int index = 0;
    while (currentAnalized < size - 1) {
        bool isPrime = true;
        for (int i = 2; i < currentAnalized; i++) {
            if (currentAnalized % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
             primes[index] = currentAnalized;
             index += 1;
        }
        currentAnalized += 1;
    }
    for (int i = 0; i < index; i++) {
        printf("%i\n", primes[i]);
    }
    free(primes);
    return 0;
}

