#include <stdio.h>
int isPrime(int num) {
    if (num < 2) {
        return 0; 
    }
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1; 
}