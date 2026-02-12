#include <stdio.h>
#include <stdint.h>

uint64_t leftShift(uint64_t x) {
    return x << 1;
}

int main() {
    uint64_t L = 0x123456789ABCDEF0;
    uint64_t Rb = 0x1B;

    uint64_t K1 = leftShift(L);
    if (L & 0x8000000000000000)
        K1 ^= Rb;

    printf("Subkey K1: %llX\n", K1);
    return 0;
}
