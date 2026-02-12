#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char text[1000];
    int shift;
    printf("Enter a message: ");
    fgets(text, sizeof(text), stdin);
    printf("Enter shift value: ");
    scanf("%d", &shift);
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (isupper(ch)) {
            text[i] = ((ch - 'A' + shift) % 26) + 'A';
        }
        else if (islower(ch)) {
            text[i] = ((ch - 'a' + shift) % 26) + 'a';
        }
    }

    printf("Encrypted message: %s\n", text);

    return 0;
}
