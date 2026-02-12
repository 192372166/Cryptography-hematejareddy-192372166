#include <stdio.h>
#include <string.h>

#define SIZE 2

void encrypt(char *message, int key[SIZE][SIZE], char *ciphertext) {
    int i, j, k;
    int len = strlen(message);
    int block[SIZE];
    
    for (i = 0; i < len; i += SIZE) {
        for (j = 0; j < SIZE; j++) {
            block[j] = message[i + j] - 'a'; // Convert char to int
        }
        
        for (j = 0; j < SIZE; j++) {
            ciphertext[i + j] = 0;
            for (k = 0; k < SIZE; k++) {
                ciphertext[i + j] += key[j][k] * block[k];
            }
            ciphertext[i + j] = (ciphertext[i + j] % 26) + 'a'; // Convert back to char
        }
    }
    ciphertext[len] = '\0'; // Null-terminate the string
}

void decrypt(char *ciphertext, int key[SIZE][SIZE], char *plaintext) {
    int i, j, k;
    int len = strlen(ciphertext);
    int block[SIZE];
    int inv_key[SIZE][SIZE] = {{7, 19}, {11, 9}}; // Inverse key for decryption
    
    for (i = 0; i < len; i += SIZE) {
        for (j = 0; j < SIZE; j++) {
            block[j] = ciphertext[i + j] - 'a'; // Convert char to int
        }
        
        for (j = 0; j < SIZE; j++) {
            plaintext[i + j] = 0;
            for (k = 0; k < SIZE; k++) {
                plaintext[i + j] += inv_key[j][k] * block[k];
            }
            plaintext[i + j] = (plaintext[i + j] % 26) + 'a'; // Convert back to char
        }
    }
    plaintext[len] = '\0'; // Null-terminate the string
}

int main() {
    char message[] = "meetmeattheusualplaceattenratherthaneightoclock";
    char ciphertext[100];
    char plaintext[100];
    int key[SIZE][SIZE] = {{9, 4}, {5, 7}};
    
    encrypt(message, key, ciphertext);
    printf("Ciphertext: %s\n", ciphertext);
    
    decrypt(ciphertext, key, plaintext);
    printf("Decrypted Plaintext: %s\n", plaintext);
    
    return 0;
}
