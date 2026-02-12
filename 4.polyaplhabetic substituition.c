#include <stdio.h>
#include <string.h>

void encrypt(char *plaintext, char *key, char *ciphertext) {
    int keyLength = strlen(key);
    int textLength = strlen(plaintext);
    
    for (int i = 0, j = 0; i < textLength; i++) {
        char currentChar = plaintext[i];
        
        if (currentChar >= 'A' && currentChar <= 'Z') {
            ciphertext[i] = (currentChar + key[j % keyLength] - 2 * 'A') % 26 + 'A';
            j++;
        } else if (currentChar >= 'a' && currentChar <= 'z') {
            ciphertext[i] = (currentChar + key[j % keyLength] - 2 * 'a') % 26 + 'a';
            j++;
        } else {
            ciphertext[i] = currentChar;
        }
    }
    ciphertext[textLength] = '\0';
}

int main() {
    char plaintext[100], key[100], ciphertext[100];
    
    printf("Enter plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);
    plaintext[strcspn(plaintext, "\n")] = 0; // Remove newline character
    
    printf("Enter key: ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = 0; // Remove newline character
    
    encrypt(plaintext, key, ciphertext);
    
    printf("Ciphertext: %s\n", ciphertext);
    
    return 0;
}
