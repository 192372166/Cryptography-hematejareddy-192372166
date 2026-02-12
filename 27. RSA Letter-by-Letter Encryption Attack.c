#include <stdio.h>
#include <math.h>

long modExp(long base, long exp, long mod) {
    long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    long e = 5, n = 91;

    for (int m = 0; m < 26; m++) {
        long c = modExp(m, e, n);
        printf("Plain %d -> Cipher %ld\n", m, c);
    }
    return 0;
}
