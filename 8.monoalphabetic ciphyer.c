#include <stdio.h>
#include <string.h>

void generateCipher(const char *keyword, char *cipher) {
    int used[26] = {0};
    int index = 0;

    // Add keyword letters to cipher
    for (int i = 0; i < strlen(keyword); i++) {
        char ch = keyword[i];
        if (ch >= 'A' && ch <= 'Z' && !used[ch - 'A']) {
            cipher[index++] = ch;
            used[ch - 'A'] = 1;
        }
    }

    // Add remaining letters to cipher
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        if (!used[ch - 'A']) {
            cipher[index++] = ch;
        }
    }
    cipher[index] = '\0';
}

int main() {
    const char *keyword = "CIPHER";
    char cipher[27];

    generateCipher(keyword, cipher);
    printf("Cipher: %s\n", cipher);

    return 0;
}
