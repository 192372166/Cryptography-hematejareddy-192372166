#include <stdio.h>

long modInverse(long e, long phi) {
    long t = 0, newt = 1;
    long r = phi, newr = e;

    while (newr != 0) {
        long q = r / newr;
        long temp = newt;
        newt = t - q * newt;
        t = temp;

        temp = newr;
        newr = r - q * newr;
        r = temp;
    }
    if (r > 1) return -1;
    if (t < 0) t += phi;
    return t;
}

int main() {
    long p = 11, q = 13;
    long n = p * q;
    long phi = (p-1)*(q-1);
    long e = 7;

    long d = modInverse(e, phi);
    printf("Public key: (%ld, %ld)\n", e, n);
    printf("Private key: %ld\n", d);

    return 0;
}
`
