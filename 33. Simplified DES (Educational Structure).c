#include <stdio.h>
#include <stdint.h>

uint64_t simpleDES(uint64_t pt, uint64_t key) {
    return pt ^ key;  // Placeholder (real DES much larger)
}

int main() {
    uint64_t pt = 0x123456789ABCDEF0;
    uint64_t key = 0x0F1571C947D9E859;

    uint64_t ct = simpleDES(pt, key);
    printf("Ciphertext: %llX\n", ct);
    return 0;
}
