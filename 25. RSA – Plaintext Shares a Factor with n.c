#include <stdio.h>

// Euclidean Algorithm
long gcd(long a, long b) {
    while (b != 0) {
        long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long n = 55;      // 5 * 11
    long plaintext = 10;  // Shares factor 5

    long factor = gcd(n, plaintext);

    if (factor > 1)
        printf("Common factor found: %ld\n", factor);
    else
        printf("No common factor.\n");

    return 0;
}
