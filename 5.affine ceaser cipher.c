#include <stdio.h>

int mod(int a, int b) {
    return (a % b + b) % b;
}

char affine_cipher(char p, int a, int b) {
    if (p < 'A' || p > 'Z') {
        return p; // Non-alphabet characters are returned unchanged
    }
    return mod(a * (p - 'A') + b, 26) + 'A';
}

int main() {
    int a = 5; // Example value for a
    int b = 8; // Example value for b
    char plaintext[] = "HELLO";
    char ciphertext[sizeof(plaintext)];

    for (int i = 0; plaintext[i] != '\0'; i++) {
        ciphertext[i] = affine_cipher(plaintext[i], a, b);
    }
    ciphertext[sizeof(plaintext) - 1] = '\0'; // Null-terminate the string

    printf("Ciphertext: %s\n", ciphertext);
    return 0;
}
