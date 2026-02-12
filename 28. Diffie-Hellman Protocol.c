#include <stdio.h>

long modExp(long base, long exp, long mod) {
    long result = 1;
    while (exp > 0) {
        if (exp % 2)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    long q = 23, a = 5;
    long xA = 6, xB = 15;

    long A = modExp(a, xA, q);
    long B = modExp(a, xB, q);

    long keyA = modExp(B, xA, q);
    long keyB = modExp(A, xB, q);

    printf("Shared key: %ld\n", keyA);
    return 0;
}
