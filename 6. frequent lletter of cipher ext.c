#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

int mod(int a, int b) {
    return (a % b + b) % b;
}

void break_affine_cipher(const char *ciphertext) {
    int freq[ALPHABET_SIZE] = {0};
    int length = strlen(ciphertext);
    
    for (int i = 0; i < length; i++) {
        if (ciphertext[i] >= 'A' && ciphertext[i] <= 'Z') {
            freq[ciphertext[i] - 'A']++;
        }
    }

    int first_max = 1, second_max = 1;
    int first_index = 0, second_index = 0;

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (freq[i] > first_max) {
            second_max = first_max;
            second_index = first_index;
            first_max = freq[i];
            first_index = i;
        } else if (freq[i] > second_max) {
            second_max = freq[i];
            second_index = i;
        }
    }

    int a, b;
    for (a = 1; a < ALPHABET_SIZE; a++) {
        for (b = 0; b < ALPHABET_SIZE; b++) {
            if (mod(first_index - b, ALPHABET_SIZE) == mod(0 * a, ALPHABET_SIZE) && 
                mod(second_index - b, ALPHABET_SIZE) == mod(1 * a, ALPHABET_SIZE)) {
                printf("Possible key: a = %d, b = %d\n", a, b);
            }
        }
    }
}

int main() {
    const char *ciphertext = "YOUR_CIPHERTEXT_HERE";
    break_affine_cipher(ciphertext);
    return 0;
}
