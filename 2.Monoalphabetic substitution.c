#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char plaintext[1000];
    char key[27];   
    char ciphertext[1000];

    printf("Enter 26-letter substitution key (cipher alphabet): ");
    scanf("%s", key);

    
    if (strlen(key) != 26) {
        printf("Invalid key! Key must contain exactly 26 letters.\n");
        return 1;
    }

   
    for (int i = 0; i < 26; i++) {
        key[i] = toupper(key[i]);
    }

    getchar(); 

    
    printf("Enter plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);

    
    for (int i = 0; plaintext[i] != '\0'; i++) {
        char ch = plaintext[i];

        if (isupper(ch)) {
            ciphertext[i] = key[ch - 'A'];
        }
        else if (islower(ch)) {
            ciphertext[i] = tolower(key[ch - 'a']);
        }
        else {
            ciphertext[i] = ch;  
        }
    }

    ciphertext[strlen(plaintext)] = '\0';

    printf("Ciphertext: %s\n", ciphertext);

    return 0;
}
